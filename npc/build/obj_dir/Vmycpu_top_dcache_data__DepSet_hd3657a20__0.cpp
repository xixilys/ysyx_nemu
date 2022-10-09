// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_dcache_data.h"

VL_INLINE_OPT void Vmycpu_top_dcache_data___combo__TOP__mycpu_top__data_cache__dcache_data_3__0(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___combo__TOP__mycpu_top__data_cache__dcache_data_3__0\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2E_T_15 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R2E) 
            == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegW)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteW));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1E_T_15 
        = (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1E) 
            == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegW)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteW));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2D_T_5 
        = (1U & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2D_T_11 
        = (1U & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM2)));
}
