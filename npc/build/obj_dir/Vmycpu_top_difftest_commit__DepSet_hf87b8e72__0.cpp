// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_difftest_commit.h"

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
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_4 
        = ((4U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_4
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_3);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_132 
        = ((4U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_4
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_131);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1E_T_18 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1E_T_6)
            ? 2U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1E_T_17));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_5 
        = ((5U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_5
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_4);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_133 
        = ((5U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_5
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_132);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_Forward1E 
        = ((0U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1E))
            ? 0U : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1E_T_18));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_6 
        = ((6U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_6
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_5);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_134 
        = ((6U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_6
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_133);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward1E 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_Forward1E;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_7 
        = ((7U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_7
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_6);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_135 
        = ((7U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_7
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_134);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD1ForWardE_p_T_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward1E))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ResultW
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_RD1E);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_8 
        = ((8U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_8
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_7);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_136 
        = ((8U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_8
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_135);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD1ForWardE_p_T_3 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward1E))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__resultE2M_Reg
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD1ForWardE_p_T_1);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_9 
        = ((9U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_9
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_8);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_137 
        = ((9U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_9
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_136);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD1ForWardE_p 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward1E))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ResultM2_Reg
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD1ForWardE_p_T_3);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_10 
        = ((0xaU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_10
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_9);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_138 
        = ((0xaU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_10
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_137);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD1ForWardE 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Forward_Lock1E)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD1ForWardE_r
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD1ForWardE_p);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_11 
        = ((0xbU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_11
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_10);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_139 
        = ((0xbU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_11
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_138);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___addr_cal_io_d_vaddr 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_ImmE 
           + vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD1ForWardE);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_12 
        = ((0xcU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_12
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_11);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_140 
        = ((0xcU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_12
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_139);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___addr_cal.__PVT__io_d_vaddr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___addr_cal_io_d_vaddr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_13 
        = ((0xdU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_13
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_12);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_141 
        = ((0xdU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_13
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_140);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___addr_cal.__PVT__io_d_paddr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___addr_cal.__PVT__io_d_vaddr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_14 
        = ((0xeU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_14
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_13);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_142 
        = ((0xeU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_14
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_141);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___addr_cal_io_d_paddr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___addr_cal.__PVT__io_d_paddr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_15 
        = ((0xfU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_15
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_14);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_143 
        = ((0xfU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_15
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_142);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmemreq_io_VAddrE 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___addr_cal_io_d_paddr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_16 
        = ((0x10U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_16
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_15);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_144 
        = ((0x10U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_16
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_143);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_VAddrE 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmemreq_io_VAddrE;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_17 
        = ((0x11U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_17
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_16);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_145 
        = ((0x11U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_17
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_144);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_VAddrE;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_18 
        = ((0x12U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_18
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_17);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_146 
        = ((0x12U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_18
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_145);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmemreq_io_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_19 
        = ((0x13U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_19
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_18);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_147 
        = ((0x13U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_19
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_146);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_sram_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmemreq_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_20 
        = ((0x14U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_20
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_19);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_148 
        = ((0x14U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_20
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_147);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_21 
        = ((0x15U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_21
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_20);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_149 
        = ((0x15U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_21
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_148);
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_sram_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_sram_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_22 
        = ((0x16U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_22
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_21);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_150 
        = ((0x16U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_22
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_149);
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_sram_addr 
        = vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_sram_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_23 
        = ((0x17U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_23
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_22);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_151 
        = ((0x17U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_23
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_150);
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_addr 
        = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_sram_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_24 
        = ((0x18U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_24
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_23);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_152 
        = ((0x18U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_24
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_151);
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__dcache_tag_io_raddr 
        = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_addr;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__dcache_tag_1_io_raddr 
        = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_25 
        = ((0x19U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_25
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_24);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_153 
        = ((0x19U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_25
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_152);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr 
        = vlSymsp->TOP__mycpu_top__data_cache.__PVT__dcache_tag_io_raddr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr 
        = vlSymsp->TOP__mycpu_top__data_cache.__PVT__dcache_tag_1_io_raddr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_385 
        = ((1U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_1
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_0);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_449 
        = ((1U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_1
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_0);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_26 
        = ((0x1aU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_26
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_25);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_154 
        = ((0x1aU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_26
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_153);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_385 
        = ((1U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_1
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_0);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_449 
        = ((1U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_1
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_0);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_386 
        = ((2U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_2
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_385);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_450 
        = ((2U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_2
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_449);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_27 
        = ((0x1bU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_27
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_26);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_155 
        = ((0x1bU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_27
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_154);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_386 
        = ((2U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_2
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_385);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_450 
        = ((2U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_2
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_449);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_387 
        = ((3U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_3
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_386);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_451 
        = ((3U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_3
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_450);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_28 
        = ((0x1cU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_28
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_27);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_156 
        = ((0x1cU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_28
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_155);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_387 
        = ((3U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_3
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_386);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_451 
        = ((3U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_3
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_450);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_388 
        = ((4U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_4
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_387);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_452 
        = ((4U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_4
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_451);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_29 
        = ((0x1dU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_29
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_28);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_157 
        = ((0x1dU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_29
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_156);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_388 
        = ((4U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_4
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_387);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_452 
        = ((4U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_4
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_451);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_389 
        = ((5U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_5
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_388);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_453 
        = ((5U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_5
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_452);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_30 
        = ((0x1eU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_30
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_29);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_158 
        = ((0x1eU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_30
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_157);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_389 
        = ((5U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_5
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_388);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_453 
        = ((5U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_5
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_452);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_390 
        = ((6U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_6
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_389);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_454 
        = ((6U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_6
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_453);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_31 
        = ((0x1fU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_31
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_30);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_159 
        = ((0x1fU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_31
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_158);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_390 
        = ((6U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_6
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_389);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_454 
        = ((6U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_6
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_453);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_391 
        = ((7U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_7
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_390);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_455 
        = ((7U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_7
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_454);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_32 
        = ((0x20U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_32
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_31);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_160 
        = ((0x20U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_32
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_159);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_391 
        = ((7U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_7
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_390);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_455 
        = ((7U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_7
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_454);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_392 
        = ((8U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_8
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_391);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_456 
        = ((8U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_8
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_455);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_33 
        = ((0x21U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_33
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_32);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_161 
        = ((0x21U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_33
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_160);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_392 
        = ((8U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_8
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_391);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_456 
        = ((8U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_8
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_455);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_393 
        = ((9U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_9
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_392);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_457 
        = ((9U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_9
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_456);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_34 
        = ((0x22U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_34
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_33);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_162 
        = ((0x22U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_34
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_161);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_393 
        = ((9U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_9
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_392);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_457 
        = ((9U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_9
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_456);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_394 
        = ((0xaU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_10
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_393);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_458 
        = ((0xaU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_10
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_457);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_35 
        = ((0x23U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_35
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_34);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_163 
        = ((0x23U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_35
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_162);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_394 
        = ((0xaU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_10
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_393);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_458 
        = ((0xaU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_10
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_457);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_395 
        = ((0xbU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_11
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_394);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_459 
        = ((0xbU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_11
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_458);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_36 
        = ((0x24U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_36
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_35);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_164 
        = ((0x24U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_36
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_163);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_395 
        = ((0xbU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_11
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_394);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_459 
        = ((0xbU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_11
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_458);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_396 
        = ((0xcU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_12
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_395);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_460 
        = ((0xcU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_12
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_459);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_37 
        = ((0x25U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_37
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_36);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_165 
        = ((0x25U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_37
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_164);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_396 
        = ((0xcU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_12
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_395);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_460 
        = ((0xcU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_12
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_459);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_397 
        = ((0xdU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_13
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_396);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_461 
        = ((0xdU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_13
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_460);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_38 
        = ((0x26U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_38
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_37);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_166 
        = ((0x26U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_38
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_165);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_397 
        = ((0xdU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_13
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_396);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_461 
        = ((0xdU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_13
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_460);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_398 
        = ((0xeU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_14
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_397);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_462 
        = ((0xeU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_14
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_461);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_39 
        = ((0x27U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_39
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_38);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_167 
        = ((0x27U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_39
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_166);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_398 
        = ((0xeU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_14
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_397);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_462 
        = ((0xeU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_14
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_461);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_399 
        = ((0xfU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_15
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_398);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_463 
        = ((0xfU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_15
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_462);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_40 
        = ((0x28U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_40
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_39);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_168 
        = ((0x28U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_40
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_167);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_399 
        = ((0xfU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_15
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_398);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_463 
        = ((0xfU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_15
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_462);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_400 
        = ((0x10U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_16
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_399);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_464 
        = ((0x10U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_16
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_463);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_41 
        = ((0x29U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_41
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_40);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_169 
        = ((0x29U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_41
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_168);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_400 
        = ((0x10U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_16
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_399);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_464 
        = ((0x10U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_16
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_463);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_401 
        = ((0x11U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_17
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_400);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_465 
        = ((0x11U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_17
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_464);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_42 
        = ((0x2aU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_42
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_41);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_170 
        = ((0x2aU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_42
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_169);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_401 
        = ((0x11U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_17
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_400);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_465 
        = ((0x11U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_17
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_464);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_402 
        = ((0x12U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_18
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_401);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_466 
        = ((0x12U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_18
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_465);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_43 
        = ((0x2bU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_43
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_42);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_171 
        = ((0x2bU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_43
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_170);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_402 
        = ((0x12U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_18
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_401);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_466 
        = ((0x12U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_18
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_465);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_403 
        = ((0x13U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_19
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_402);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_467 
        = ((0x13U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_19
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_466);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_44 
        = ((0x2cU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_44
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_43);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_172 
        = ((0x2cU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_44
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_171);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_403 
        = ((0x13U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_19
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_402);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_467 
        = ((0x13U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_19
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_466);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_404 
        = ((0x14U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_20
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_403);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_468 
        = ((0x14U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_20
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_467);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_45 
        = ((0x2dU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_45
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_44);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_173 
        = ((0x2dU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_45
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_172);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_404 
        = ((0x14U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_20
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_403);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_468 
        = ((0x14U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_20
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_467);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_405 
        = ((0x15U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_21
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_404);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_469 
        = ((0x15U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_21
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_468);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_174 
        = ((0x2eU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_46
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_173);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_405 
        = ((0x15U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_21
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_404);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_469 
        = ((0x15U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_21
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_468);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_406 
        = ((0x16U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_22
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_405);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_470 
        = ((0x16U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_22
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_469);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_175 
        = ((0x2fU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_47
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_174);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_406 
        = ((0x16U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_22
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_405);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_470 
        = ((0x16U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_22
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_469);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_407 
        = ((0x17U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_23
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_406);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_471 
        = ((0x17U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_23
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_470);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_176 
        = ((0x30U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_48
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_175);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_407 
        = ((0x17U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_23
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_406);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_471 
        = ((0x17U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_23
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_470);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_408 
        = ((0x18U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_24
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_407);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_472 
        = ((0x18U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_24
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_471);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_177 
        = ((0x31U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_49
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_176);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_408 
        = ((0x18U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_24
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_407);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_472 
        = ((0x18U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_24
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_471);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_409 
        = ((0x19U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_25
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_408);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_473 
        = ((0x19U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_25
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_472);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_178 
        = ((0x32U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_50
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_177);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_409 
        = ((0x19U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_25
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_408);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_473 
        = ((0x19U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_25
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_472);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_410 
        = ((0x1aU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_26
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_409);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_474 
        = ((0x1aU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_26
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_473);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_410 
        = ((0x1aU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_26
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_409);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_474 
        = ((0x1aU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_26
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_473);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_411 
        = ((0x1bU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_27
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_410);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_475 
        = ((0x1bU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_27
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_474);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_411 
        = ((0x1bU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_27
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_410);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_475 
        = ((0x1bU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_27
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_474);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_412 
        = ((0x1cU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_28
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_411);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_476 
        = ((0x1cU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_28
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_475);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_412 
        = ((0x1cU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_28
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_411);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_476 
        = ((0x1cU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_28
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_475);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_413 
        = ((0x1dU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_29
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_412);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_477 
        = ((0x1dU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_29
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_476);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_413 
        = ((0x1dU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_29
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_412);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_477 
        = ((0x1dU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_29
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_476);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_414 
        = ((0x1eU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_30
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_413);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_478 
        = ((0x1eU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_30
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_477);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_414 
        = ((0x1eU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_30
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_413);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_478 
        = ((0x1eU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_30
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_477);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_415 
        = ((0x1fU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_31
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_414);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_479 
        = ((0x1fU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_31
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_478);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_415 
        = ((0x1fU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_31
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_414);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_479 
        = ((0x1fU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_31
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_478);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_416 
        = ((0x20U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_32
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_415);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_480 
        = ((0x20U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_32
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_479);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_416 
        = ((0x20U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_32
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_415);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_480 
        = ((0x20U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_32
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_479);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_417 
        = ((0x21U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_33
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_416);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_481 
        = ((0x21U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_33
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_480);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_417 
        = ((0x21U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_33
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_416);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_481 
        = ((0x21U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_33
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_480);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_418 
        = ((0x22U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_34
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_417);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_482 
        = ((0x22U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_34
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_481);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_418 
        = ((0x22U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_34
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_417);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_482 
        = ((0x22U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_34
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_481);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_419 
        = ((0x23U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_35
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_418);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_483 
        = ((0x23U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_35
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_482);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_419 
        = ((0x23U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_35
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_418);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_483 
        = ((0x23U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_35
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_482);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_420 
        = ((0x24U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_36
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_419);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_484 
        = ((0x24U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_36
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_483);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_420 
        = ((0x24U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_36
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_419);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_484 
        = ((0x24U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_36
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_483);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_421 
        = ((0x25U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_37
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_420);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_485 
        = ((0x25U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_37
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_484);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_421 
        = ((0x25U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_37
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_420);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_485 
        = ((0x25U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_37
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_484);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_422 
        = ((0x26U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_38
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_421);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_486 
        = ((0x26U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_38
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_485);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_422 
        = ((0x26U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_38
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_421);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_486 
        = ((0x26U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_38
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_485);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_423 
        = ((0x27U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_39
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_422);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_487 
        = ((0x27U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_39
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_486);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_423 
        = ((0x27U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_39
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_422);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_487 
        = ((0x27U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_39
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_486);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_424 
        = ((0x28U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_40
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_423);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_488 
        = ((0x28U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_40
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_487);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_424 
        = ((0x28U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs1_40
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_423);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_488 
        = ((0x28U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__tag_regs0_40
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT___GEN_487);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_425 
        = ((0x29U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_41
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_424);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_489 
        = ((0x29U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_41
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_488);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_426 
        = ((0x2aU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_42
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_425);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_490 
        = ((0x2aU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_42
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_489);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_427 
        = ((0x2bU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_43
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_426);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_491 
        = ((0x2bU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_43
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_490);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_428 
        = ((0x2cU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_44
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_427);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_492 
        = ((0x2cU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_44
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_491);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_429 
        = ((0x2dU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_45
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_428);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_493 
        = ((0x2dU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_45
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_492);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_430 
        = ((0x2eU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_46
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_429);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_494 
        = ((0x2eU == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_46
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_493);
}

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
}

VL_INLINE_OPT void Vmycpu_top_difftest_commit___combo__TOP__mycpu_top__u_riscv_cpu___commit_difftest__1(Vmycpu_top_difftest_commit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_difftest_commit___combo__TOP__mycpu_top__u_riscv_cpu___commit_difftest__1\n"); );
    // Body
    vlSelf->__PVT__pc_debug = vlSelf->__PVT__debug_pc;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immUJ 
        = VL_CONCAT_III(20,1,19, (1U & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                        VL_CONCAT_III(19,8,11, (0xffU 
                                                & VL_SEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0xcU, 8U)), 
                                      VL_CONCAT_III(11,1,10, 
                                                    (1U 
                                                     & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x14U)), 
                                                    (0x3ffU 
                                                     & VL_SEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x15U, 0xaU)))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__immU 
        = VL_CONCAT_III(32,20,12, (0xfffffU & VL_SEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0xcU, 0x14U)), 0U);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT___immSB_T_4 
        = VL_CONCAT_III(13,1,12, (1U & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x1fU)), 
                        VL_CONCAT_III(12,1,11, (1U 
                                                & VL_BITSEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 7U)), 
                                      VL_CONCAT_III(11,6,5, 
                                                    (0x3fU 
                                                     & VL_SEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 0x19U, 6U)), 
                                                    VL_CONCAT_III(5,4,1, 
                                                                  (0xfU 
                                                                   & VL_SEL_IIII(32, vlSymsp->TOP__mycpu_top__u_riscv_cpu___cu.__PVT__io1_InstrD, 8U, 4U)), 0U))));
}
