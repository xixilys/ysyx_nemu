// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_regfile.h"

VL_INLINE_OPT void Vmycpu_top_regfile___sequent__TOP__mycpu_top__u_riscv_cpu___regfile__0(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___sequent__TOP__mycpu_top__u_riscv_cpu___regfile__0\n"); );
    // Body
    vlSelf->__Vdly__regs_30 = vlSelf->__PVT__regs_30;
    vlSelf->__Vdly__regs_29 = vlSelf->__PVT__regs_29;
    vlSelf->__Vdly__regs_28 = vlSelf->__PVT__regs_28;
    vlSelf->__Vdly__regs_27 = vlSelf->__PVT__regs_27;
    vlSelf->__Vdly__regs_26 = vlSelf->__PVT__regs_26;
    vlSelf->__Vdly__regs_25 = vlSelf->__PVT__regs_25;
    vlSelf->__Vdly__regs_24 = vlSelf->__PVT__regs_24;
    vlSelf->__Vdly__regs_23 = vlSelf->__PVT__regs_23;
    vlSelf->__Vdly__regs_22 = vlSelf->__PVT__regs_22;
    vlSelf->__Vdly__regs_21 = vlSelf->__PVT__regs_21;
    vlSelf->__Vdly__regs_20 = vlSelf->__PVT__regs_20;
    vlSelf->__Vdly__regs_19 = vlSelf->__PVT__regs_19;
    vlSelf->__Vdly__regs_18 = vlSelf->__PVT__regs_18;
    vlSelf->__Vdly__regs_17 = vlSelf->__PVT__regs_17;
    vlSelf->__Vdly__regs_16 = vlSelf->__PVT__regs_16;
    vlSelf->__Vdly__regs_15 = vlSelf->__PVT__regs_15;
    vlSelf->__Vdly__regs_14 = vlSelf->__PVT__regs_14;
    vlSelf->__Vdly__regs_13 = vlSelf->__PVT__regs_13;
    vlSelf->__Vdly__regs_12 = vlSelf->__PVT__regs_12;
    vlSelf->__Vdly__regs_11 = vlSelf->__PVT__regs_11;
    vlSelf->__Vdly__regs_10 = vlSelf->__PVT__regs_10;
    vlSelf->__Vdly__regs_9 = vlSelf->__PVT__regs_9;
    vlSelf->__Vdly__regs_8 = vlSelf->__PVT__regs_8;
    vlSelf->__Vdly__regs_7 = vlSelf->__PVT__regs_7;
    vlSelf->__Vdly__regs_6 = vlSelf->__PVT__regs_6;
    vlSelf->__Vdly__regs_5 = vlSelf->__PVT__regs_5;
}

VL_INLINE_OPT void Vmycpu_top_regfile___sequent__TOP__mycpu_top__u_riscv_cpu___regfile__1(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___sequent__TOP__mycpu_top__u_riscv_cpu___regfile__1\n"); );
    // Body
    vlSelf->__Vdly__regs_4 = vlSelf->__PVT__regs_4;
    vlSelf->__Vdly__regs_3 = vlSelf->__PVT__regs_3;
    vlSelf->__Vdly__regs_2 = vlSelf->__PVT__regs_2;
    vlSelf->__Vdly__regs_0 = vlSelf->__PVT__regs_0;
    vlSelf->__Vdly__regs_1 = vlSelf->__PVT__regs_1;
}

VL_INLINE_OPT void Vmycpu_top_regfile___sequent__TOP__mycpu_top__u_riscv_cpu___regfile__2(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___sequent__TOP__mycpu_top__u_riscv_cpu___regfile__2\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_30 = 0ULL;
    } else if ((0x1eU == (IData)(vlSelf->__PVT__io_A3))) {
        if (((IData)(vlSelf->__PVT__io_WE3) & (0U != (IData)(vlSelf->__PVT__io_A3)))) {
            vlSelf->__Vdly__regs_30 = vlSelf->__PVT__io_WD3;
        } else if ((0x1fU == (IData)(vlSelf->__PVT__io_A3))) {
            vlSelf->__Vdly__regs_30 = vlSelf->__PVT__regs_31;
        } else if ((0x1eU != (IData)(vlSelf->__PVT__io_A3))) {
            vlSelf->__Vdly__regs_30 = vlSelf->__PVT___GEN_29;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_29 = 0ULL;
    } else if ((0x1dU == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_29 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_28 = 0ULL;
    } else if ((0x1cU == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_28 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_27 = 0ULL;
    } else if ((0x1bU == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_27 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_26 = 0ULL;
    } else if ((0x1aU == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_26 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_25 = 0ULL;
    } else if ((0x19U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_25 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_24 = 0ULL;
    } else if ((0x18U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_24 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_23 = 0ULL;
    } else if ((0x17U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_23 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_22 = 0ULL;
    } else if ((0x16U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_22 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_21 = 0ULL;
    } else if ((0x15U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_21 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_20 = 0ULL;
    } else if ((0x14U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_20 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_19 = 0ULL;
    } else if ((0x13U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_19 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_18 = 0ULL;
    } else if ((0x12U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_18 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_17 = 0ULL;
    } else if ((0x11U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_17 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_16 = 0ULL;
    } else if ((0x10U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_16 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_15 = 0ULL;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_15 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_14 = 0ULL;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_14 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_13 = 0ULL;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_13 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_12 = 0ULL;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_12 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_11 = 0ULL;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_11 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_10 = 0ULL;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_10 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_9 = 0ULL;
    } else if ((9U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_9 = (((IData)(vlSelf->__PVT__io_WE3) 
                                   & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                   ? vlSelf->__PVT__io_WD3
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                       ? vlSelf->__PVT__regs_31
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                           ? vlSelf->__PVT__regs_30
                                           : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_8 = 0ULL;
    } else if ((8U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_8 = (((IData)(vlSelf->__PVT__io_WE3) 
                                   & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                   ? vlSelf->__PVT__io_WD3
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                       ? vlSelf->__PVT__regs_31
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                           ? vlSelf->__PVT__regs_30
                                           : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_7 = 0ULL;
    } else if ((7U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_7 = (((IData)(vlSelf->__PVT__io_WE3) 
                                   & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                   ? vlSelf->__PVT__io_WD3
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                       ? vlSelf->__PVT__regs_31
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                           ? vlSelf->__PVT__regs_30
                                           : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_6 = 0ULL;
    } else if ((6U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_6 = (((IData)(vlSelf->__PVT__io_WE3) 
                                   & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                   ? vlSelf->__PVT__io_WD3
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                       ? vlSelf->__PVT__regs_31
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                           ? vlSelf->__PVT__regs_30
                                           : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_5 = 0ULL;
    } else if ((5U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_5 = (((IData)(vlSelf->__PVT__io_WE3) 
                                   & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                   ? vlSelf->__PVT__io_WD3
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                       ? vlSelf->__PVT__regs_31
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                           ? vlSelf->__PVT__regs_30
                                           : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_4 = 0ULL;
    } else if ((4U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_4 = (((IData)(vlSelf->__PVT__io_WE3) 
                                   & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                   ? vlSelf->__PVT__io_WD3
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                       ? vlSelf->__PVT__regs_31
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                           ? vlSelf->__PVT__regs_30
                                           : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_3 = 0ULL;
    } else if ((3U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_3 = (((IData)(vlSelf->__PVT__io_WE3) 
                                   & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                   ? vlSelf->__PVT__io_WD3
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                       ? vlSelf->__PVT__regs_31
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                           ? vlSelf->__PVT__regs_30
                                           : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_2 = 0ULL;
    } else if ((2U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_2 = (((IData)(vlSelf->__PVT__io_WE3) 
                                   & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                   ? vlSelf->__PVT__io_WD3
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                       ? vlSelf->__PVT__regs_31
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                           ? vlSelf->__PVT__regs_30
                                           : vlSelf->__PVT___GEN_29)));
    }
    vlSelf->__Vdly__regs_0 = ((IData)(vlSelf->__PVT__reset)
                               ? 0ULL : ((0U == (IData)(vlSelf->__PVT__io_A3))
                                          ? (((IData)(vlSelf->__PVT__io_WE3) 
                                              & (0U 
                                                 != (IData)(vlSelf->__PVT__io_A3)))
                                              ? vlSelf->__PVT__io_WD3
                                              : ((0x1fU 
                                                  == (IData)(vlSelf->__PVT__io_A3))
                                                  ? vlSelf->__PVT__regs_31
                                                  : 
                                                 ((0x1eU 
                                                   == (IData)(vlSelf->__PVT__io_A3))
                                                   ? vlSelf->__PVT__regs_30
                                                   : vlSelf->__PVT___GEN_29)))
                                          : 0ULL));
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_1 = 0ULL;
    } else if ((1U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_1 = (((IData)(vlSelf->__PVT__io_WE3) 
                                   & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                   ? vlSelf->__PVT__io_WD3
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                       ? vlSelf->__PVT__regs_31
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                           ? vlSelf->__PVT__regs_30
                                           : vlSelf->__PVT___GEN_29)));
    }
}

VL_INLINE_OPT void Vmycpu_top_regfile___sequent__TOP__mycpu_top__u_riscv_cpu___regfile__3(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___sequent__TOP__mycpu_top__u_riscv_cpu___regfile__3\n"); );
    // Body
    vlSelf->__PVT__regs_29 = vlSelf->__Vdly__regs_29;
    vlSelf->__Vdly__regs_31 = vlSelf->__PVT__regs_31;
    vlSelf->__PVT__regs_28 = vlSelf->__Vdly__regs_28;
    vlSelf->__PVT__regs_27 = vlSelf->__Vdly__regs_27;
    vlSelf->__PVT__regs_26 = vlSelf->__Vdly__regs_26;
    vlSelf->__PVT__regs_25 = vlSelf->__Vdly__regs_25;
    vlSelf->__PVT__regs_24 = vlSelf->__Vdly__regs_24;
    vlSelf->__PVT__regs_23 = vlSelf->__Vdly__regs_23;
    vlSelf->__PVT__regs_22 = vlSelf->__Vdly__regs_22;
    vlSelf->__PVT__regs_21 = vlSelf->__Vdly__regs_21;
    vlSelf->__PVT__regs_20 = vlSelf->__Vdly__regs_20;
    vlSelf->__PVT__regs_19 = vlSelf->__Vdly__regs_19;
    vlSelf->__PVT__regs_18 = vlSelf->__Vdly__regs_18;
    vlSelf->__PVT__regs_17 = vlSelf->__Vdly__regs_17;
    vlSelf->__PVT__regs_16 = vlSelf->__Vdly__regs_16;
    vlSelf->__PVT__regs_15 = vlSelf->__Vdly__regs_15;
    vlSelf->__PVT__regs_14 = vlSelf->__Vdly__regs_14;
    vlSelf->__PVT__regs_13 = vlSelf->__Vdly__regs_13;
    vlSelf->__PVT__regs_12 = vlSelf->__Vdly__regs_12;
    vlSelf->__PVT__regs_11 = vlSelf->__Vdly__regs_11;
    vlSelf->__PVT__regs_10 = vlSelf->__Vdly__regs_10;
    vlSelf->__PVT__regs_9 = vlSelf->__Vdly__regs_9;
    vlSelf->__PVT__regs_8 = vlSelf->__Vdly__regs_8;
    vlSelf->__PVT__regs_7 = vlSelf->__Vdly__regs_7;
    vlSelf->__PVT__regs_6 = vlSelf->__Vdly__regs_6;
    vlSelf->__PVT__regs_5 = vlSelf->__Vdly__regs_5;
    vlSelf->__PVT__regs_4 = vlSelf->__Vdly__regs_4;
    vlSelf->__PVT__regs_3 = vlSelf->__Vdly__regs_3;
    vlSelf->__PVT__regs_2 = vlSelf->__Vdly__regs_2;
    vlSelf->__PVT__regs_1 = vlSelf->__Vdly__regs_1;
    vlSelf->__PVT__regs_0 = vlSelf->__Vdly__regs_0;
}

VL_INLINE_OPT void Vmycpu_top_regfile___sequent__TOP__mycpu_top__u_riscv_cpu___regfile__4(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___sequent__TOP__mycpu_top__u_riscv_cpu___regfile__4\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h32304116__0;
    VlWide<6>/*191:0*/ __Vtemp_h25b18aa3__0;
    VlWide<8>/*255:0*/ __Vtemp_h97c7688a__0;
    VlWide<10>/*319:0*/ __Vtemp_h9e100321__0;
    VlWide<12>/*383:0*/ __Vtemp_h60a16874__0;
    VlWide<14>/*447:0*/ __Vtemp_h0976cbc0__0;
    VlWide<16>/*511:0*/ __Vtemp_h6743405b__0;
    VlWide<4>/*127:0*/ __Vtemp_hc47496fc__0;
    VlWide<6>/*191:0*/ __Vtemp_h74a01c8d__0;
    VlWide<8>/*255:0*/ __Vtemp_h0674d188__0;
    VlWide<10>/*319:0*/ __Vtemp_h1e573a3a__0;
    VlWide<12>/*383:0*/ __Vtemp_hda0de001__0;
    VlWide<14>/*447:0*/ __Vtemp_haf9af414__0;
    VlWide<16>/*511:0*/ __Vtemp_hbedae93c__0;
    // Body
    VL_CONCAT_WQQ(128,64,64, __Vtemp_h32304116__0, vlSelf->__PVT__regs_7, vlSelf->__PVT__regs_6);
    VL_CONCAT_WWQ(192,128,64, __Vtemp_h25b18aa3__0, __Vtemp_h32304116__0, vlSelf->__PVT__regs_5);
    VL_CONCAT_WWQ(256,192,64, __Vtemp_h97c7688a__0, __Vtemp_h25b18aa3__0, vlSelf->__PVT__regs_4);
    VL_CONCAT_WWQ(320,256,64, __Vtemp_h9e100321__0, __Vtemp_h97c7688a__0, vlSelf->__PVT__regs_3);
    VL_CONCAT_WWQ(384,320,64, __Vtemp_h60a16874__0, __Vtemp_h9e100321__0, vlSelf->__PVT__regs_2);
    VL_CONCAT_WWQ(448,384,64, __Vtemp_h0976cbc0__0, __Vtemp_h60a16874__0, vlSelf->__PVT__regs_1);
    VL_CONCAT_WWQ(512,448,64, __Vtemp_h6743405b__0, __Vtemp_h0976cbc0__0, vlSelf->__PVT__regs_0);
    VL_ASSIGN_W(512,vlSelf->__PVT__io_reg_file_alL_out_lo_lo, __Vtemp_h6743405b__0);
    VL_CONCAT_WQQ(128,64,64, __Vtemp_hc47496fc__0, vlSelf->__PVT__regs_23, vlSelf->__PVT__regs_22);
    VL_CONCAT_WWQ(192,128,64, __Vtemp_h74a01c8d__0, __Vtemp_hc47496fc__0, vlSelf->__PVT__regs_21);
    VL_CONCAT_WWQ(256,192,64, __Vtemp_h0674d188__0, __Vtemp_h74a01c8d__0, vlSelf->__PVT__regs_20);
    VL_CONCAT_WWQ(320,256,64, __Vtemp_h1e573a3a__0, __Vtemp_h0674d188__0, vlSelf->__PVT__regs_19);
    VL_CONCAT_WWQ(384,320,64, __Vtemp_hda0de001__0, __Vtemp_h1e573a3a__0, vlSelf->__PVT__regs_18);
    VL_CONCAT_WWQ(448,384,64, __Vtemp_haf9af414__0, __Vtemp_hda0de001__0, vlSelf->__PVT__regs_17);
    VL_CONCAT_WWQ(512,448,64, __Vtemp_hbedae93c__0, __Vtemp_haf9af414__0, vlSelf->__PVT__regs_16);
    VL_ASSIGN_W(512,vlSelf->__PVT__io_reg_file_alL_out_hi_lo, __Vtemp_hbedae93c__0);
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_31 = 0ULL;
    } else if ((0x1fU == (IData)(vlSelf->__PVT__io_A3))) {
        if (((IData)(vlSelf->__PVT__io_WE3) & (0U != (IData)(vlSelf->__PVT__io_A3)))) {
            vlSelf->__Vdly__regs_31 = vlSelf->__PVT__io_WD3;
        } else if ((0x1fU != (IData)(vlSelf->__PVT__io_A3))) {
            vlSelf->__Vdly__regs_31 = ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_30
                                        : vlSelf->__PVT___GEN_29);
        }
    }
}

VL_INLINE_OPT void Vmycpu_top_regfile___sequent__TOP__mycpu_top__u_riscv_cpu___regfile__5(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___sequent__TOP__mycpu_top__u_riscv_cpu___regfile__5\n"); );
    // Body
    vlSelf->__PVT__regs_31 = vlSelf->__Vdly__regs_31;
    vlSelf->__PVT__regs_30 = vlSelf->__Vdly__regs_30;
}
