// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_data_ram_one_port_with_latency_16.h"
#include "Vmycpu_top_dcache_data.h"

VL_INLINE_OPT void Vmycpu_top_dcache_data___combo__TOP__mycpu_top__data_cache__dcache_data__0(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___combo__TOP__mycpu_top__data_cache__dcache_data__0\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0_io_addra = (0x7fU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__io_addr, 6U, 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__dcache_data_ram_0_io_addra 
        = (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__io_addr, 6U, 7U));
    vlSelf->__PVT__dcache_data_ram_0->__PVT__io_addra 
        = vlSelf->__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__dcache_data_ram_0_io_addra;
}

VL_INLINE_OPT void Vmycpu_top_dcache_data___combo__TOP__mycpu_top__data_cache__dcache_data_11__1(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___combo__TOP__mycpu_top__data_cache__dcache_data_11__1\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0->__PVT__io_addra 
        = vlSelf->__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__io_addra 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__dcache_data_ram_0_io_addra;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_2 
        = ((2U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs0_2
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_1);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_130 
        = ((2U == (0x3fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr, 7U, 6U)))
            ? vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__tag_regs1_2
            : vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT___GEN_129);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1E_T_6 
        = ((((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1E) 
             == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM)) 
            & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2D_T_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward1E_T_12 
        = ((((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1E) 
             == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM2)) 
            & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_RegWriteM2)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2D_T_11));
}

VL_INLINE_OPT void Vmycpu_top_dcache_data___combo__TOP__mycpu_top__data_cache__dcache_data_12__0(Vmycpu_top_dcache_data* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dcache_data___combo__TOP__mycpu_top__data_cache__dcache_data_12__0\n"); );
    // Body
    vlSelf->__PVT__dcache_data_ram_0->__PVT__io_dina 
        = vlSelf->__PVT__dcache_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__dcache_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__dcache_data_ram_0_io_dina;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_dina 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__dcache_data_ram_0_io_dina;
    vlSelf->__PVT__dcache_data_ram_0->__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__dcache_data_ram_0->__PVT__io_dina, 0U, 8U));
    vlSelf->__PVT__dcache_data_ram_0->__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__dcache_data_ram_0->__PVT__io_dina, 8U, 8U));
    vlSelf->__PVT__dcache_data_ram_0->__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__dcache_data_ram_0->__PVT__io_dina, 0x10U, 8U));
    vlSelf->__PVT__dcache_data_ram_0->__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__dcache_data_ram_0->__PVT__io_dina, 0x18U, 8U));
    vlSelf->__PVT__dcache_data_ram_0->__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__dcache_data_ram_0->__PVT__io_dina, 0x20U, 8U));
    vlSelf->__PVT__dcache_data_ram_0->__PVT__Look_up_table_read_first___05F5_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__dcache_data_ram_0->__PVT__io_dina, 0x28U, 8U));
    vlSelf->__PVT__dcache_data_ram_0->__PVT__Look_up_table_read_first___05F6_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__dcache_data_ram_0->__PVT__io_dina, 0x30U, 8U));
    vlSelf->__PVT__dcache_data_ram_0->__PVT__Look_up_table_read_first___05F7_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSelf->__PVT__dcache_data_ram_0->__PVT__io_dina, 0x38U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_dina, 0U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_dina, 8U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_dina, 0x10U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_dina, 0x18U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_dina, 0x20U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_dina, 0x28U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_dina, 0x30U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__io_dina, 0x38U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_dina, 0U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_dina, 8U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_dina, 0x10U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_dina, 0x18U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_dina, 0x20U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_dina, 0x28U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_dina, 0x30U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__io_dina, 0x38U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_dina, 0U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_dina, 8U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_dina, 0x10U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_dina, 0x18U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_dina, 0x20U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_dina, 0x28U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_dina, 0x30U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_in 
        = (0xffU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__io_dina, 0x38U, 8U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_132 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_131));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_132 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT___GEN_131));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_132 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT___GEN_131));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_132 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT___GEN_131));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_132 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT___GEN_131));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_132 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT___GEN_131));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_132 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_aw_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT___GEN_131));
}
