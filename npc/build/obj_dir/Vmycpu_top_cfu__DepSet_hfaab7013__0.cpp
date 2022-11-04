// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_cfu.h"

VL_INLINE_OPT void Vmycpu_top_cfu___combo__TOP__mycpu_top__u_riscv_cpu___cfu__1(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___combo__TOP__mycpu_top__u_riscv_cpu___cfu__1\n"); );
    // Body
    vlSelf->__PVT__io_Forward2E = ((0U == (IData)(vlSelf->__PVT__io_R2E))
                                    ? 0U : (IData)(vlSelf->__PVT___io_Forward2E_T_18));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward2E 
        = vlSelf->__PVT__io_Forward2E;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD2ForWardE_p_T_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward2E))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ResultW
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_RD2E);
}

VL_INLINE_OPT void Vmycpu_top_cfu___combo__TOP__mycpu_top__u_riscv_cpu___cfu__2(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___combo__TOP__mycpu_top__u_riscv_cpu___cfu__2\n"); );
    // Body
    vlSelf->__PVT___br_Stall_T_18 = ((IData)(vlSelf->__PVT__io_MemToRegM2) 
                                     & (((IData)(vlSelf->__PVT__io_WriteRegM2) 
                                         == (IData)(vlSelf->__PVT__io_R2D)) 
                                        | ((IData)(vlSelf->__PVT__io_WriteRegM2) 
                                           == (IData)(vlSelf->__PVT__io_R1D))));
    vlSelf->__PVT___br_Stall_T_16 = ((IData)(vlSelf->__PVT__io_WriteRegM2) 
                                     == (IData)(vlSelf->__PVT__io_R1D));
    vlSelf->__PVT___br_Stall_T_5 = ((IData)(vlSelf->__PVT__io_WriteRegE) 
                                    == (IData)(vlSelf->__PVT__io_R1D));
    vlSelf->__PVT___br_Stall_T_10 = ((IData)(vlSelf->__PVT__io_WriteRegM) 
                                     == (IData)(vlSelf->__PVT__io_R1D));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_28 
        = VL_EXTEND_II(24,12, (0xfffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 0xcU, 0xcU)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_26 
        = VL_EXTEND_II(24,13, (0x1fffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 0xbU, 0xdU)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_24 
        = VL_EXTEND_II(24,14, (0x3fffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 0xaU, 0xeU)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_21 
        = VL_EXTEND_II(24,16, (0xffffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 8U, 0x10U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_18 
        = VL_EXTEND_II(24,15, (0x7fffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 9U, 0xfU)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_16 
        = VL_EXTEND_II(24,17, (0x1ffffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 7U, 0x11U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_14 
        = VL_EXTEND_II(24,18, (0x3ffffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 6U, 0x12U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_12 
        = VL_EXTEND_II(24,22, (0x3fffffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 2U, 0x16U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_10 
        = VL_EXTEND_II(24,21, (0x1fffffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 3U, 0x15U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_8 
        = VL_EXTEND_II(24,19, (0x7ffffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 5U, 0x13U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T_6 
        = VL_EXTEND_II(24,20, (0xfffffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 4U, 0x14U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT___io_data_out_T 
        = VL_EXTEND_II(24,23, (0x7fffffU & VL_SEL_IIII(24, vlSymsp->TOP__mycpu_top__u_riscv_cpu___muldiv.__PVT__io_ctrl, 1U, 0x17U)));
}
