// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_mem2wb.h"

VL_INLINE_OPT void Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__0(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__0\n"); );
    // Body
    vlSelf->__Vdly__Mem_trace_budleReg_len = vlSelf->__PVT__Mem_trace_budleReg_len;
    vlSelf->__Vdly__pc_nextReg = vlSelf->__PVT__pc_nextReg;
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__1(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__1\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__Mem_trace_budleReg_len = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__Mem_trace_budleReg_len = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__Mem_trace_budleReg_len = vlSelf->__PVT__io_Mem_trace_budleM_len;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__pc_nextReg = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__pc_nextReg = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__pc_nextReg = vlSelf->__PVT__io_Pc_NextM;
    }
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__2(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__2\n"); );
    // Body
    vlSelf->__PVT__Mem_trace_budleReg_len = vlSelf->__Vdly__Mem_trace_budleReg_len;
    vlSelf->__PVT__pc_nextReg = vlSelf->__Vdly__pc_nextReg;
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__3(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__3\n"); );
    // Body
    vlSelf->__PVT__io_Mem_trace_budleW_len = vlSelf->__PVT__Mem_trace_budleReg_len;
    vlSelf->__PVT__io_Pc_NextW = vlSelf->__PVT__pc_nextReg;
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__4(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__4\n"); );
    // Body
    vlSelf->__Vdly__ResultW = vlSelf->__PVT__ResultW;
    vlSelf->__Vdly__RegWriteW = vlSelf->__PVT__RegWriteW;
    vlSelf->__Vdly__WriteRegW = vlSelf->__PVT__WriteRegW;
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__5(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__5\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__ResultW = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__ResultW = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__ResultW = vlSelf->__PVT__io_ResultM;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__RegWriteW = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__RegWriteW = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__RegWriteW = vlSelf->__PVT__io_RegWriteM;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__WriteRegW = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__WriteRegW = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__WriteRegW = vlSelf->__PVT__io_WriteRegM;
    }
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__6(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__6\n"); );
    // Body
    vlSelf->__PVT__ResultW = vlSelf->__Vdly__ResultW;
    vlSelf->__PVT__RegWriteW = vlSelf->__Vdly__RegWriteW;
    vlSelf->__PVT__WriteRegW = vlSelf->__Vdly__WriteRegW;
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__7(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__7\n"); );
    // Body
    vlSelf->__PVT__io_ResultW = vlSelf->__PVT__ResultW;
    vlSelf->__PVT__io_RegWriteW_Out = vlSelf->__PVT__RegWriteW;
    vlSelf->__PVT__io_WriteRegW = vlSelf->__PVT__WriteRegW;
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__8(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__8\n"); );
    // Body
    vlSelf->__Vdly__BranchJump_JrW_Reg = vlSelf->__PVT__BranchJump_JrW_Reg;
    vlSelf->__Vdly__PCW = vlSelf->__PVT__PCW;
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__9(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__9\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__BranchJump_JrW_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__BranchJump_JrW_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__BranchJump_JrW_Reg = vlSelf->__PVT__io_BranchJump_JrM;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__PCW = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__PCW = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__PCW = vlSelf->__PVT__io_PCM;
    }
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__10(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__10\n"); );
    // Body
    vlSelf->__PVT__BranchJump_JrW_Reg = vlSelf->__Vdly__BranchJump_JrW_Reg;
    vlSelf->__PVT__PCW = vlSelf->__Vdly__PCW;
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__11(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__11\n"); );
    // Body
    vlSelf->__PVT__io_BranchJump_JrW = vlSelf->__PVT__BranchJump_JrW_Reg;
    vlSelf->__PVT__io_PCW = vlSelf->__PVT__PCW;
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__12(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__12\n"); );
    // Body
    vlSelf->__Vdly__CsrWritedataReg = vlSelf->__PVT__CsrWritedataReg;
    vlSelf->__Vdly__Mem_trace_budleReg_addr = vlSelf->__PVT__Mem_trace_budleReg_addr;
    vlSelf->__Vdly__Mem_trace_budleReg_data = vlSelf->__PVT__Mem_trace_budleReg_data;
    vlSelf->__Vdly__Mem_trace_budleReg_pc = vlSelf->__PVT__Mem_trace_budleReg_pc;
    vlSelf->__Vdly__ebreak_Reg = vlSelf->__PVT__ebreak_Reg;
    vlSelf->__Vdly__Mem_trace_budleReg_mem_fetch_type 
        = vlSelf->__PVT__Mem_trace_budleReg_mem_fetch_type;
    vlSelf->__Vdly__WritecsrAddrW = vlSelf->__PVT__WritecsrAddrW;
    vlSelf->__Vdly__csrWriteW = vlSelf->__PVT__csrWriteW;
    vlSelf->__Vdly__ExceptionTypeW = vlSelf->__PVT__ExceptionTypeW;
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__13(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__13\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__ebreak_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__ebreak_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__ebreak_Reg = vlSelf->__PVT__io_eBreakM;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__Mem_trace_budleReg_pc = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__Mem_trace_budleReg_pc = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__Mem_trace_budleReg_pc = vlSelf->__PVT__io_Mem_trace_budleM_pc;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__Mem_trace_budleReg_data = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__Mem_trace_budleReg_data = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__Mem_trace_budleReg_data = vlSelf->__PVT__io_Mem_trace_budleM_data;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__Mem_trace_budleReg_addr = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__Mem_trace_budleReg_addr = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__Mem_trace_budleReg_addr = vlSelf->__PVT__io_Mem_trace_budleM_addr;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__CsrWritedataReg = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__CsrWritedataReg = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__CsrWritedataReg = vlSelf->__PVT__io_CsrWritedataM;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__Mem_trace_budleReg_mem_fetch_type = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__Mem_trace_budleReg_mem_fetch_type = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__Mem_trace_budleReg_mem_fetch_type 
            = vlSelf->__PVT__io_Mem_trace_budleM_mem_fetch_type;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__WritecsrAddrW = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__WritecsrAddrW = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__WritecsrAddrW = vlSelf->__PVT__io_WritecsrAddrM;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__csrWriteW = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__csrWriteW = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__csrWriteW = vlSelf->__PVT__io_csrWriteM;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__ExceptionTypeW = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__ExceptionTypeW = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__ExceptionTypeW = vlSelf->__PVT__io_ExceptionTypeM;
    }
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__14(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__14\n"); );
    // Body
    vlSelf->__PVT__CsrWritedataReg = vlSelf->__Vdly__CsrWritedataReg;
    vlSelf->__PVT__Mem_trace_budleReg_addr = vlSelf->__Vdly__Mem_trace_budleReg_addr;
    vlSelf->__PVT__Mem_trace_budleReg_data = vlSelf->__Vdly__Mem_trace_budleReg_data;
    vlSelf->__PVT__Mem_trace_budleReg_pc = vlSelf->__Vdly__Mem_trace_budleReg_pc;
    vlSelf->__PVT__ebreak_Reg = vlSelf->__Vdly__ebreak_Reg;
    vlSelf->__PVT__Mem_trace_budleReg_mem_fetch_type 
        = vlSelf->__Vdly__Mem_trace_budleReg_mem_fetch_type;
    vlSelf->__PVT__WritecsrAddrW = vlSelf->__Vdly__WritecsrAddrW;
    vlSelf->__PVT__csrWriteW = vlSelf->__Vdly__csrWriteW;
    vlSelf->__PVT__ExceptionTypeW = vlSelf->__Vdly__ExceptionTypeW;
}

VL_INLINE_OPT void Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__15(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___nba_sequent__TOP__mycpu_top__u_riscv_cpu___mem22wb__15\n"); );
    // Body
    vlSelf->__PVT__io_eBreakW = vlSelf->__PVT__ebreak_Reg;
    vlSelf->__PVT__io_Mem_trace_budleW_pc = vlSelf->__PVT__Mem_trace_budleReg_pc;
    vlSelf->__PVT__io_Mem_trace_budleW_data = vlSelf->__PVT__Mem_trace_budleReg_data;
    vlSelf->__PVT__io_Mem_trace_budleW_addr = vlSelf->__PVT__Mem_trace_budleReg_addr;
    vlSelf->__PVT__io_CsrWritedataW = vlSelf->__PVT__CsrWritedataReg;
    vlSelf->__PVT__io_Mem_trace_budleW_mem_fetch_type 
        = vlSelf->__PVT__Mem_trace_budleReg_mem_fetch_type;
    vlSelf->__PVT__io_WritecsrAddrW = vlSelf->__PVT__WritecsrAddrW;
    vlSelf->__PVT__io_csrWriteW = vlSelf->__PVT__csrWriteW;
    vlSelf->__PVT__io_ExceptionTypeW_Out = vlSelf->__PVT__ExceptionTypeW;
}
