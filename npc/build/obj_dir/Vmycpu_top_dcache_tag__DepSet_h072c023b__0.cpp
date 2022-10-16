// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_dcache_tag.h"

VL_INLINE_OPT void Vmycpu_top_dcache_tag___combo__TOP__mycpu_top__data_cache__dcache_tag__0(Vmycpu_top_dcache_tag* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_tag___combo__TOP__mycpu_top__data_cache__dcache_tag__0\n"); );
    // Body
    vlSelf->__PVT___GEN_3 = ((3U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                              ? vlSelf->__PVT__tag_regs0_3
                              : vlSelf->__PVT___GEN_2);
    vlSelf->__PVT___GEN_131 = ((3U == (0x3fU & VL_SEL_IQII(64, vlSelf->__PVT__io_waddr, 7U, 6U)))
                                ? vlSelf->__PVT__tag_regs1_3
                                : vlSelf->__PVT___GEN_130);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1E_T_17 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1E_T_12)
            ? 3U : VL_EXTEND_II(2,1, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1E_T_15)));
}
