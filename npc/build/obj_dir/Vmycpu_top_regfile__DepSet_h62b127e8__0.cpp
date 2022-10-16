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
    vlSelf->__Vdly__regs_4 = vlSelf->__PVT__regs_4;
}

VL_INLINE_OPT void Vmycpu_top_regfile___sequent__TOP__mycpu_top__u_riscv_cpu___regfile__1(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___sequent__TOP__mycpu_top__u_riscv_cpu___regfile__1\n"); );
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
}

VL_INLINE_OPT void Vmycpu_top_regfile___sequent__TOP__mycpu_top__u_riscv_cpu___regfile__2(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___sequent__TOP__mycpu_top__u_riscv_cpu___regfile__2\n"); );
    // Body
    vlSelf->__Vdly__regs_3 = vlSelf->__PVT__regs_3;
    vlSelf->__Vdly__regs_2 = vlSelf->__PVT__regs_2;
    vlSelf->__Vdly__regs_1 = vlSelf->__PVT__regs_1;
    vlSelf->__Vdly__regs_0 = vlSelf->__PVT__regs_0;
}

VL_INLINE_OPT void Vmycpu_top_regfile___sequent__TOP__mycpu_top__u_riscv_cpu___regfile__3(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___sequent__TOP__mycpu_top__u_riscv_cpu___regfile__3\n"); );
    // Body
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

VL_INLINE_OPT void Vmycpu_top_regfile___sequent__TOP__mycpu_top__u_riscv_cpu___regfile__4(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___sequent__TOP__mycpu_top__u_riscv_cpu___regfile__4\n"); );
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

VL_INLINE_OPT void Vmycpu_top_regfile___sequent__TOP__mycpu_top__u_riscv_cpu___regfile__5(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___sequent__TOP__mycpu_top__u_riscv_cpu___regfile__5\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h5dedf23e__0;
    VlWide<6>/*191:0*/ __Vtemp_h938af672__0;
    VlWide<8>/*255:0*/ __Vtemp_h30ab6913__0;
    VlWide<10>/*319:0*/ __Vtemp_h5f46a1b6__0;
    VlWide<12>/*383:0*/ __Vtemp_h4475c80d__0;
    VlWide<14>/*447:0*/ __Vtemp_hfbfe8a31__0;
    VlWide<16>/*511:0*/ __Vtemp_hb934871d__0;
    VlWide<4>/*127:0*/ __Vtemp_h52fc5895__0;
    VlWide<6>/*191:0*/ __Vtemp_h3975c846__0;
    VlWide<8>/*255:0*/ __Vtemp_h3cd05357__0;
    VlWide<10>/*319:0*/ __Vtemp_h243ed3f4__0;
    VlWide<12>/*383:0*/ __Vtemp_h9a568d07__0;
    VlWide<14>/*447:0*/ __Vtemp_hc1cf8d51__0;
    VlWide<16>/*511:0*/ __Vtemp_h5f2671bc__0;
    // Body
    VL_CONCAT_WQQ(128,64,64, __Vtemp_h5dedf23e__0, vlSelf->__PVT__regs_7, vlSelf->__PVT__regs_6);
    VL_CONCAT_WWQ(192,128,64, __Vtemp_h938af672__0, __Vtemp_h5dedf23e__0, vlSelf->__PVT__regs_5);
    VL_CONCAT_WWQ(256,192,64, __Vtemp_h30ab6913__0, __Vtemp_h938af672__0, vlSelf->__PVT__regs_4);
    VL_CONCAT_WWQ(320,256,64, __Vtemp_h5f46a1b6__0, __Vtemp_h30ab6913__0, vlSelf->__PVT__regs_3);
    VL_CONCAT_WWQ(384,320,64, __Vtemp_h4475c80d__0, __Vtemp_h5f46a1b6__0, vlSelf->__PVT__regs_2);
    VL_CONCAT_WWQ(448,384,64, __Vtemp_hfbfe8a31__0, __Vtemp_h4475c80d__0, vlSelf->__PVT__regs_1);
    VL_CONCAT_WWQ(512,448,64, __Vtemp_hb934871d__0, __Vtemp_hfbfe8a31__0, vlSelf->__PVT__regs_0);
    VL_ASSIGN_W(512,vlSelf->__PVT__io_reg_file_alL_out_lo_lo, __Vtemp_hb934871d__0);
    VL_CONCAT_WQQ(128,64,64, __Vtemp_h52fc5895__0, vlSelf->__PVT__regs_23, vlSelf->__PVT__regs_22);
    VL_CONCAT_WWQ(192,128,64, __Vtemp_h3975c846__0, __Vtemp_h52fc5895__0, vlSelf->__PVT__regs_21);
    VL_CONCAT_WWQ(256,192,64, __Vtemp_h3cd05357__0, __Vtemp_h3975c846__0, vlSelf->__PVT__regs_20);
    VL_CONCAT_WWQ(320,256,64, __Vtemp_h243ed3f4__0, __Vtemp_h3cd05357__0, vlSelf->__PVT__regs_19);
    VL_CONCAT_WWQ(384,320,64, __Vtemp_h9a568d07__0, __Vtemp_h243ed3f4__0, vlSelf->__PVT__regs_18);
    VL_CONCAT_WWQ(448,384,64, __Vtemp_hc1cf8d51__0, __Vtemp_h9a568d07__0, vlSelf->__PVT__regs_17);
    VL_CONCAT_WWQ(512,448,64, __Vtemp_h5f2671bc__0, __Vtemp_hc1cf8d51__0, vlSelf->__PVT__regs_16);
    VL_ASSIGN_W(512,vlSelf->__PVT__io_reg_file_alL_out_hi_lo, __Vtemp_h5f2671bc__0);
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

VL_INLINE_OPT void Vmycpu_top_regfile___sequent__TOP__mycpu_top__u_riscv_cpu___regfile__6(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___sequent__TOP__mycpu_top__u_riscv_cpu___regfile__6\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h9770d30e__0;
    VlWide<6>/*191:0*/ __Vtemp_h600504c7__0;
    VlWide<8>/*255:0*/ __Vtemp_hadfd9294__0;
    VlWide<10>/*319:0*/ __Vtemp_h12971a4c__0;
    VlWide<12>/*383:0*/ __Vtemp_hf1202eaa__0;
    VlWide<14>/*447:0*/ __Vtemp_h7e668da4__0;
    VlWide<16>/*511:0*/ __Vtemp_hc128f227__0;
    VlWide<32>/*1023:0*/ __Vtemp_hef7f9d27__0;
    // Body
    VL_CONCAT_WQQ(128,64,64, __Vtemp_h9770d30e__0, vlSelf->__PVT__regs_15, vlSelf->__PVT__regs_14);
    VL_CONCAT_WWQ(192,128,64, __Vtemp_h600504c7__0, __Vtemp_h9770d30e__0, vlSelf->__PVT__regs_13);
    VL_CONCAT_WWQ(256,192,64, __Vtemp_hadfd9294__0, __Vtemp_h600504c7__0, vlSelf->__PVT__regs_12);
    VL_CONCAT_WWQ(320,256,64, __Vtemp_h12971a4c__0, __Vtemp_hadfd9294__0, vlSelf->__PVT__regs_11);
    VL_CONCAT_WWQ(384,320,64, __Vtemp_hf1202eaa__0, __Vtemp_h12971a4c__0, vlSelf->__PVT__regs_10);
    VL_CONCAT_WWQ(448,384,64, __Vtemp_h7e668da4__0, __Vtemp_hf1202eaa__0, vlSelf->__PVT__regs_9);
    VL_CONCAT_WWQ(512,448,64, __Vtemp_hc128f227__0, __Vtemp_h7e668da4__0, vlSelf->__PVT__regs_8);
    VL_CONCAT_WWW(1024,512,512, __Vtemp_hef7f9d27__0, __Vtemp_hc128f227__0, vlSelf->__PVT__io_reg_file_alL_out_lo_lo);
    VL_ASSIGN_W(1024,vlSelf->__PVT__io_reg_file_alL_out_lo, __Vtemp_hef7f9d27__0);
    vlSelf->__PVT__regs_31 = vlSelf->__Vdly__regs_31;
    vlSelf->__PVT__regs_30 = vlSelf->__Vdly__regs_30;
}

VL_INLINE_OPT void Vmycpu_top_regfile___sequent__TOP__mycpu_top__u_riscv_cpu___regfile__7(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___sequent__TOP__mycpu_top__u_riscv_cpu___regfile__7\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h67750219__0;
    VlWide<6>/*191:0*/ __Vtemp_h1091b424__0;
    VlWide<8>/*255:0*/ __Vtemp_ha9cdde13__0;
    VlWide<10>/*319:0*/ __Vtemp_h853c58d9__0;
    VlWide<12>/*383:0*/ __Vtemp_hcb492914__0;
    VlWide<14>/*447:0*/ __Vtemp_h448743a2__0;
    VlWide<16>/*511:0*/ __Vtemp_h68b39ae2__0;
    VlWide<32>/*1023:0*/ __Vtemp_h715916c8__0;
    // Body
    VL_CONCAT_WQQ(128,64,64, __Vtemp_h67750219__0, vlSelf->__PVT__regs_31, vlSelf->__PVT__regs_30);
    VL_CONCAT_WWQ(192,128,64, __Vtemp_h1091b424__0, __Vtemp_h67750219__0, vlSelf->__PVT__regs_29);
    VL_CONCAT_WWQ(256,192,64, __Vtemp_ha9cdde13__0, __Vtemp_h1091b424__0, vlSelf->__PVT__regs_28);
    VL_CONCAT_WWQ(320,256,64, __Vtemp_h853c58d9__0, __Vtemp_ha9cdde13__0, vlSelf->__PVT__regs_27);
    VL_CONCAT_WWQ(384,320,64, __Vtemp_hcb492914__0, __Vtemp_h853c58d9__0, vlSelf->__PVT__regs_26);
    VL_CONCAT_WWQ(448,384,64, __Vtemp_h448743a2__0, __Vtemp_hcb492914__0, vlSelf->__PVT__regs_25);
    VL_CONCAT_WWQ(512,448,64, __Vtemp_h68b39ae2__0, __Vtemp_h448743a2__0, vlSelf->__PVT__regs_24);
    VL_CONCAT_WWW(1024,512,512, __Vtemp_h715916c8__0, __Vtemp_h68b39ae2__0, vlSelf->__PVT__io_reg_file_alL_out_hi_lo);
    VL_ASSIGN_W(1024,vlSelf->__PVT__io_reg_file_alL_out_hi, __Vtemp_h715916c8__0);
}

VL_INLINE_OPT void Vmycpu_top_regfile___sequent__TOP__mycpu_top__u_riscv_cpu___regfile__8(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___sequent__TOP__mycpu_top__u_riscv_cpu___regfile__8\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_hac6a49f7__0;
    // Body
    VL_CONCAT_WWW(2048,1024,1024, __Vtemp_hac6a49f7__0, vlSelf->__PVT__io_reg_file_alL_out_hi, vlSelf->__PVT__io_reg_file_alL_out_lo);
    VL_ASSIGN_W(2048,vlSelf->__PVT__io_reg_file_alL_out, __Vtemp_hac6a49f7__0);
}
