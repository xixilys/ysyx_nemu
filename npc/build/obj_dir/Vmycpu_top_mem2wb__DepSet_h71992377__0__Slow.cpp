// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_mem2wb.h"

VL_ATTR_COLD void Vmycpu_top_mem2wb___settle__TOP__mycpu_top__u_riscv_cpu___mem22wb__0(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___settle__TOP__mycpu_top__u_riscv_cpu___mem22wb__0\n"); );
    // Body
    vlSelf->__PVT__io_eBreakW = vlSelf->__PVT__ebreak_Reg;
    vlSelf->__PVT__io_Mem_trace_budleW_pc = vlSelf->__PVT__Mem_trace_budleReg_pc;
    vlSelf->__PVT__io_Mem_trace_budleW_data = vlSelf->__PVT__Mem_trace_budleReg_data;
    vlSelf->__PVT__io_Mem_trace_budleW_addr = vlSelf->__PVT__Mem_trace_budleReg_addr;
    vlSelf->__PVT__io_Mem_trace_budleW_len = vlSelf->__PVT__Mem_trace_budleReg_len;
    vlSelf->__PVT__io_CsrWritedataW = vlSelf->__PVT__CsrWritedataReg;
}

VL_ATTR_COLD void Vmycpu_top_mem2wb___settle__TOP__mycpu_top__u_riscv_cpu___mem22wb__1(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___settle__TOP__mycpu_top__u_riscv_cpu___mem22wb__1\n"); );
    // Body
    vlSelf->__PVT__io_Mem_trace_budleW_mem_fetch_type 
        = vlSelf->__PVT__Mem_trace_budleReg_mem_fetch_type;
}

VL_ATTR_COLD void Vmycpu_top_mem2wb___settle__TOP__mycpu_top__u_riscv_cpu___mem22wb__2(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___settle__TOP__mycpu_top__u_riscv_cpu___mem22wb__2\n"); );
    // Body
    vlSelf->__PVT__io_Pc_NextW = vlSelf->__PVT__pc_nextReg;
}

VL_ATTR_COLD void Vmycpu_top_mem2wb___settle__TOP__mycpu_top__u_riscv_cpu___mem22wb__3(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___settle__TOP__mycpu_top__u_riscv_cpu___mem22wb__3\n"); );
    // Body
    vlSelf->__PVT__io_WritecsrAddrW = vlSelf->__PVT__WritecsrAddrW;
}

VL_ATTR_COLD void Vmycpu_top_mem2wb___settle__TOP__mycpu_top__u_riscv_cpu___mem22wb__4(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___settle__TOP__mycpu_top__u_riscv_cpu___mem22wb__4\n"); );
    // Body
    vlSelf->__PVT__io_csrWriteW = vlSelf->__PVT__csrWriteW;
}

VL_ATTR_COLD void Vmycpu_top_mem2wb___settle__TOP__mycpu_top__u_riscv_cpu___mem22wb__5(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___settle__TOP__mycpu_top__u_riscv_cpu___mem22wb__5\n"); );
    // Body
    vlSelf->__PVT__io_BranchJump_JrW = vlSelf->__PVT__BranchJump_JrW_Reg;
}

VL_ATTR_COLD void Vmycpu_top_mem2wb___settle__TOP__mycpu_top__u_riscv_cpu___mem22wb__6(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___settle__TOP__mycpu_top__u_riscv_cpu___mem22wb__6\n"); );
    // Body
    vlSelf->__PVT__io_ExceptionTypeW_Out = vlSelf->__PVT__ExceptionTypeW;
}

VL_ATTR_COLD void Vmycpu_top_mem2wb___settle__TOP__mycpu_top__u_riscv_cpu___mem22wb__7(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___settle__TOP__mycpu_top__u_riscv_cpu___mem22wb__7\n"); );
    // Body
    vlSelf->__PVT__io_ResultW = vlSelf->__PVT__ResultW;
}

VL_ATTR_COLD void Vmycpu_top_mem2wb___settle__TOP__mycpu_top__u_riscv_cpu___mem22wb__8(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___settle__TOP__mycpu_top__u_riscv_cpu___mem22wb__8\n"); );
    // Body
    vlSelf->__PVT__io_RegWriteW_Out = vlSelf->__PVT__RegWriteW;
    vlSelf->__PVT__io_WriteRegW = vlSelf->__PVT__WriteRegW;
}

VL_ATTR_COLD void Vmycpu_top_mem2wb___settle__TOP__mycpu_top__u_riscv_cpu___mem22wb__9(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___settle__TOP__mycpu_top__u_riscv_cpu___mem22wb__9\n"); );
    // Body
    vlSelf->__PVT__io_PCW = vlSelf->__PVT__PCW;
}

VL_ATTR_COLD void Vmycpu_top_mem2wb___ctor_var_reset(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = 0;
    vlSelf->__PVT__reset = 0;
    vlSelf->__PVT__io_en = 0;
    vlSelf->__PVT__io_clr = 0;
    vlSelf->__PVT__io_RegWriteM = 0;
    vlSelf->__PVT__io_ResultM = 0;
    vlSelf->__PVT__io_WriteRegM = 0;
    vlSelf->__PVT__io_csrWriteM = 0;
    vlSelf->__PVT__io_WritecsrAddrM = 0;
    vlSelf->__PVT__io_CsrWritedataM = 0;
    vlSelf->__PVT__io_PCM = 0;
    vlSelf->__PVT__io_ExceptionTypeM = 0;
    vlSelf->__PVT__io_BranchJump_JrM = 0;
    vlSelf->__PVT__io_eBreakM = 0;
    vlSelf->__PVT__io_Pc_NextM = 0;
    vlSelf->__PVT__io_Mem_trace_budleM_pc = 0;
    vlSelf->__PVT__io_Mem_trace_budleM_data = 0;
    vlSelf->__PVT__io_Mem_trace_budleM_mem_fetch_type = 0;
    vlSelf->__PVT__io_Mem_trace_budleM_addr = 0;
    vlSelf->__PVT__io_Mem_trace_budleM_len = 0;
    vlSelf->__PVT__io_RegWriteW_Out = 0;
    vlSelf->__PVT__io_ResultW = 0;
    vlSelf->__PVT__io_WriteRegW = 0;
    vlSelf->__PVT__io_csrWriteW = 0;
    vlSelf->__PVT__io_WritecsrAddrW = 0;
    vlSelf->__PVT__io_PCW = 0;
    vlSelf->__PVT__io_ExceptionTypeW_Out = 0;
    vlSelf->__PVT__io_BranchJump_JrW = 0;
    vlSelf->__PVT__io_eBreakW = 0;
    vlSelf->__PVT__io_Pc_NextW = 0;
    vlSelf->__PVT__io_Mem_trace_budleW_pc = 0;
    vlSelf->__PVT__io_Mem_trace_budleW_data = 0;
    vlSelf->__PVT__io_Mem_trace_budleW_mem_fetch_type = 0;
    vlSelf->__PVT__io_Mem_trace_budleW_addr = 0;
    vlSelf->__PVT__io_Mem_trace_budleW_len = 0;
    vlSelf->__PVT__io_CsrWritedataW = 0;
    vlSelf->__PVT__RegWriteW = 0;
    vlSelf->__PVT__ResultW = 0;
    vlSelf->__PVT__WriteRegW = 0;
    vlSelf->__PVT__csrWriteW = 0;
    vlSelf->__PVT__WritecsrAddrW = 0;
    vlSelf->__PVT__PCW = 0;
    vlSelf->__PVT__ExceptionTypeW = 0;
    vlSelf->__PVT__BranchJump_JrW_Reg = 0;
    vlSelf->__PVT__ebreak_Reg = 0;
    vlSelf->__PVT__pc_nextReg = 0;
    vlSelf->__PVT__Mem_trace_budleReg_pc = 0;
    vlSelf->__PVT__Mem_trace_budleReg_data = 0;
    vlSelf->__PVT__Mem_trace_budleReg_mem_fetch_type = 0;
    vlSelf->__PVT__Mem_trace_budleReg_addr = 0;
    vlSelf->__PVT__Mem_trace_budleReg_len = 0;
    vlSelf->__PVT__CsrWritedataReg = 0;
    vlSelf->__Vdly__RegWriteW = 0;
    vlSelf->__Vdly__ResultW = 0;
    vlSelf->__Vdly__WriteRegW = 0;
    vlSelf->__Vdly__csrWriteW = 0;
    vlSelf->__Vdly__WritecsrAddrW = 0;
    vlSelf->__Vdly__PCW = 0;
    vlSelf->__Vdly__ExceptionTypeW = 0;
    vlSelf->__Vdly__BranchJump_JrW_Reg = 0;
    vlSelf->__Vdly__ebreak_Reg = 0;
    vlSelf->__Vdly__pc_nextReg = 0;
    vlSelf->__Vdly__Mem_trace_budleReg_pc = 0;
    vlSelf->__Vdly__Mem_trace_budleReg_data = 0;
    vlSelf->__Vdly__Mem_trace_budleReg_mem_fetch_type = 0;
    vlSelf->__Vdly__Mem_trace_budleReg_addr = 0;
    vlSelf->__Vdly__Mem_trace_budleReg_len = 0;
    vlSelf->__Vdly__CsrWritedataReg = 0;
}
