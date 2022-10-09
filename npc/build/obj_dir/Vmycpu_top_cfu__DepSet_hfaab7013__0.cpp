// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_cfu.h"

VL_INLINE_OPT void Vmycpu_top_cfu___combo__TOP__mycpu_top__u_riscv_cpu___cfu__1(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___combo__TOP__mycpu_top__u_riscv_cpu___cfu__1\n"); );
    // Body
    vlSelf->__PVT__io_Forward2E = ((0U == (IData)(vlSelf->__PVT__io_R2E))
                                    ? 0U : (IData)(vlSelf->__PVT___io_Forward2E_T_18));
    vlSelf->__PVT__io_Forward1E = ((0U == (IData)(vlSelf->__PVT__io_R1E))
                                    ? 0U : (IData)(vlSelf->__PVT___io_Forward1E_T_18));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward2E 
        = vlSelf->__PVT__io_Forward2E;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward1E 
        = vlSelf->__PVT__io_Forward1E;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD2ForWardE_p_T_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward2E))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ResultW
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_RD2E);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD1ForWardE_p_T_1 
        = ((1U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward1E))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ResultW
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_RD1E);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD2ForWardE_p_T_3 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward2E))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__resultE2M_Reg
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD2ForWardE_p_T_1);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD1ForWardE_p_T_3 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward1E))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__resultE2M_Reg
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD1ForWardE_p_T_1);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD2ForWardE_p 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward2E))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ResultM2_Reg
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD2ForWardE_p_T_3);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD1ForWardE_p 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cfu_io_Forward1E))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ResultM2_Reg
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___RD1ForWardE_p_T_3);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD2ForWardE 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Forward_Lock2E)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD2ForWardE_r
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD2ForWardE_p);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD1ForWardE 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Forward_Lock1E)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD1ForWardE_r
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD1ForWardE_p);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___addr_cal_io_d_vaddr 
        = (vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io_ImmE 
           + vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__RD1ForWardE);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___addr_cal.__PVT__io_d_vaddr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___addr_cal_io_d_vaddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___addr_cal.__PVT__io_d_paddr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___addr_cal.__PVT__io_d_vaddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___addr_cal_io_d_paddr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___addr_cal.__PVT__io_d_paddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmemreq_io_VAddrE 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___addr_cal_io_d_paddr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_VAddrE 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmemreq_io_VAddrE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_VAddrE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmemreq_io_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu___dmemreq.__PVT__io_addr;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_sram_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___dmemreq_io_addr;
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_sram_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__data_sram_addr;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_sram_addr 
        = vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_data_sram_addr;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_addr 
        = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_sram_addr;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__dcache_tag_io_raddr 
        = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_addr;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__dcache_tag_1_io_raddr 
        = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_sram_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr 
        = vlSymsp->TOP__mycpu_top__data_cache.__PVT__dcache_tag_io_raddr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr 
        = vlSymsp->TOP__mycpu_top__data_cache.__PVT__dcache_tag_1_io_raddr;
}
