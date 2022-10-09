// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_pc_detail.h"

VL_INLINE_OPT void Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L__0(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L__0\n"); );
    // Body
    vlSelf->__Vdly__pc_value = vlSelf->__PVT__pc_value;
}

VL_INLINE_OPT void Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L__1(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L__1\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__pc_value = 0x7ffffffcULL;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__pc_value = 0ULL;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__pc_value = vlSelf->__PVT__io_in_pc_value_in;
    }
}

VL_INLINE_OPT void Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L__2(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L__2\n"); );
    // Body
    vlSelf->__PVT__pc_value = vlSelf->__Vdly__pc_value;
}

VL_INLINE_OPT void Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L__3(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L__3\n"); );
    // Body
    vlSelf->__PVT__io_out_pc_value_out = vlSelf->__PVT__pc_value;
}

VL_INLINE_OPT void Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M__0(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M__0\n"); );
    // Body
    vlSelf->__Vdly__pc_value = vlSelf->__PVT__pc_value;
}

VL_INLINE_OPT void Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M__1(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M__1\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__pc_value = 0x7ffffffcULL;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__pc_value = 0ULL;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__pc_value = vlSelf->__PVT__io_in_pc_value_in;
    }
}

VL_INLINE_OPT void Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M__2(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M__2\n"); );
    // Body
    vlSelf->__PVT__pc_value = vlSelf->__Vdly__pc_value;
}

VL_INLINE_OPT void Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M__3(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M__3\n"); );
    // Body
    vlSelf->__PVT__io_out_pc_value_out = vlSelf->__PVT__pc_value;
}

VL_INLINE_OPT void Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R__0(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R__0\n"); );
    // Body
    vlSelf->__Vdly__pc_value = vlSelf->__PVT__pc_value;
}

VL_INLINE_OPT void Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R__1(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R__1\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__pc_value = 0x7ffffffcULL;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__pc_value = 0ULL;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__pc_value = vlSelf->__PVT__io_in_pc_value_in;
    }
}

VL_INLINE_OPT void Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R__2(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R__2\n"); );
    // Body
    vlSelf->__PVT__pc_value = vlSelf->__Vdly__pc_value;
}

VL_INLINE_OPT void Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R__3(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R__3\n"); );
    // Body
    vlSelf->__PVT__io_out_pc_value_out = vlSelf->__PVT__pc_value;
}

VL_INLINE_OPT void Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L__0(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L__0\n"); );
    // Body
    vlSelf->__Vdly__pc_value = vlSelf->__PVT__pc_value;
}

VL_INLINE_OPT void Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L__1(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L__1\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__pc_value = 0x7ffffffcULL;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__pc_value = 0ULL;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__pc_value = vlSelf->__PVT__io_in_pc_value_in;
    }
}

VL_INLINE_OPT void Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L__2(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L__2\n"); );
    // Body
    vlSelf->__PVT__pc_value = vlSelf->__Vdly__pc_value;
}

VL_INLINE_OPT void Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L__3(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L__3\n"); );
    // Body
    vlSelf->__PVT__io_out_pc_value_out = vlSelf->__PVT__pc_value;
}

VL_INLINE_OPT void Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M__0(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M__0\n"); );
    // Body
    vlSelf->__Vdly__pc_value = vlSelf->__PVT__pc_value;
}

VL_INLINE_OPT void Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M__1(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M__1\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__pc_value = 0x7ffffffcULL;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__pc_value = 0ULL;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__pc_value = vlSelf->__PVT__io_in_pc_value_in;
    }
}

VL_INLINE_OPT void Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M__2(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M__2\n"); );
    // Body
    vlSelf->__PVT__pc_value = vlSelf->__Vdly__pc_value;
}

VL_INLINE_OPT void Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M__3(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M__3\n"); );
    // Body
    vlSelf->__PVT__io_out_pc_value_out = vlSelf->__PVT__pc_value;
}

VL_INLINE_OPT void Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R__0(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R__0\n"); );
    // Body
    vlSelf->__Vdly__pc_value = vlSelf->__PVT__pc_value;
}

VL_INLINE_OPT void Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R__1(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R__1\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__pc_value = 0x7ffffffcULL;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__pc_value = 0ULL;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__pc_value = vlSelf->__PVT__io_in_pc_value_in;
    }
}

VL_INLINE_OPT void Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R__2(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R__2\n"); );
    // Body
    vlSelf->__PVT__pc_value = vlSelf->__Vdly__pc_value;
}

VL_INLINE_OPT void Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R__3(Vmycpu_top_pc_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_pc_detail___sequent__TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R__3\n"); );
    // Body
    vlSelf->__PVT__io_out_pc_value_out = vlSelf->__PVT__pc_value;
}
