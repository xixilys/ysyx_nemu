// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_dcache_data.h"

VL_INLINE_OPT void Vmycpu_top_dcache_data___combo__TOP__mycpu_top__data_cache__dcache_data_11__0(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___combo__TOP__mycpu_top__data_cache__dcache_data_11__0\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_1 
        = ((1U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_1
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_0);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_129 
        = ((1U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_1
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_0);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1E_T_15 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1E) 
            == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegW)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteW));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2D_T_5 
        = (1U & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM)));
}
