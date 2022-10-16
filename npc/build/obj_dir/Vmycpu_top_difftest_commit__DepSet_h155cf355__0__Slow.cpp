// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_difftest_commit.h"

VL_ATTR_COLD void Vmycpu_top_difftest_commit___settle__TOP__mycpu_top__u_riscv_cpu___commit_difftest__0(Vmycpu_top_difftest_commit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_difftest_commit___settle__TOP__mycpu_top__u_riscv_cpu___commit_difftest__0\n"); );
    // Body
    vlSelf->__PVT__pc_debug = vlSelf->__PVT__debug_pc;
}

VL_ATTR_COLD void Vmycpu_top_difftest_commit___settle__TOP__mycpu_top__u_riscv_cpu___commit_difftest__1(Vmycpu_top_difftest_commit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_difftest_commit___settle__TOP__mycpu_top__u_riscv_cpu___commit_difftest__1\n"); );
    // Body
    vlSelf->__PVT__gpr[0U] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0U, 0x40U);
    vlSelf->__PVT__gpr[1U] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x40U, 0x40U);
    vlSelf->__PVT__gpr[2U] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x80U, 0x40U);
    vlSelf->__PVT__gpr[3U] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0xc0U, 0x40U);
    vlSelf->__PVT__gpr[4U] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x100U, 0x40U);
    vlSelf->__PVT__gpr[5U] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x140U, 0x40U);
    vlSelf->__PVT__gpr[6U] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x180U, 0x40U);
    vlSelf->__PVT__gpr[7U] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x1c0U, 0x40U);
    vlSelf->__PVT__gpr[8U] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x200U, 0x40U);
    vlSelf->__PVT__gpr[9U] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x240U, 0x40U);
    vlSelf->__PVT__gpr[0xaU] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x280U, 0x40U);
    vlSelf->__PVT__gpr[0xbU] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x2c0U, 0x40U);
    vlSelf->__PVT__gpr[0xcU] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x300U, 0x40U);
    vlSelf->__PVT__gpr[0xdU] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x340U, 0x40U);
    vlSelf->__PVT__gpr[0xeU] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x380U, 0x40U);
    vlSelf->__PVT__gpr[0xfU] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x3c0U, 0x40U);
    vlSelf->__PVT__gpr[0x10U] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x400U, 0x40U);
    vlSelf->__PVT__gpr[0x11U] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x440U, 0x40U);
    vlSelf->__PVT__gpr[0x12U] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x480U, 0x40U);
    vlSelf->__PVT__gpr[0x13U] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x4c0U, 0x40U);
    vlSelf->__PVT__gpr[0x14U] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x500U, 0x40U);
    vlSelf->__PVT__gpr[0x15U] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x540U, 0x40U);
    vlSelf->__PVT__gpr[0x16U] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x580U, 0x40U);
    vlSelf->__PVT__gpr[0x17U] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x5c0U, 0x40U);
    vlSelf->__PVT__gpr[0x18U] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x600U, 0x40U);
    vlSelf->__PVT__gpr[0x19U] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x640U, 0x40U);
    vlSelf->__PVT__gpr[0x1aU] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x680U, 0x40U);
    vlSelf->__PVT__gpr[0x1bU] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x6c0U, 0x40U);
    vlSelf->__PVT__gpr[0x1cU] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x700U, 0x40U);
    vlSelf->__PVT__gpr[0x1dU] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x740U, 0x40U);
    vlSelf->__PVT__gpr[0x1eU] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x780U, 0x40U);
    vlSelf->__PVT__gpr[0x1fU] = VL_SEL_QWII(2048, vlSelf->__PVT__gpr_wire, 0x7c0U, 0x40U);
}

VL_ATTR_COLD void Vmycpu_top_difftest_commit___ctor_var_reset(Vmycpu_top_difftest_commit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_difftest_commit___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__reset = 0;
    vlSelf->__PVT__clock = 0;
    VL_ZERO_RESET_W(2048, vlSelf->__PVT__gpr_wire);
    vlSelf->__PVT__pc = 0;
    vlSelf->__PVT__debug_pc = 0;
    vlSelf->__PVT__inst_commit = 0;
    vlSelf->__PVT__data_ok_ok = 0;
    vlSelf->__PVT__cpu_ebreak_sign = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__gpr[__Vi0] = 0;
    }
    vlSelf->__PVT__pc_debug = 0;
    vlSelf->__PVT__commit_pc = 0;
}
