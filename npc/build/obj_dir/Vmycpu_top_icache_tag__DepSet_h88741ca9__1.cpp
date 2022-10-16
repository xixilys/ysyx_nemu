// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_icache_tag.h"

VL_INLINE_OPT void Vmycpu_top_icache_tag___sequent__TOP__mycpu_top__inst_cache__icache_tag_1__3(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___sequent__TOP__mycpu_top__inst_cache__icache_tag_1__3\n"); );
    // Body
    vlSelf->__PVT__tag_regs_113 = vlSelf->__Vdly__tag_regs_113;
    vlSelf->__PVT__tag_regs_80 = vlSelf->__Vdly__tag_regs_80;
    vlSelf->__PVT__tag_regs_77 = vlSelf->__Vdly__tag_regs_77;
    vlSelf->__PVT__tag_regs_74 = vlSelf->__Vdly__tag_regs_74;
    vlSelf->__PVT__tag_regs_71 = vlSelf->__Vdly__tag_regs_71;
    vlSelf->__PVT__tag_regs_68 = vlSelf->__Vdly__tag_regs_68;
    vlSelf->__PVT__tag_regs_65 = vlSelf->__Vdly__tag_regs_65;
    vlSelf->__PVT__tag_regs_62 = vlSelf->__Vdly__tag_regs_62;
    vlSelf->__PVT__tag_regs_59 = vlSelf->__Vdly__tag_regs_59;
    vlSelf->__PVT__tag_regs_56 = vlSelf->__Vdly__tag_regs_56;
    vlSelf->__PVT__tag_regs_53 = vlSelf->__Vdly__tag_regs_53;
    vlSelf->__PVT__tag_regs_50 = vlSelf->__Vdly__tag_regs_50;
    vlSelf->__PVT__tag_regs_47 = vlSelf->__Vdly__tag_regs_47;
    vlSelf->__PVT__tag_regs_44 = vlSelf->__Vdly__tag_regs_44;
    vlSelf->__PVT__tag_regs_41 = vlSelf->__Vdly__tag_regs_41;
    vlSelf->__PVT__tag_regs_38 = vlSelf->__Vdly__tag_regs_38;
    vlSelf->__PVT__tag_regs_35 = vlSelf->__Vdly__tag_regs_35;
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___sequent__TOP__mycpu_top__inst_cache__icache_tag_1__4(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___sequent__TOP__mycpu_top__inst_cache__icache_tag_1__4\n"); );
    // Body
    vlSelf->__Vdly__tag_asid_regs_89 = vlSelf->__PVT__tag_asid_regs_89;
    vlSelf->__Vdly__tag_asid_regs_77 = vlSelf->__PVT__tag_asid_regs_77;
    vlSelf->__Vdly__tag_asid_regs_76 = vlSelf->__PVT__tag_asid_regs_76;
    vlSelf->__Vdly__tag_regs_83 = vlSelf->__PVT__tag_regs_83;
    vlSelf->__Vdly__tag_regs_32 = vlSelf->__PVT__tag_regs_32;
    vlSelf->__Vdly__tag_regs_29 = vlSelf->__PVT__tag_regs_29;
    vlSelf->__Vdly__tag_regs_26 = vlSelf->__PVT__tag_regs_26;
    vlSelf->__Vdly__tag_regs_23 = vlSelf->__PVT__tag_regs_23;
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___sequent__TOP__mycpu_top__inst_cache__icache_tag_1__5(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___sequent__TOP__mycpu_top__inst_cache__icache_tag_1__5\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_83 = 0U;
    } else if ((0x53U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_83 = ((IData)(vlSelf->__PVT__io_wen)
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                            ? vlSelf->__PVT__tag_regs_127
                                            : ((0x7eU 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                ? vlSelf->__PVT__tag_regs_126
                                                : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_asid_regs_76 = 0U;
    } else if ((0x4cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_asid_regs_76 = ((IData)(vlSelf->__PVT__io_wen)
                                             ? 0U : 
                                            ((0x7fU 
                                              == (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                              ? (IData)(vlSelf->__PVT__tag_asid_regs_127)
                                              : ((0x7eU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                  ? (IData)(vlSelf->__PVT__tag_asid_regs_126)
                                                  : (IData)(vlSelf->__PVT___GEN_381))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_asid_regs_77 = 0U;
    } else if ((0x4dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_asid_regs_77 = ((IData)(vlSelf->__PVT__io_wen)
                                             ? 0U : 
                                            ((0x7fU 
                                              == (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                              ? (IData)(vlSelf->__PVT__tag_asid_regs_127)
                                              : ((0x7eU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                  ? (IData)(vlSelf->__PVT__tag_asid_regs_126)
                                                  : (IData)(vlSelf->__PVT___GEN_381))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_asid_regs_89 = 0U;
    } else if ((0x59U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_asid_regs_89 = ((IData)(vlSelf->__PVT__io_wen)
                                             ? 0U : 
                                            ((0x7fU 
                                              == (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                              ? (IData)(vlSelf->__PVT__tag_asid_regs_127)
                                              : ((0x7eU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                  ? (IData)(vlSelf->__PVT__tag_asid_regs_126)
                                                  : (IData)(vlSelf->__PVT___GEN_381))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_asid_regs_100 = 0U;
    } else if ((0x64U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_asid_regs_100 = ((IData)(vlSelf->__PVT__io_wen)
                                              ? 0U : 
                                             ((0x7fU 
                                               == (0x7fU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                               ? (IData)(vlSelf->__PVT__tag_asid_regs_127)
                                               : ((0x7eU 
                                                   == 
                                                   (0x7fU 
                                                    & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                   ? (IData)(vlSelf->__PVT__tag_asid_regs_126)
                                                   : (IData)(vlSelf->__PVT___GEN_381))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_asid_regs_35 = 0U;
    } else if ((0x23U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_asid_regs_35 = ((IData)(vlSelf->__PVT__io_wen)
                                             ? 0U : 
                                            ((0x7fU 
                                              == (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                              ? (IData)(vlSelf->__PVT__tag_asid_regs_127)
                                              : ((0x7eU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                  ? (IData)(vlSelf->__PVT__tag_asid_regs_126)
                                                  : (IData)(vlSelf->__PVT___GEN_381))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_asid_regs_34 = 0U;
    } else if ((0x22U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_asid_regs_34 = ((IData)(vlSelf->__PVT__io_wen)
                                             ? 0U : 
                                            ((0x7fU 
                                              == (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                              ? (IData)(vlSelf->__PVT__tag_asid_regs_127)
                                              : ((0x7eU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                  ? (IData)(vlSelf->__PVT__tag_asid_regs_126)
                                                  : (IData)(vlSelf->__PVT___GEN_381))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_asid_regs_33 = 0U;
    } else if ((0x21U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_asid_regs_33 = ((IData)(vlSelf->__PVT__io_wen)
                                             ? 0U : 
                                            ((0x7fU 
                                              == (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                              ? (IData)(vlSelf->__PVT__tag_asid_regs_127)
                                              : ((0x7eU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                  ? (IData)(vlSelf->__PVT__tag_asid_regs_126)
                                                  : (IData)(vlSelf->__PVT___GEN_381))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_asid_regs_32 = 0U;
    } else if ((0x20U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_asid_regs_32 = ((IData)(vlSelf->__PVT__io_wen)
                                             ? 0U : 
                                            ((0x7fU 
                                              == (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                              ? (IData)(vlSelf->__PVT__tag_asid_regs_127)
                                              : ((0x7eU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                  ? (IData)(vlSelf->__PVT__tag_asid_regs_126)
                                                  : (IData)(vlSelf->__PVT___GEN_381))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_32 = 0U;
    } else if ((0x20U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_32 = ((IData)(vlSelf->__PVT__io_wen)
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                            ? vlSelf->__PVT__tag_regs_127
                                            : ((0x7eU 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                ? vlSelf->__PVT__tag_regs_126
                                                : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_asid_regs_31 = 0U;
    } else if ((0x1fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_asid_regs_31 = ((IData)(vlSelf->__PVT__io_wen)
                                             ? 0U : 
                                            ((0x7fU 
                                              == (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                              ? (IData)(vlSelf->__PVT__tag_asid_regs_127)
                                              : ((0x7eU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                  ? (IData)(vlSelf->__PVT__tag_asid_regs_126)
                                                  : (IData)(vlSelf->__PVT___GEN_381))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_asid_regs_30 = 0U;
    } else if ((0x1eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_asid_regs_30 = ((IData)(vlSelf->__PVT__io_wen)
                                             ? 0U : 
                                            ((0x7fU 
                                              == (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                              ? (IData)(vlSelf->__PVT__tag_asid_regs_127)
                                              : ((0x7eU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                  ? (IData)(vlSelf->__PVT__tag_asid_regs_126)
                                                  : (IData)(vlSelf->__PVT___GEN_381))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_asid_regs_29 = 0U;
    } else if ((0x1dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_asid_regs_29 = ((IData)(vlSelf->__PVT__io_wen)
                                             ? 0U : 
                                            ((0x7fU 
                                              == (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                              ? (IData)(vlSelf->__PVT__tag_asid_regs_127)
                                              : ((0x7eU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                  ? (IData)(vlSelf->__PVT__tag_asid_regs_126)
                                                  : (IData)(vlSelf->__PVT___GEN_381))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_29 = 0U;
    } else if ((0x1dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_29 = ((IData)(vlSelf->__PVT__io_wen)
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                            ? vlSelf->__PVT__tag_regs_127
                                            : ((0x7eU 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                ? vlSelf->__PVT__tag_regs_126
                                                : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_asid_regs_28 = 0U;
    } else if ((0x1cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_asid_regs_28 = ((IData)(vlSelf->__PVT__io_wen)
                                             ? 0U : 
                                            ((0x7fU 
                                              == (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                              ? (IData)(vlSelf->__PVT__tag_asid_regs_127)
                                              : ((0x7eU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                  ? (IData)(vlSelf->__PVT__tag_asid_regs_126)
                                                  : (IData)(vlSelf->__PVT___GEN_381))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_26 = 0U;
    } else if ((0x1aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_26 = ((IData)(vlSelf->__PVT__io_wen)
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                            ? vlSelf->__PVT__tag_regs_127
                                            : ((0x7eU 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                ? vlSelf->__PVT__tag_regs_126
                                                : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_23 = 0U;
    } else if ((0x17U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_23 = ((IData)(vlSelf->__PVT__io_wen)
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                            ? vlSelf->__PVT__tag_regs_127
                                            : ((0x7eU 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                ? vlSelf->__PVT__tag_regs_126
                                                : vlSelf->__PVT___GEN_125)));
    }
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___sequent__TOP__mycpu_top__inst_cache__icache_tag_1__6(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___sequent__TOP__mycpu_top__inst_cache__icache_tag_1__6\n"); );
    // Body
    vlSelf->__PVT__tag_regs_83 = vlSelf->__Vdly__tag_regs_83;
    vlSelf->__PVT__tag_regs_32 = vlSelf->__Vdly__tag_regs_32;
    vlSelf->__PVT__tag_regs_29 = vlSelf->__Vdly__tag_regs_29;
    vlSelf->__PVT__tag_regs_26 = vlSelf->__Vdly__tag_regs_26;
    vlSelf->__PVT__tag_regs_23 = vlSelf->__Vdly__tag_regs_23;
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___sequent__TOP__mycpu_top__inst_cache__icache_tag_1__7(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___sequent__TOP__mycpu_top__inst_cache__icache_tag_1__7\n"); );
    // Body
    vlSelf->__Vdly__tag_regs_125 = vlSelf->__PVT__tag_regs_125;
    vlSelf->__Vdly__tag_regs_119 = vlSelf->__PVT__tag_regs_119;
    vlSelf->__Vdly__tag_regs_116 = vlSelf->__PVT__tag_regs_116;
    vlSelf->__Vdly__tag_regs_110 = vlSelf->__PVT__tag_regs_110;
    vlSelf->__Vdly__tag_regs_107 = vlSelf->__PVT__tag_regs_107;
    vlSelf->__Vdly__tag_regs_104 = vlSelf->__PVT__tag_regs_104;
    vlSelf->__Vdly__tag_regs_101 = vlSelf->__PVT__tag_regs_101;
    vlSelf->__Vdly__tag_regs_98 = vlSelf->__PVT__tag_regs_98;
    vlSelf->__Vdly__tag_regs_95 = vlSelf->__PVT__tag_regs_95;
    vlSelf->__Vdly__tag_regs_92 = vlSelf->__PVT__tag_regs_92;
    vlSelf->__Vdly__tag_regs_91 = vlSelf->__PVT__tag_regs_91;
    vlSelf->__Vdly__tag_regs_90 = vlSelf->__PVT__tag_regs_90;
    vlSelf->__Vdly__tag_regs_89 = vlSelf->__PVT__tag_regs_89;
    vlSelf->__Vdly__tag_regs_88 = vlSelf->__PVT__tag_regs_88;
    vlSelf->__Vdly__tag_regs_87 = vlSelf->__PVT__tag_regs_87;
    vlSelf->__Vdly__tag_regs_86 = vlSelf->__PVT__tag_regs_86;
    vlSelf->__Vdly__tag_regs_57 = vlSelf->__PVT__tag_regs_57;
    vlSelf->__Vdly__tag_regs_55 = vlSelf->__PVT__tag_regs_55;
    vlSelf->__Vdly__tag_regs_54 = vlSelf->__PVT__tag_regs_54;
    vlSelf->__Vdly__tag_regs_51 = vlSelf->__PVT__tag_regs_51;
    vlSelf->__Vdly__tag_asid_regs_49 = vlSelf->__PVT__tag_asid_regs_49;
    vlSelf->__Vdly__tag_regs_24 = vlSelf->__PVT__tag_regs_24;
    vlSelf->__Vdly__tag_regs_22 = vlSelf->__PVT__tag_regs_22;
    vlSelf->__Vdly__tag_regs_21 = vlSelf->__PVT__tag_regs_21;
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___sequent__TOP__mycpu_top__inst_cache__icache_tag_1__8(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___sequent__TOP__mycpu_top__inst_cache__icache_tag_1__8\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_51 = 0U;
    } else if ((0x33U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_51 = ((IData)(vlSelf->__PVT__io_wen)
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                            ? vlSelf->__PVT__tag_regs_127
                                            : ((0x7eU 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                ? vlSelf->__PVT__tag_regs_126
                                                : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_54 = 0U;
    } else if ((0x36U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_54 = ((IData)(vlSelf->__PVT__io_wen)
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                            ? vlSelf->__PVT__tag_regs_127
                                            : ((0x7eU 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                ? vlSelf->__PVT__tag_regs_126
                                                : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_55 = 0U;
    } else if ((0x37U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_55 = ((IData)(vlSelf->__PVT__io_wen)
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                            ? vlSelf->__PVT__tag_regs_127
                                            : ((0x7eU 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                ? vlSelf->__PVT__tag_regs_126
                                                : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_57 = 0U;
    } else if ((0x39U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_57 = ((IData)(vlSelf->__PVT__io_wen)
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                            ? vlSelf->__PVT__tag_regs_127
                                            : ((0x7eU 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                ? vlSelf->__PVT__tag_regs_126
                                                : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_86 = 0U;
    } else if ((0x56U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_86 = ((IData)(vlSelf->__PVT__io_wen)
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                            ? vlSelf->__PVT__tag_regs_127
                                            : ((0x7eU 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                ? vlSelf->__PVT__tag_regs_126
                                                : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_87 = 0U;
    } else if ((0x57U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_87 = ((IData)(vlSelf->__PVT__io_wen)
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                            ? vlSelf->__PVT__tag_regs_127
                                            : ((0x7eU 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                ? vlSelf->__PVT__tag_regs_126
                                                : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_88 = 0U;
    } else if ((0x58U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_88 = ((IData)(vlSelf->__PVT__io_wen)
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                            ? vlSelf->__PVT__tag_regs_127
                                            : ((0x7eU 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                ? vlSelf->__PVT__tag_regs_126
                                                : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_89 = 0U;
    } else if ((0x59U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_89 = ((IData)(vlSelf->__PVT__io_wen)
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                            ? vlSelf->__PVT__tag_regs_127
                                            : ((0x7eU 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                ? vlSelf->__PVT__tag_regs_126
                                                : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_90 = 0U;
    } else if ((0x5aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_90 = ((IData)(vlSelf->__PVT__io_wen)
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                            ? vlSelf->__PVT__tag_regs_127
                                            : ((0x7eU 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                ? vlSelf->__PVT__tag_regs_126
                                                : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_91 = 0U;
    } else if ((0x5bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_91 = ((IData)(vlSelf->__PVT__io_wen)
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                            ? vlSelf->__PVT__tag_regs_127
                                            : ((0x7eU 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                ? vlSelf->__PVT__tag_regs_126
                                                : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_92 = 0U;
    } else if ((0x5cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_92 = ((IData)(vlSelf->__PVT__io_wen)
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                            ? vlSelf->__PVT__tag_regs_127
                                            : ((0x7eU 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                ? vlSelf->__PVT__tag_regs_126
                                                : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_95 = 0U;
    } else if ((0x5fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_95 = ((IData)(vlSelf->__PVT__io_wen)
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                            ? vlSelf->__PVT__tag_regs_127
                                            : ((0x7eU 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                ? vlSelf->__PVT__tag_regs_126
                                                : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_98 = 0U;
    } else if ((0x62U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_98 = ((IData)(vlSelf->__PVT__io_wen)
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                            ? vlSelf->__PVT__tag_regs_127
                                            : ((0x7eU 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                ? vlSelf->__PVT__tag_regs_126
                                                : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_101 = 0U;
    } else if ((0x65U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_101 = ((IData)(vlSelf->__PVT__io_wen)
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x7fU 
                                             == (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                             ? vlSelf->__PVT__tag_regs_127
                                             : ((0x7eU 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                 ? vlSelf->__PVT__tag_regs_126
                                                 : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_104 = 0U;
    } else if ((0x68U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_104 = ((IData)(vlSelf->__PVT__io_wen)
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x7fU 
                                             == (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                             ? vlSelf->__PVT__tag_regs_127
                                             : ((0x7eU 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                 ? vlSelf->__PVT__tag_regs_126
                                                 : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_107 = 0U;
    } else if ((0x6bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_107 = ((IData)(vlSelf->__PVT__io_wen)
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x7fU 
                                             == (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                             ? vlSelf->__PVT__tag_regs_127
                                             : ((0x7eU 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                 ? vlSelf->__PVT__tag_regs_126
                                                 : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_110 = 0U;
    } else if ((0x6eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_110 = ((IData)(vlSelf->__PVT__io_wen)
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x7fU 
                                             == (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                             ? vlSelf->__PVT__tag_regs_127
                                             : ((0x7eU 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                 ? vlSelf->__PVT__tag_regs_126
                                                 : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_116 = 0U;
    } else if ((0x74U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_116 = ((IData)(vlSelf->__PVT__io_wen)
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x7fU 
                                             == (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                             ? vlSelf->__PVT__tag_regs_127
                                             : ((0x7eU 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                 ? vlSelf->__PVT__tag_regs_126
                                                 : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_119 = 0U;
    } else if ((0x77U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_119 = ((IData)(vlSelf->__PVT__io_wen)
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x7fU 
                                             == (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                             ? vlSelf->__PVT__tag_regs_127
                                             : ((0x7eU 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                 ? vlSelf->__PVT__tag_regs_126
                                                 : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_125 = 0U;
    } else if ((0x7dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_125 = ((IData)(vlSelf->__PVT__io_wen)
                                         ? vlSelf->__PVT__io_wdata
                                         : ((0x7fU 
                                             == (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                             ? vlSelf->__PVT__tag_regs_127
                                             : ((0x7eU 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                 ? vlSelf->__PVT__tag_regs_126
                                                 : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_asid_regs_49 = 0U;
    } else if ((0x31U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_asid_regs_49 = ((IData)(vlSelf->__PVT__io_wen)
                                             ? 0U : 
                                            ((0x7fU 
                                              == (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                              ? (IData)(vlSelf->__PVT__tag_asid_regs_127)
                                              : ((0x7eU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                  ? (IData)(vlSelf->__PVT__tag_asid_regs_126)
                                                  : (IData)(vlSelf->__PVT___GEN_381))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_asid_regs_45 = 0U;
    } else if ((0x2dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_asid_regs_45 = ((IData)(vlSelf->__PVT__io_wen)
                                             ? 0U : 
                                            ((0x7fU 
                                              == (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                              ? (IData)(vlSelf->__PVT__tag_asid_regs_127)
                                              : ((0x7eU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                  ? (IData)(vlSelf->__PVT__tag_asid_regs_126)
                                                  : (IData)(vlSelf->__PVT___GEN_381))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_asid_regs_44 = 0U;
    } else if ((0x2cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_asid_regs_44 = ((IData)(vlSelf->__PVT__io_wen)
                                             ? 0U : 
                                            ((0x7fU 
                                              == (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                              ? (IData)(vlSelf->__PVT__tag_asid_regs_127)
                                              : ((0x7eU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                  ? (IData)(vlSelf->__PVT__tag_asid_regs_126)
                                                  : (IData)(vlSelf->__PVT___GEN_381))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_asid_regs_43 = 0U;
    } else if ((0x2bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_asid_regs_43 = ((IData)(vlSelf->__PVT__io_wen)
                                             ? 0U : 
                                            ((0x7fU 
                                              == (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                              ? (IData)(vlSelf->__PVT__tag_asid_regs_127)
                                              : ((0x7eU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                  ? (IData)(vlSelf->__PVT__tag_asid_regs_126)
                                                  : (IData)(vlSelf->__PVT___GEN_381))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_asid_regs_42 = 0U;
    } else if ((0x2aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_asid_regs_42 = ((IData)(vlSelf->__PVT__io_wen)
                                             ? 0U : 
                                            ((0x7fU 
                                              == (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                              ? (IData)(vlSelf->__PVT__tag_asid_regs_127)
                                              : ((0x7eU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                  ? (IData)(vlSelf->__PVT__tag_asid_regs_126)
                                                  : (IData)(vlSelf->__PVT___GEN_381))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_asid_regs_41 = 0U;
    } else if ((0x29U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_asid_regs_41 = ((IData)(vlSelf->__PVT__io_wen)
                                             ? 0U : 
                                            ((0x7fU 
                                              == (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                              ? (IData)(vlSelf->__PVT__tag_asid_regs_127)
                                              : ((0x7eU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                  ? (IData)(vlSelf->__PVT__tag_asid_regs_126)
                                                  : (IData)(vlSelf->__PVT___GEN_381))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_asid_regs_40 = 0U;
    } else if ((0x28U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_asid_regs_40 = ((IData)(vlSelf->__PVT__io_wen)
                                             ? 0U : 
                                            ((0x7fU 
                                              == (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                              ? (IData)(vlSelf->__PVT__tag_asid_regs_127)
                                              : ((0x7eU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                  ? (IData)(vlSelf->__PVT__tag_asid_regs_126)
                                                  : (IData)(vlSelf->__PVT___GEN_381))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_24 = 0U;
    } else if ((0x18U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_24 = ((IData)(vlSelf->__PVT__io_wen)
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                            ? vlSelf->__PVT__tag_regs_127
                                            : ((0x7eU 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                ? vlSelf->__PVT__tag_regs_126
                                                : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_22 = 0U;
    } else if ((0x16U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_22 = ((IData)(vlSelf->__PVT__io_wen)
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                            ? vlSelf->__PVT__tag_regs_127
                                            : ((0x7eU 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                ? vlSelf->__PVT__tag_regs_126
                                                : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_asid_regs_21 = 0U;
    } else if ((0x15U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_asid_regs_21 = ((IData)(vlSelf->__PVT__io_wen)
                                             ? 0U : 
                                            ((0x7fU 
                                              == (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                              ? (IData)(vlSelf->__PVT__tag_asid_regs_127)
                                              : ((0x7eU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                  ? (IData)(vlSelf->__PVT__tag_asid_regs_126)
                                                  : (IData)(vlSelf->__PVT___GEN_381))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_21 = 0U;
    } else if ((0x15U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_21 = ((IData)(vlSelf->__PVT__io_wen)
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                            ? vlSelf->__PVT__tag_regs_127
                                            : ((0x7eU 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                ? vlSelf->__PVT__tag_regs_126
                                                : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_asid_regs_20 = 0U;
    } else if ((0x14U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_asid_regs_20 = ((IData)(vlSelf->__PVT__io_wen)
                                             ? 0U : 
                                            ((0x7fU 
                                              == (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                              ? (IData)(vlSelf->__PVT__tag_asid_regs_127)
                                              : ((0x7eU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                  ? (IData)(vlSelf->__PVT__tag_asid_regs_126)
                                                  : (IData)(vlSelf->__PVT___GEN_381))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_asid_regs_17 = 0U;
    } else if ((0x11U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_asid_regs_17 = ((IData)(vlSelf->__PVT__io_wen)
                                             ? 0U : 
                                            ((0x7fU 
                                              == (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                              ? (IData)(vlSelf->__PVT__tag_asid_regs_127)
                                              : ((0x7eU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                  ? (IData)(vlSelf->__PVT__tag_asid_regs_126)
                                                  : (IData)(vlSelf->__PVT___GEN_381))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_17 = 0U;
    } else if ((0x11U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_17 = ((IData)(vlSelf->__PVT__io_wen)
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                            ? vlSelf->__PVT__tag_regs_127
                                            : ((0x7eU 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                ? vlSelf->__PVT__tag_regs_126
                                                : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_asid_regs_16 = 0U;
    } else if ((0x10U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_asid_regs_16 = ((IData)(vlSelf->__PVT__io_wen)
                                             ? 0U : 
                                            ((0x7fU 
                                              == (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                              ? (IData)(vlSelf->__PVT__tag_asid_regs_127)
                                              : ((0x7eU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                  ? (IData)(vlSelf->__PVT__tag_asid_regs_126)
                                                  : (IData)(vlSelf->__PVT___GEN_381))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_16 = 0U;
    } else if ((0x10U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_16 = ((IData)(vlSelf->__PVT__io_wen)
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                            ? vlSelf->__PVT__tag_regs_127
                                            : ((0x7eU 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                ? vlSelf->__PVT__tag_regs_126
                                                : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_asid_regs_15 = 0U;
    } else if ((0xfU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_asid_regs_15 = ((IData)(vlSelf->__PVT__io_wen)
                                             ? 0U : 
                                            ((0x7fU 
                                              == (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                              ? (IData)(vlSelf->__PVT__tag_asid_regs_127)
                                              : ((0x7eU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                  ? (IData)(vlSelf->__PVT__tag_asid_regs_126)
                                                  : (IData)(vlSelf->__PVT___GEN_381))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_15 = 0U;
    } else if ((0xfU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_15 = ((IData)(vlSelf->__PVT__io_wen)
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                            ? vlSelf->__PVT__tag_regs_127
                                            : ((0x7eU 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                ? vlSelf->__PVT__tag_regs_126
                                                : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_asid_regs_14 = 0U;
    } else if ((0xeU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_asid_regs_14 = ((IData)(vlSelf->__PVT__io_wen)
                                             ? 0U : 
                                            ((0x7fU 
                                              == (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                              ? (IData)(vlSelf->__PVT__tag_asid_regs_127)
                                              : ((0x7eU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                  ? (IData)(vlSelf->__PVT__tag_asid_regs_126)
                                                  : (IData)(vlSelf->__PVT___GEN_381))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_14 = 0U;
    } else if ((0xeU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_14 = ((IData)(vlSelf->__PVT__io_wen)
                                        ? vlSelf->__PVT__io_wdata
                                        : ((0x7fU == 
                                            (0x7fU 
                                             & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                            ? vlSelf->__PVT__tag_regs_127
                                            : ((0x7eU 
                                                == 
                                                (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                ? vlSelf->__PVT__tag_regs_126
                                                : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_asid_regs_5 = 0U;
    } else if ((5U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_asid_regs_5 = ((IData)(vlSelf->__PVT__io_wen)
                                            ? 0U : 
                                           ((0x7fU 
                                             == (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                             ? (IData)(vlSelf->__PVT__tag_asid_regs_127)
                                             : ((0x7eU 
                                                 == 
                                                 (0x7fU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                 ? (IData)(vlSelf->__PVT__tag_asid_regs_126)
                                                 : (IData)(vlSelf->__PVT___GEN_381))));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_5 = 0U;
    } else if ((5U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_5 = ((IData)(vlSelf->__PVT__io_wen)
                                       ? vlSelf->__PVT__io_wdata
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                           ? vlSelf->__PVT__tag_regs_127
                                           : ((0x7eU 
                                               == (0x7fU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                               ? vlSelf->__PVT__tag_regs_126
                                               : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_0 = 0U;
    } else if ((0U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_0 = ((IData)(vlSelf->__PVT__io_wen)
                                       ? vlSelf->__PVT__io_wdata
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                           ? vlSelf->__PVT__tag_regs_127
                                           : ((0x7eU 
                                               == (0x7fU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                               ? vlSelf->__PVT__tag_regs_126
                                               : vlSelf->__PVT___GEN_125)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_1 = 0U;
    } else if ((1U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        vlSelf->__Vdly__tag_regs_1 = ((IData)(vlSelf->__PVT__io_wen)
                                       ? vlSelf->__PVT__io_wdata
                                       : ((0x7fU == 
                                           (0x7fU & 
                                            VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                           ? vlSelf->__PVT__tag_regs_127
                                           : ((0x7eU 
                                               == (0x7fU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                               ? vlSelf->__PVT__tag_regs_126
                                               : vlSelf->__PVT___GEN_125)));
    }
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___sequent__TOP__mycpu_top__inst_cache__icache_tag_1__9(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___sequent__TOP__mycpu_top__inst_cache__icache_tag_1__9\n"); );
    // Body
    vlSelf->__PVT__tag_regs_125 = vlSelf->__Vdly__tag_regs_125;
    vlSelf->__PVT__tag_regs_119 = vlSelf->__Vdly__tag_regs_119;
    vlSelf->__PVT__tag_regs_116 = vlSelf->__Vdly__tag_regs_116;
    vlSelf->__PVT__tag_regs_110 = vlSelf->__Vdly__tag_regs_110;
    vlSelf->__PVT__tag_regs_107 = vlSelf->__Vdly__tag_regs_107;
    vlSelf->__PVT__tag_regs_104 = vlSelf->__Vdly__tag_regs_104;
    vlSelf->__PVT__tag_regs_101 = vlSelf->__Vdly__tag_regs_101;
    vlSelf->__PVT__tag_regs_98 = vlSelf->__Vdly__tag_regs_98;
    vlSelf->__PVT__tag_regs_95 = vlSelf->__Vdly__tag_regs_95;
    vlSelf->__PVT__tag_regs_92 = vlSelf->__Vdly__tag_regs_92;
    vlSelf->__PVT__tag_regs_89 = vlSelf->__Vdly__tag_regs_89;
    vlSelf->__PVT__tag_regs_86 = vlSelf->__Vdly__tag_regs_86;
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___sequent__TOP__mycpu_top__inst_cache__icache_tag_1__10(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___sequent__TOP__mycpu_top__inst_cache__icache_tag_1__10\n"); );
    // Body
    vlSelf->__Vdly__tag_regs_126 = vlSelf->__PVT__tag_regs_126;
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___sequent__TOP__mycpu_top__inst_cache__icache_tag_1__11(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___sequent__TOP__mycpu_top__inst_cache__icache_tag_1__11\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_126 = 0U;
    } else if ((0x7eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        if (vlSelf->__PVT__io_wen) {
            vlSelf->__Vdly__tag_regs_126 = vlSelf->__PVT__io_wdata;
        } else if ((0x7fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
            vlSelf->__Vdly__tag_regs_126 = vlSelf->__PVT__tag_regs_127;
        } else if ((0x7eU != (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
            vlSelf->__Vdly__tag_regs_126 = vlSelf->__PVT___GEN_125;
        }
    }
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___sequent__TOP__mycpu_top__inst_cache__icache_tag_1__12(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___sequent__TOP__mycpu_top__inst_cache__icache_tag_1__12\n"); );
    // Body
    vlSelf->__PVT__tag_regs_124 = vlSelf->__Vdly__tag_regs_124;
    vlSelf->__PVT__tag_regs_123 = vlSelf->__Vdly__tag_regs_123;
    vlSelf->__PVT__tag_regs_122 = vlSelf->__Vdly__tag_regs_122;
    vlSelf->__PVT__tag_regs_121 = vlSelf->__Vdly__tag_regs_121;
    vlSelf->__PVT__tag_regs_120 = vlSelf->__Vdly__tag_regs_120;
    vlSelf->__PVT__tag_regs_118 = vlSelf->__Vdly__tag_regs_118;
    vlSelf->__PVT__tag_regs_117 = vlSelf->__Vdly__tag_regs_117;
    vlSelf->__PVT__tag_regs_115 = vlSelf->__Vdly__tag_regs_115;
    vlSelf->__PVT__tag_regs_114 = vlSelf->__Vdly__tag_regs_114;
    vlSelf->__PVT__tag_regs_112 = vlSelf->__Vdly__tag_regs_112;
    vlSelf->__PVT__tag_regs_111 = vlSelf->__Vdly__tag_regs_111;
    vlSelf->__PVT__tag_regs_109 = vlSelf->__Vdly__tag_regs_109;
    vlSelf->__PVT__tag_regs_108 = vlSelf->__Vdly__tag_regs_108;
    vlSelf->__PVT__tag_regs_106 = vlSelf->__Vdly__tag_regs_106;
    vlSelf->__PVT__tag_regs_105 = vlSelf->__Vdly__tag_regs_105;
    vlSelf->__PVT__tag_regs_103 = vlSelf->__Vdly__tag_regs_103;
    vlSelf->__PVT__tag_regs_102 = vlSelf->__Vdly__tag_regs_102;
    vlSelf->__PVT__tag_regs_100 = vlSelf->__Vdly__tag_regs_100;
    vlSelf->__PVT__tag_regs_99 = vlSelf->__Vdly__tag_regs_99;
    vlSelf->__PVT__tag_regs_97 = vlSelf->__Vdly__tag_regs_97;
    vlSelf->__PVT__tag_regs_96 = vlSelf->__Vdly__tag_regs_96;
    vlSelf->__PVT__tag_regs_94 = vlSelf->__Vdly__tag_regs_94;
    vlSelf->__PVT__tag_regs_93 = vlSelf->__Vdly__tag_regs_93;
    vlSelf->__PVT__tag_regs_91 = vlSelf->__Vdly__tag_regs_91;
    vlSelf->__PVT__tag_regs_90 = vlSelf->__Vdly__tag_regs_90;
    vlSelf->__PVT__tag_regs_88 = vlSelf->__Vdly__tag_regs_88;
    vlSelf->__PVT__tag_regs_87 = vlSelf->__Vdly__tag_regs_87;
    vlSelf->__PVT__tag_regs_85 = vlSelf->__Vdly__tag_regs_85;
    vlSelf->__PVT__tag_regs_84 = vlSelf->__Vdly__tag_regs_84;
    vlSelf->__PVT__tag_regs_82 = vlSelf->__Vdly__tag_regs_82;
    vlSelf->__PVT__tag_regs_81 = vlSelf->__Vdly__tag_regs_81;
    vlSelf->__PVT__tag_regs_79 = vlSelf->__Vdly__tag_regs_79;
    vlSelf->__PVT__tag_regs_78 = vlSelf->__Vdly__tag_regs_78;
    vlSelf->__PVT__tag_regs_76 = vlSelf->__Vdly__tag_regs_76;
    vlSelf->__PVT__tag_regs_75 = vlSelf->__Vdly__tag_regs_75;
    vlSelf->__PVT__tag_regs_73 = vlSelf->__Vdly__tag_regs_73;
    vlSelf->__PVT__tag_regs_72 = vlSelf->__Vdly__tag_regs_72;
    vlSelf->__PVT__tag_regs_70 = vlSelf->__Vdly__tag_regs_70;
    vlSelf->__PVT__tag_regs_69 = vlSelf->__Vdly__tag_regs_69;
    vlSelf->__PVT__tag_regs_67 = vlSelf->__Vdly__tag_regs_67;
    vlSelf->__PVT__tag_regs_66 = vlSelf->__Vdly__tag_regs_66;
    vlSelf->__PVT__tag_regs_64 = vlSelf->__Vdly__tag_regs_64;
    vlSelf->__PVT__tag_regs_63 = vlSelf->__Vdly__tag_regs_63;
    vlSelf->__PVT__tag_regs_61 = vlSelf->__Vdly__tag_regs_61;
    vlSelf->__PVT__tag_regs_60 = vlSelf->__Vdly__tag_regs_60;
    vlSelf->__PVT__tag_regs_58 = vlSelf->__Vdly__tag_regs_58;
    vlSelf->__PVT__tag_regs_57 = vlSelf->__Vdly__tag_regs_57;
    vlSelf->__PVT__tag_regs_55 = vlSelf->__Vdly__tag_regs_55;
    vlSelf->__PVT__tag_regs_54 = vlSelf->__Vdly__tag_regs_54;
    vlSelf->__PVT__tag_regs_52 = vlSelf->__Vdly__tag_regs_52;
    vlSelf->__PVT__tag_regs_51 = vlSelf->__Vdly__tag_regs_51;
    vlSelf->__PVT__tag_regs_49 = vlSelf->__Vdly__tag_regs_49;
    vlSelf->__PVT__tag_regs_48 = vlSelf->__Vdly__tag_regs_48;
    vlSelf->__PVT__tag_regs_46 = vlSelf->__Vdly__tag_regs_46;
    vlSelf->__PVT__tag_regs_45 = vlSelf->__Vdly__tag_regs_45;
    vlSelf->__PVT__tag_regs_43 = vlSelf->__Vdly__tag_regs_43;
    vlSelf->__PVT__tag_regs_42 = vlSelf->__Vdly__tag_regs_42;
    vlSelf->__PVT__tag_regs_40 = vlSelf->__Vdly__tag_regs_40;
    vlSelf->__PVT__tag_regs_39 = vlSelf->__Vdly__tag_regs_39;
    vlSelf->__PVT__tag_regs_37 = vlSelf->__Vdly__tag_regs_37;
    vlSelf->__PVT__tag_regs_36 = vlSelf->__Vdly__tag_regs_36;
    vlSelf->__PVT__tag_regs_34 = vlSelf->__Vdly__tag_regs_34;
    vlSelf->__PVT__tag_regs_33 = vlSelf->__Vdly__tag_regs_33;
    vlSelf->__PVT__tag_regs_31 = vlSelf->__Vdly__tag_regs_31;
    vlSelf->__PVT__tag_regs_30 = vlSelf->__Vdly__tag_regs_30;
    vlSelf->__PVT__tag_regs_28 = vlSelf->__Vdly__tag_regs_28;
    vlSelf->__PVT__tag_regs_27 = vlSelf->__Vdly__tag_regs_27;
    vlSelf->__PVT__tag_regs_25 = vlSelf->__Vdly__tag_regs_25;
    vlSelf->__PVT__tag_regs_24 = vlSelf->__Vdly__tag_regs_24;
    vlSelf->__PVT__tag_asid_regs_23 = vlSelf->__Vdly__tag_asid_regs_23;
    vlSelf->__PVT__tag_asid_regs_22 = vlSelf->__Vdly__tag_asid_regs_22;
    vlSelf->__PVT__tag_regs_22 = vlSelf->__Vdly__tag_regs_22;
    vlSelf->__PVT__tag_asid_regs_21 = vlSelf->__Vdly__tag_asid_regs_21;
    vlSelf->__PVT__tag_regs_21 = vlSelf->__Vdly__tag_regs_21;
    vlSelf->__PVT__tag_asid_regs_20 = vlSelf->__Vdly__tag_asid_regs_20;
    vlSelf->__PVT__tag_regs_20 = vlSelf->__Vdly__tag_regs_20;
    vlSelf->__PVT__tag_asid_regs_19 = vlSelf->__Vdly__tag_asid_regs_19;
    vlSelf->__PVT__tag_regs_19 = vlSelf->__Vdly__tag_regs_19;
    vlSelf->__PVT__tag_asid_regs_18 = vlSelf->__Vdly__tag_asid_regs_18;
    vlSelf->__PVT__tag_regs_18 = vlSelf->__Vdly__tag_regs_18;
    vlSelf->__PVT__tag_asid_regs_17 = vlSelf->__Vdly__tag_asid_regs_17;
    vlSelf->__PVT__tag_regs_17 = vlSelf->__Vdly__tag_regs_17;
    vlSelf->__PVT__tag_asid_regs_16 = vlSelf->__Vdly__tag_asid_regs_16;
    vlSelf->__PVT__tag_regs_16 = vlSelf->__Vdly__tag_regs_16;
    vlSelf->__PVT__tag_asid_regs_15 = vlSelf->__Vdly__tag_asid_regs_15;
    vlSelf->__PVT__tag_regs_15 = vlSelf->__Vdly__tag_regs_15;
    vlSelf->__PVT__tag_asid_regs_14 = vlSelf->__Vdly__tag_asid_regs_14;
    vlSelf->__PVT__tag_regs_14 = vlSelf->__Vdly__tag_regs_14;
    vlSelf->__PVT__tag_asid_regs_13 = vlSelf->__Vdly__tag_asid_regs_13;
    vlSelf->__PVT__tag_regs_13 = vlSelf->__Vdly__tag_regs_13;
    vlSelf->__PVT__tag_asid_regs_12 = vlSelf->__Vdly__tag_asid_regs_12;
    vlSelf->__PVT__tag_regs_12 = vlSelf->__Vdly__tag_regs_12;
    vlSelf->__PVT__tag_asid_regs_11 = vlSelf->__Vdly__tag_asid_regs_11;
    vlSelf->__PVT__tag_regs_11 = vlSelf->__Vdly__tag_regs_11;
    vlSelf->__PVT__tag_asid_regs_10 = vlSelf->__Vdly__tag_asid_regs_10;
    vlSelf->__PVT__tag_regs_10 = vlSelf->__Vdly__tag_regs_10;
    vlSelf->__PVT__tag_asid_regs_9 = vlSelf->__Vdly__tag_asid_regs_9;
    vlSelf->__PVT__tag_regs_9 = vlSelf->__Vdly__tag_regs_9;
    vlSelf->__PVT__tag_asid_regs_8 = vlSelf->__Vdly__tag_asid_regs_8;
    vlSelf->__PVT__tag_regs_8 = vlSelf->__Vdly__tag_regs_8;
    vlSelf->__PVT__tag_asid_regs_7 = vlSelf->__Vdly__tag_asid_regs_7;
    vlSelf->__PVT__tag_regs_7 = vlSelf->__Vdly__tag_regs_7;
    vlSelf->__PVT__tag_asid_regs_6 = vlSelf->__Vdly__tag_asid_regs_6;
    vlSelf->__PVT__tag_regs_6 = vlSelf->__Vdly__tag_regs_6;
    vlSelf->__PVT__tag_asid_regs_5 = vlSelf->__Vdly__tag_asid_regs_5;
    vlSelf->__PVT__tag_regs_5 = vlSelf->__Vdly__tag_regs_5;
    vlSelf->__PVT__tag_asid_regs_4 = vlSelf->__Vdly__tag_asid_regs_4;
    vlSelf->__PVT__tag_regs_4 = vlSelf->__Vdly__tag_regs_4;
    vlSelf->__PVT__tag_asid_regs_3 = vlSelf->__Vdly__tag_asid_regs_3;
    vlSelf->__PVT__tag_regs_3 = vlSelf->__Vdly__tag_regs_3;
    vlSelf->__PVT__tag_asid_regs_2 = vlSelf->__Vdly__tag_asid_regs_2;
    vlSelf->__PVT__tag_regs_2 = vlSelf->__Vdly__tag_regs_2;
    vlSelf->__PVT__tag_asid_regs_1 = vlSelf->__Vdly__tag_asid_regs_1;
    vlSelf->__PVT__tag_asid_regs_0 = vlSelf->__Vdly__tag_asid_regs_0;
    vlSelf->__PVT__tag_regs_1 = vlSelf->__Vdly__tag_regs_1;
    vlSelf->__PVT__tag_regs_0 = vlSelf->__Vdly__tag_regs_0;
    vlSelf->__Vdly__tag_asid_regs_127 = vlSelf->__PVT__tag_asid_regs_127;
    vlSelf->__Vdly__tag_regs_127 = vlSelf->__PVT__tag_regs_127;
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___sequent__TOP__mycpu_top__inst_cache__icache_tag_1__13(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___sequent__TOP__mycpu_top__inst_cache__icache_tag_1__13\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_regs_127 = 0U;
    } else if ((0x7fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        if (vlSelf->__PVT__io_wen) {
            vlSelf->__Vdly__tag_regs_127 = vlSelf->__PVT__io_wdata;
        } else if ((0x7fU != (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
            vlSelf->__Vdly__tag_regs_127 = ((0x7eU 
                                             == (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                             ? vlSelf->__PVT__tag_regs_126
                                             : vlSelf->__PVT___GEN_125);
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__tag_asid_regs_127 = 0U;
    } else if ((0x7fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
        if (vlSelf->__PVT__io_wen) {
            vlSelf->__Vdly__tag_asid_regs_127 = 0U;
        } else if ((0x7fU != (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))) {
            vlSelf->__Vdly__tag_asid_regs_127 = ((0x7eU 
                                                  == 
                                                  (0x7fU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 5U, 7U)))
                                                  ? (IData)(vlSelf->__PVT__tag_asid_regs_126)
                                                  : (IData)(vlSelf->__PVT___GEN_381));
        }
    }
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___sequent__TOP__mycpu_top__inst_cache__icache_tag_1__14(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___sequent__TOP__mycpu_top__inst_cache__icache_tag_1__14\n"); );
    // Body
    vlSelf->__PVT__tag_asid_regs_125 = vlSelf->__Vdly__tag_asid_regs_125;
    vlSelf->__PVT__tag_asid_regs_124 = vlSelf->__Vdly__tag_asid_regs_124;
    vlSelf->__PVT__tag_asid_regs_123 = vlSelf->__Vdly__tag_asid_regs_123;
    vlSelf->__PVT__tag_asid_regs_122 = vlSelf->__Vdly__tag_asid_regs_122;
    vlSelf->__PVT__tag_asid_regs_121 = vlSelf->__Vdly__tag_asid_regs_121;
    vlSelf->__PVT__tag_asid_regs_120 = vlSelf->__Vdly__tag_asid_regs_120;
    vlSelf->__PVT__tag_asid_regs_119 = vlSelf->__Vdly__tag_asid_regs_119;
    vlSelf->__PVT__tag_asid_regs_118 = vlSelf->__Vdly__tag_asid_regs_118;
    vlSelf->__PVT__tag_asid_regs_117 = vlSelf->__Vdly__tag_asid_regs_117;
    vlSelf->__PVT__tag_asid_regs_116 = vlSelf->__Vdly__tag_asid_regs_116;
    vlSelf->__PVT__tag_asid_regs_115 = vlSelf->__Vdly__tag_asid_regs_115;
    vlSelf->__PVT__tag_asid_regs_114 = vlSelf->__Vdly__tag_asid_regs_114;
    vlSelf->__PVT__tag_asid_regs_113 = vlSelf->__Vdly__tag_asid_regs_113;
    vlSelf->__PVT__tag_asid_regs_112 = vlSelf->__Vdly__tag_asid_regs_112;
    vlSelf->__PVT__tag_asid_regs_111 = vlSelf->__Vdly__tag_asid_regs_111;
    vlSelf->__PVT__tag_asid_regs_110 = vlSelf->__Vdly__tag_asid_regs_110;
    vlSelf->__PVT__tag_asid_regs_109 = vlSelf->__Vdly__tag_asid_regs_109;
    vlSelf->__PVT__tag_asid_regs_108 = vlSelf->__Vdly__tag_asid_regs_108;
    vlSelf->__PVT__tag_asid_regs_107 = vlSelf->__Vdly__tag_asid_regs_107;
    vlSelf->__PVT__tag_asid_regs_106 = vlSelf->__Vdly__tag_asid_regs_106;
    vlSelf->__PVT__tag_asid_regs_105 = vlSelf->__Vdly__tag_asid_regs_105;
    vlSelf->__PVT__tag_asid_regs_104 = vlSelf->__Vdly__tag_asid_regs_104;
    vlSelf->__PVT__tag_asid_regs_103 = vlSelf->__Vdly__tag_asid_regs_103;
    vlSelf->__PVT__tag_asid_regs_102 = vlSelf->__Vdly__tag_asid_regs_102;
    vlSelf->__PVT__tag_asid_regs_101 = vlSelf->__Vdly__tag_asid_regs_101;
    vlSelf->__PVT__tag_asid_regs_100 = vlSelf->__Vdly__tag_asid_regs_100;
    vlSelf->__PVT__tag_asid_regs_99 = vlSelf->__Vdly__tag_asid_regs_99;
    vlSelf->__PVT__tag_asid_regs_98 = vlSelf->__Vdly__tag_asid_regs_98;
    vlSelf->__PVT__tag_asid_regs_97 = vlSelf->__Vdly__tag_asid_regs_97;
    vlSelf->__PVT__tag_asid_regs_96 = vlSelf->__Vdly__tag_asid_regs_96;
    vlSelf->__PVT__tag_asid_regs_95 = vlSelf->__Vdly__tag_asid_regs_95;
    vlSelf->__PVT__tag_asid_regs_94 = vlSelf->__Vdly__tag_asid_regs_94;
    vlSelf->__PVT__tag_asid_regs_93 = vlSelf->__Vdly__tag_asid_regs_93;
    vlSelf->__PVT__tag_asid_regs_92 = vlSelf->__Vdly__tag_asid_regs_92;
    vlSelf->__PVT__tag_asid_regs_91 = vlSelf->__Vdly__tag_asid_regs_91;
    vlSelf->__PVT__tag_asid_regs_90 = vlSelf->__Vdly__tag_asid_regs_90;
    vlSelf->__PVT__tag_asid_regs_89 = vlSelf->__Vdly__tag_asid_regs_89;
    vlSelf->__PVT__tag_asid_regs_88 = vlSelf->__Vdly__tag_asid_regs_88;
    vlSelf->__PVT__tag_asid_regs_87 = vlSelf->__Vdly__tag_asid_regs_87;
    vlSelf->__PVT__tag_asid_regs_86 = vlSelf->__Vdly__tag_asid_regs_86;
    vlSelf->__PVT__tag_asid_regs_85 = vlSelf->__Vdly__tag_asid_regs_85;
    vlSelf->__PVT__tag_asid_regs_84 = vlSelf->__Vdly__tag_asid_regs_84;
    vlSelf->__PVT__tag_asid_regs_83 = vlSelf->__Vdly__tag_asid_regs_83;
    vlSelf->__PVT__tag_asid_regs_82 = vlSelf->__Vdly__tag_asid_regs_82;
    vlSelf->__PVT__tag_asid_regs_81 = vlSelf->__Vdly__tag_asid_regs_81;
    vlSelf->__PVT__tag_asid_regs_80 = vlSelf->__Vdly__tag_asid_regs_80;
    vlSelf->__PVT__tag_asid_regs_79 = vlSelf->__Vdly__tag_asid_regs_79;
    vlSelf->__PVT__tag_asid_regs_78 = vlSelf->__Vdly__tag_asid_regs_78;
    vlSelf->__PVT__tag_asid_regs_77 = vlSelf->__Vdly__tag_asid_regs_77;
    vlSelf->__PVT__tag_asid_regs_76 = vlSelf->__Vdly__tag_asid_regs_76;
    vlSelf->__PVT__tag_asid_regs_75 = vlSelf->__Vdly__tag_asid_regs_75;
    vlSelf->__PVT__tag_asid_regs_74 = vlSelf->__Vdly__tag_asid_regs_74;
    vlSelf->__PVT__tag_asid_regs_73 = vlSelf->__Vdly__tag_asid_regs_73;
    vlSelf->__PVT__tag_asid_regs_72 = vlSelf->__Vdly__tag_asid_regs_72;
    vlSelf->__PVT__tag_asid_regs_71 = vlSelf->__Vdly__tag_asid_regs_71;
    vlSelf->__PVT__tag_asid_regs_70 = vlSelf->__Vdly__tag_asid_regs_70;
    vlSelf->__PVT__tag_asid_regs_69 = vlSelf->__Vdly__tag_asid_regs_69;
    vlSelf->__PVT__tag_asid_regs_68 = vlSelf->__Vdly__tag_asid_regs_68;
    vlSelf->__PVT__tag_asid_regs_67 = vlSelf->__Vdly__tag_asid_regs_67;
    vlSelf->__PVT__tag_asid_regs_66 = vlSelf->__Vdly__tag_asid_regs_66;
    vlSelf->__PVT__tag_asid_regs_65 = vlSelf->__Vdly__tag_asid_regs_65;
    vlSelf->__PVT__tag_asid_regs_64 = vlSelf->__Vdly__tag_asid_regs_64;
    vlSelf->__PVT__tag_asid_regs_63 = vlSelf->__Vdly__tag_asid_regs_63;
    vlSelf->__PVT__tag_asid_regs_62 = vlSelf->__Vdly__tag_asid_regs_62;
    vlSelf->__PVT__tag_asid_regs_61 = vlSelf->__Vdly__tag_asid_regs_61;
    vlSelf->__PVT__tag_asid_regs_60 = vlSelf->__Vdly__tag_asid_regs_60;
    vlSelf->__PVT__tag_asid_regs_59 = vlSelf->__Vdly__tag_asid_regs_59;
    vlSelf->__PVT__tag_asid_regs_58 = vlSelf->__Vdly__tag_asid_regs_58;
    vlSelf->__PVT__tag_asid_regs_57 = vlSelf->__Vdly__tag_asid_regs_57;
    vlSelf->__PVT__tag_asid_regs_56 = vlSelf->__Vdly__tag_asid_regs_56;
    vlSelf->__PVT__tag_asid_regs_55 = vlSelf->__Vdly__tag_asid_regs_55;
    vlSelf->__PVT__tag_asid_regs_54 = vlSelf->__Vdly__tag_asid_regs_54;
    vlSelf->__PVT__tag_asid_regs_53 = vlSelf->__Vdly__tag_asid_regs_53;
    vlSelf->__PVT__tag_asid_regs_52 = vlSelf->__Vdly__tag_asid_regs_52;
    vlSelf->__PVT__tag_asid_regs_51 = vlSelf->__Vdly__tag_asid_regs_51;
    vlSelf->__PVT__tag_asid_regs_50 = vlSelf->__Vdly__tag_asid_regs_50;
    vlSelf->__PVT__tag_asid_regs_49 = vlSelf->__Vdly__tag_asid_regs_49;
    vlSelf->__PVT__tag_asid_regs_48 = vlSelf->__Vdly__tag_asid_regs_48;
    vlSelf->__PVT__tag_asid_regs_47 = vlSelf->__Vdly__tag_asid_regs_47;
    vlSelf->__PVT__tag_asid_regs_46 = vlSelf->__Vdly__tag_asid_regs_46;
    vlSelf->__PVT__tag_asid_regs_45 = vlSelf->__Vdly__tag_asid_regs_45;
    vlSelf->__PVT__tag_asid_regs_44 = vlSelf->__Vdly__tag_asid_regs_44;
    vlSelf->__PVT__tag_asid_regs_43 = vlSelf->__Vdly__tag_asid_regs_43;
    vlSelf->__PVT__tag_asid_regs_42 = vlSelf->__Vdly__tag_asid_regs_42;
    vlSelf->__PVT__tag_asid_regs_41 = vlSelf->__Vdly__tag_asid_regs_41;
    vlSelf->__PVT__tag_asid_regs_40 = vlSelf->__Vdly__tag_asid_regs_40;
    vlSelf->__PVT__tag_asid_regs_39 = vlSelf->__Vdly__tag_asid_regs_39;
    vlSelf->__PVT__tag_asid_regs_38 = vlSelf->__Vdly__tag_asid_regs_38;
    vlSelf->__PVT__tag_asid_regs_37 = vlSelf->__Vdly__tag_asid_regs_37;
    vlSelf->__PVT__tag_asid_regs_36 = vlSelf->__Vdly__tag_asid_regs_36;
    vlSelf->__PVT__tag_asid_regs_35 = vlSelf->__Vdly__tag_asid_regs_35;
    vlSelf->__PVT__tag_asid_regs_34 = vlSelf->__Vdly__tag_asid_regs_34;
    vlSelf->__PVT__tag_asid_regs_33 = vlSelf->__Vdly__tag_asid_regs_33;
    vlSelf->__PVT__tag_asid_regs_32 = vlSelf->__Vdly__tag_asid_regs_32;
    vlSelf->__PVT__tag_asid_regs_31 = vlSelf->__Vdly__tag_asid_regs_31;
    vlSelf->__PVT__tag_asid_regs_30 = vlSelf->__Vdly__tag_asid_regs_30;
    vlSelf->__PVT__tag_asid_regs_29 = vlSelf->__Vdly__tag_asid_regs_29;
    vlSelf->__PVT__tag_asid_regs_28 = vlSelf->__Vdly__tag_asid_regs_28;
    vlSelf->__PVT__tag_asid_regs_27 = vlSelf->__Vdly__tag_asid_regs_27;
    vlSelf->__PVT__tag_asid_regs_26 = vlSelf->__Vdly__tag_asid_regs_26;
    vlSelf->__PVT__tag_asid_regs_25 = vlSelf->__Vdly__tag_asid_regs_25;
    vlSelf->__PVT__tag_asid_regs_24 = vlSelf->__Vdly__tag_asid_regs_24;
}

VL_INLINE_OPT void Vmycpu_top_icache_tag___sequent__TOP__mycpu_top__inst_cache__icache_tag_1__15(Vmycpu_top_icache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_icache_tag___sequent__TOP__mycpu_top__inst_cache__icache_tag_1__15\n"); );
    // Body
    vlSelf->__PVT__tag_asid_regs_127 = vlSelf->__Vdly__tag_asid_regs_127;
    vlSelf->__PVT__tag_regs_127 = vlSelf->__Vdly__tag_regs_127;
    vlSelf->__PVT__tag_asid_regs_126 = vlSelf->__Vdly__tag_asid_regs_126;
    vlSelf->__PVT__tag_regs_126 = vlSelf->__Vdly__tag_regs_126;
}
