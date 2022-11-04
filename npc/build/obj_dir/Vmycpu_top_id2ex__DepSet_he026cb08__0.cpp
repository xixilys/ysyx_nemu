// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_id2ex.h"

VL_INLINE_OPT void Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__0(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__0\n"); );
    // Body
    vlSelf->__Vdly__decoder_port_reg_muldiv_cal = vlSelf->__PVT__decoder_port_reg_muldiv_cal;
    vlSelf->__Vdly__decoder_port_reg_muldiv_control 
        = vlSelf->__PVT__decoder_port_reg_muldiv_control;
    vlSelf->__Vdly__decoder_port_reg_ALUCtrlD = vlSelf->__PVT__decoder_port_reg_ALUCtrlD;
    vlSelf->__Vdly__RD2E_Reg = vlSelf->__PVT__RD2E_Reg;
    vlSelf->__Vdly__ImmE_Reg = vlSelf->__PVT__ImmE_Reg;
    vlSelf->__Vdly__RD1E_Reg = vlSelf->__PVT__RD1E_Reg;
    vlSelf->__Vdly__R1E_Reg = vlSelf->__PVT__R1E_Reg;
}

VL_INLINE_OPT void Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__1(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__1\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__RD2E_Reg = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__RD2E_Reg = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__RD2E_Reg = vlSelf->__PVT__io_RD2D;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__ImmE_Reg = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__ImmE_Reg = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__ImmE_Reg = vlSelf->__PVT__io_ImmD;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__RD1E_Reg = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__RD1E_Reg = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__RD1E_Reg = vlSelf->__PVT__io_RD1D;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__R1E_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__R1E_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__R1E_Reg = vlSelf->__PVT__io_R1D;
    }
}

VL_INLINE_OPT void Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__2(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__2\n"); );
    // Body
    vlSelf->__PVT__RD2E_Reg = vlSelf->__Vdly__RD2E_Reg;
    vlSelf->__PVT__ImmE_Reg = vlSelf->__Vdly__ImmE_Reg;
    vlSelf->__PVT__RD1E_Reg = vlSelf->__Vdly__RD1E_Reg;
    vlSelf->__PVT__R1E_Reg = vlSelf->__Vdly__R1E_Reg;
}

VL_INLINE_OPT void Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__3(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__3\n"); );
    // Body
    vlSelf->__PVT__io_RD2E = vlSelf->__PVT__RD2E_Reg;
    vlSelf->__PVT__io_ImmE = vlSelf->__PVT__ImmE_Reg;
    vlSelf->__PVT__io_RD1E = vlSelf->__PVT__RD1E_Reg;
    vlSelf->__PVT__io_R1E = vlSelf->__PVT__R1E_Reg;
}

VL_INLINE_OPT void Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__4(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__4\n"); );
    // Body
    vlSelf->__Vdly__decoder_port_reg_ALUSrcD_0 = vlSelf->__PVT__decoder_port_reg_ALUSrcD_0;
    vlSelf->__Vdly__PCE_Reg = vlSelf->__PVT__PCE_Reg;
    vlSelf->__Vdly__decoder_port_reg_ALUSrcD_1 = vlSelf->__PVT__decoder_port_reg_ALUSrcD_1;
    vlSelf->__Vdly__R2E_Reg = vlSelf->__PVT__R2E_Reg;
}

VL_INLINE_OPT void Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__5(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__5\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__decoder_port_reg_ALUSrcD_0 = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__decoder_port_reg_ALUSrcD_0 = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__decoder_port_reg_ALUSrcD_0 
            = vlSelf->__PVT__io1_ALUSrcD_0;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__PCE_Reg = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__PCE_Reg = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__PCE_Reg = vlSelf->__PVT__io_PCD;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__decoder_port_reg_ALUSrcD_1 = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__decoder_port_reg_ALUSrcD_1 = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__decoder_port_reg_ALUSrcD_1 
            = vlSelf->__PVT__io1_ALUSrcD_1;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__R2E_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__R2E_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__R2E_Reg = vlSelf->__PVT__io_R2D;
    }
}

VL_INLINE_OPT void Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__6(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__6\n"); );
    // Body
    vlSelf->__PVT__decoder_port_reg_ALUSrcD_0 = vlSelf->__Vdly__decoder_port_reg_ALUSrcD_0;
    vlSelf->__PVT__PCE_Reg = vlSelf->__Vdly__PCE_Reg;
    vlSelf->__PVT__decoder_port_reg_ALUSrcD_1 = vlSelf->__Vdly__decoder_port_reg_ALUSrcD_1;
    vlSelf->__PVT__R2E_Reg = vlSelf->__Vdly__R2E_Reg;
}

VL_INLINE_OPT void Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__7(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__7\n"); );
    // Body
    vlSelf->__PVT__io2_ALUSrcE_0 = (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__decoder_port_reg_ALUSrcD_0), 0U));
    vlSelf->__PVT__io2_PCE = vlSelf->__PVT__PCE_Reg;
    vlSelf->__PVT__io2_ALUSrcE_1 = (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__decoder_port_reg_ALUSrcD_1), 0U));
    vlSelf->__PVT__io_R2E = vlSelf->__PVT__R2E_Reg;
}

VL_INLINE_OPT void Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__8(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__8\n"); );
    // Body
    vlSelf->__Vdly__decoder_port_reg_csrWriteD = vlSelf->__PVT__decoder_port_reg_csrWriteD;
    vlSelf->__Vdly__Pc_NextReg = vlSelf->__PVT__Pc_NextReg;
    vlSelf->__Vdly__BranchJump_JrE_Reg = vlSelf->__PVT__BranchJump_JrE_Reg;
    vlSelf->__Vdly__decoder_port_reg_ebreakD = vlSelf->__PVT__decoder_port_reg_ebreakD;
    vlSelf->__Vdly__decoder_port_reg_csr_control = vlSelf->__PVT__decoder_port_reg_csr_control;
    vlSelf->__Vdly__decoder_port_reg_MemWidthD = vlSelf->__PVT__decoder_port_reg_MemWidthD;
}

VL_INLINE_OPT void Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__9(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__9\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__BranchJump_JrE_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__BranchJump_JrE_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__BranchJump_JrE_Reg = vlSelf->__PVT__io_BranchJump_JrD;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__Pc_NextReg = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__Pc_NextReg = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__Pc_NextReg = vlSelf->__PVT__io_Pc_NextD;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__decoder_port_reg_csrWriteD = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__decoder_port_reg_csrWriteD = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__decoder_port_reg_csrWriteD 
            = vlSelf->__PVT__io1_csrWriteD;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__decoder_port_reg_muldiv_cal = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__decoder_port_reg_muldiv_cal = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__decoder_port_reg_muldiv_cal 
            = vlSelf->__PVT__io1_muldiv_cal;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__decoder_port_reg_ebreakD = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__decoder_port_reg_ebreakD = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__decoder_port_reg_ebreakD = vlSelf->__PVT__io1_ebreakD;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__decoder_port_reg_csr_control = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__decoder_port_reg_csr_control = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__decoder_port_reg_csr_control 
            = vlSelf->__PVT__io1_csr_control;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__decoder_port_reg_MemWidthD = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__decoder_port_reg_MemWidthD = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__decoder_port_reg_MemWidthD 
            = vlSelf->__PVT__io1_MemWidthD;
    }
}

VL_INLINE_OPT void Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__10(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__10\n"); );
    // Body
    vlSelf->__PVT__decoder_port_reg_muldiv_cal = vlSelf->__Vdly__decoder_port_reg_muldiv_cal;
    vlSelf->__PVT__decoder_port_reg_ebreakD = vlSelf->__Vdly__decoder_port_reg_ebreakD;
    vlSelf->__PVT__decoder_port_reg_csr_control = vlSelf->__Vdly__decoder_port_reg_csr_control;
    vlSelf->__PVT__decoder_port_reg_MemWidthD = vlSelf->__Vdly__decoder_port_reg_MemWidthD;
}

VL_INLINE_OPT void Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__11(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__11\n"); );
    // Body
    vlSelf->__PVT__io_muldiv_calE = vlSelf->__PVT__decoder_port_reg_muldiv_cal;
    vlSelf->__PVT__io2_eBreakE = vlSelf->__PVT__decoder_port_reg_ebreakD;
    vlSelf->__PVT__io_csr_controlE = vlSelf->__PVT__decoder_port_reg_csr_control;
    vlSelf->__PVT__io2_MemWidthE = vlSelf->__PVT__decoder_port_reg_MemWidthD;
}

VL_INLINE_OPT void Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__12(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__12\n"); );
    // Body
    vlSelf->__Vdly__decoder_port_reg_LoadUnsignedD 
        = vlSelf->__PVT__decoder_port_reg_LoadUnsignedD;
    vlSelf->__Vdly__WritecsrAddrE_Reg = vlSelf->__PVT__WritecsrAddrE_Reg;
    vlSelf->__Vdly__decoder_port_reg_alu_cal = vlSelf->__PVT__decoder_port_reg_alu_cal;
    vlSelf->__Vdly__decoder_port_reg_csr_Imm = vlSelf->__PVT__decoder_port_reg_csr_Imm;
    vlSelf->__Vdly__ReadcsrAddrE_Reg = vlSelf->__PVT__ReadcsrAddrE_Reg;
    vlSelf->__Vdly__decoder_port_reg_RegWriteD = vlSelf->__PVT__decoder_port_reg_RegWriteD;
    vlSelf->__Vdly__decoder_port_reg_RegDstD = vlSelf->__PVT__decoder_port_reg_RegDstD;
}

VL_INLINE_OPT void Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__13(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__13\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__WritecsrAddrE_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__WritecsrAddrE_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__WritecsrAddrE_Reg = vlSelf->__PVT__io_WritecsrAddrD;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__decoder_port_reg_LoadUnsignedD = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__decoder_port_reg_LoadUnsignedD = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__decoder_port_reg_LoadUnsignedD 
            = vlSelf->__PVT__io1_LoadUnsignedD;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__decoder_port_reg_alu_cal = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__decoder_port_reg_alu_cal = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__decoder_port_reg_alu_cal = vlSelf->__PVT__io1_alu_cal;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__decoder_port_reg_csr_Imm = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__decoder_port_reg_csr_Imm = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__decoder_port_reg_csr_Imm = vlSelf->__PVT__io1_csr_Imm;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__decoder_port_reg_muldiv_control = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__decoder_port_reg_muldiv_control = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__decoder_port_reg_muldiv_control 
            = vlSelf->__PVT__io1_muldiv_control;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__ReadcsrAddrE_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__ReadcsrAddrE_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__ReadcsrAddrE_Reg = vlSelf->__PVT__io_ReadcsrAddrD;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__decoder_port_reg_RegWriteD = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__decoder_port_reg_RegWriteD = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__decoder_port_reg_RegWriteD 
            = vlSelf->__PVT__io1_RegWriteD;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__decoder_port_reg_RegDstD = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__decoder_port_reg_RegDstD = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__decoder_port_reg_RegDstD = vlSelf->__PVT__io1_RegDstD;
    }
}

VL_INLINE_OPT void Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__14(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__14\n"); );
    // Body
    vlSelf->__PVT__decoder_port_reg_alu_cal = vlSelf->__Vdly__decoder_port_reg_alu_cal;
    vlSelf->__PVT__decoder_port_reg_csr_Imm = vlSelf->__Vdly__decoder_port_reg_csr_Imm;
    vlSelf->__PVT__decoder_port_reg_muldiv_control 
        = vlSelf->__Vdly__decoder_port_reg_muldiv_control;
    vlSelf->__PVT__ReadcsrAddrE_Reg = vlSelf->__Vdly__ReadcsrAddrE_Reg;
    vlSelf->__PVT__decoder_port_reg_RegWriteD = vlSelf->__Vdly__decoder_port_reg_RegWriteD;
    vlSelf->__PVT__decoder_port_reg_RegDstD = vlSelf->__Vdly__decoder_port_reg_RegDstD;
}

VL_INLINE_OPT void Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__15(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__15\n"); );
    // Body
    vlSelf->__PVT__io_alu_calE = vlSelf->__PVT__decoder_port_reg_alu_cal;
    vlSelf->__PVT__io_csr_ImmE = vlSelf->__PVT__decoder_port_reg_csr_Imm;
    vlSelf->__PVT__io_muldiv_control = vlSelf->__PVT__decoder_port_reg_muldiv_control;
    vlSelf->__PVT__io2_ReadcsrAddrE = vlSelf->__PVT__ReadcsrAddrE_Reg;
    vlSelf->__PVT__io2_RegWriteE = vlSelf->__PVT__decoder_port_reg_RegWriteD;
    vlSelf->__PVT__io2_RegDstE = vlSelf->__PVT__decoder_port_reg_RegDstD;
}

VL_INLINE_OPT void Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__16(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__16\n"); );
    // Body
    vlSelf->__Vdly__PCPlus4E_Reg = vlSelf->__PVT__PCPlus4E_Reg;
    vlSelf->__Vdly__decoder_port_reg_LinkD = vlSelf->__PVT__decoder_port_reg_LinkD;
    vlSelf->__Vdly__decoder_port_reg_MemToRegD = vlSelf->__PVT__decoder_port_reg_MemToRegD;
    vlSelf->__Vdly__decoder_port_reg_MemWriteD = vlSelf->__PVT__decoder_port_reg_MemWriteD;
    vlSelf->__Vdly__decoder_port_reg_csrToRegD = vlSelf->__PVT__decoder_port_reg_csrToRegD;
    vlSelf->__Vdly__ExceptionTypeE_Reg = vlSelf->__PVT__ExceptionTypeE_Reg;
    vlSelf->__Vdly__decoder_port_reg_data_wD = vlSelf->__PVT__decoder_port_reg_data_wD;
}

VL_INLINE_OPT void Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__17(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__17\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__PCPlus4E_Reg = 0ULL;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__PCPlus4E_Reg = 0ULL;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__PCPlus4E_Reg = vlSelf->__PVT__io_PCPlus4D;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__decoder_port_reg_LinkD = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__decoder_port_reg_LinkD = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__decoder_port_reg_LinkD = vlSelf->__PVT__io1_LinkD;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__decoder_port_reg_MemToRegD = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__decoder_port_reg_MemToRegD = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__decoder_port_reg_MemToRegD 
            = vlSelf->__PVT__io1_MemToRegD;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__decoder_port_reg_MemWriteD = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__decoder_port_reg_MemWriteD = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__decoder_port_reg_MemWriteD 
            = vlSelf->__PVT__io1_MemWriteD;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__decoder_port_reg_csrToRegD = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__decoder_port_reg_csrToRegD = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__decoder_port_reg_csrToRegD 
            = vlSelf->__PVT__io1_csrToRegD;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__ExceptionTypeE_Reg = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__ExceptionTypeE_Reg = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__ExceptionTypeE_Reg = vlSelf->__PVT__io_ExceptionTypeD;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__decoder_port_reg_data_wD = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__decoder_port_reg_data_wD = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__decoder_port_reg_data_wD = vlSelf->__PVT__io1_data_wD;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__decoder_port_reg_ALUCtrlD = 0U;
    } else if (vlSelf->__PVT__io_clr) {
        vlSelf->__Vdly__decoder_port_reg_ALUCtrlD = 0U;
    } else if (vlSelf->__PVT__io_en) {
        vlSelf->__Vdly__decoder_port_reg_ALUCtrlD = vlSelf->__PVT__io1_ALUCtrlD;
    }
}

VL_INLINE_OPT void Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__18(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__18\n"); );
    // Body
    vlSelf->__PVT__PCPlus4E_Reg = vlSelf->__Vdly__PCPlus4E_Reg;
    vlSelf->__PVT__decoder_port_reg_LinkD = vlSelf->__Vdly__decoder_port_reg_LinkD;
    vlSelf->__PVT__decoder_port_reg_MemToRegD = vlSelf->__Vdly__decoder_port_reg_MemToRegD;
    vlSelf->__PVT__decoder_port_reg_MemWriteD = vlSelf->__Vdly__decoder_port_reg_MemWriteD;
    vlSelf->__PVT__decoder_port_reg_csrToRegD = vlSelf->__Vdly__decoder_port_reg_csrToRegD;
    vlSelf->__PVT__ExceptionTypeE_Reg = vlSelf->__Vdly__ExceptionTypeE_Reg;
    vlSelf->__PVT__decoder_port_reg_data_wD = vlSelf->__Vdly__decoder_port_reg_data_wD;
    vlSelf->__PVT__decoder_port_reg_ALUCtrlD = vlSelf->__Vdly__decoder_port_reg_ALUCtrlD;
}

VL_INLINE_OPT void Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__19(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__19\n"); );
    // Body
    vlSelf->__PVT__io2_PCPlus4E = vlSelf->__PVT__PCPlus4E_Reg;
    vlSelf->__PVT__io2_LinkE = vlSelf->__PVT__decoder_port_reg_LinkD;
    vlSelf->__PVT__io2_MemToRegE = vlSelf->__PVT__decoder_port_reg_MemToRegD;
    vlSelf->__PVT__io2_MemWriteE = vlSelf->__PVT__decoder_port_reg_MemWriteD;
    vlSelf->__PVT__io_csrToRegE_Out = vlSelf->__PVT__decoder_port_reg_csrToRegD;
    vlSelf->__PVT__io_ExceptionTypeE_Out = vlSelf->__PVT__ExceptionTypeE_Reg;
    vlSelf->__PVT__io_data_wE = vlSelf->__PVT__decoder_port_reg_data_wD;
    vlSelf->__PVT__io2_ALUCtrlE = vlSelf->__PVT__decoder_port_reg_ALUCtrlD;
}

VL_INLINE_OPT void Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__20(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__20\n"); );
    // Body
    vlSelf->__PVT__WritecsrAddrE_Reg = vlSelf->__Vdly__WritecsrAddrE_Reg;
}

VL_INLINE_OPT void Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__21(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__21\n"); );
    // Body
    vlSelf->__PVT__io2_WritecsrAddrE = vlSelf->__PVT__WritecsrAddrE_Reg;
}

VL_INLINE_OPT void Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__22(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__22\n"); );
    // Body
    vlSelf->__PVT__decoder_port_reg_LoadUnsignedD = vlSelf->__Vdly__decoder_port_reg_LoadUnsignedD;
    vlSelf->__PVT__decoder_port_reg_csrWriteD = vlSelf->__Vdly__decoder_port_reg_csrWriteD;
    vlSelf->__PVT__Pc_NextReg = vlSelf->__Vdly__Pc_NextReg;
    vlSelf->__PVT__BranchJump_JrE_Reg = vlSelf->__Vdly__BranchJump_JrE_Reg;
}

VL_INLINE_OPT void Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__23(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__23\n"); );
    // Body
    vlSelf->__PVT__io2_LoadUnsignedE = vlSelf->__PVT__decoder_port_reg_LoadUnsignedD;
    vlSelf->__PVT__io2_csrWriteE = vlSelf->__PVT__decoder_port_reg_csrWriteD;
    vlSelf->__PVT__io2_BranchJump_JrE = vlSelf->__PVT__BranchJump_JrE_Reg;
    vlSelf->__PVT__io_Pc_NextE = vlSelf->__PVT__Pc_NextReg;
}
