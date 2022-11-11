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

VL_INLINE_OPT void Vmycpu_top_difftest_commit___nba_sequent__TOP__mycpu_top__u_riscv_cpu___commit_difftest__0(Vmycpu_top_difftest_commit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_difftest_commit___nba_sequent__TOP__mycpu_top__u_riscv_cpu___commit_difftest__0\n"); );
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
}
