// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_difftest_commit.h"

void Vmycpu_top___024unit____Vdpiimwrap_set_pc_ptr_TOP____024unit(QData/*63:0*/ a);
void Vmycpu_top___024unit____Vdpiimwrap_set_debug_pc_ptr_TOP____024unit(QData/*63:0*/ a);
void Vmycpu_top___024unit____Vdpiimwrap_cpu_commited_func_TOP____024unit();
void Vmycpu_top___024unit____Vdpiimwrap_cpu_ebreak_TOP____024unit();

VL_INLINE_OPT void Vmycpu_top_difftest_commit___sequent__TOP__mycpu_top__u_riscv_cpu___commit_difftest__0(Vmycpu_top_difftest_commit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_difftest_commit___sequent__TOP__mycpu_top__u_riscv_cpu___commit_difftest__0\n"); );
    // Body
    if (((~ (IData)(vlSelf->__PVT__reset)) & (IData)(vlSelf->__PVT__inst_commit))) {
        Vmycpu_top___024unit____Vdpiimwrap_set_pc_ptr_TOP____024unit(vlSelf->__PVT__pc);
        Vmycpu_top___024unit____Vdpiimwrap_set_debug_pc_ptr_TOP____024unit(vlSelf->__PVT__debug_pc);
        Vmycpu_top___024unit____Vdpiimwrap_cpu_commited_func_TOP____024unit();
    }
    if (vlSelf->__PVT__cpu_ebreak_sign) {
        Vmycpu_top___024unit____Vdpiimwrap_cpu_ebreak_TOP____024unit();
    }
    vlSelf->__PVT__data_ok_ok = 1U;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___commit_difftest_data_ok_ok 
        = vlSelf->__PVT__data_ok_ok;
}

VL_INLINE_OPT void Vmycpu_top_difftest_commit___combo__TOP__mycpu_top__u_riscv_cpu___commit_difftest__0(Vmycpu_top_difftest_commit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_difftest_commit___combo__TOP__mycpu_top__u_riscv_cpu___commit_difftest__0\n"); );
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
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__Look_up_table_read_first_.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__Look_up_table_read_first_.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_6__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data_7__icache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_1));
}
