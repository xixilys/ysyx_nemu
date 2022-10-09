// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_regfile.h"

VL_INLINE_OPT void Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__0(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__0\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_A3))
                              ? vlSelf->__PVT__regs_1
                              : vlSelf->__PVT__regs_0);
    vlSelf->__PVT___io_RD1_T_3 = (0U != (IData)(vlSelf->__PVT__io_A1));
    vlSelf->__PVT___GEN_97 = ((1U == (IData)(vlSelf->__PVT__io_A2))
                               ? vlSelf->__PVT__regs_1
                               : vlSelf->__PVT__regs_0);
    vlSelf->__PVT___GEN_65 = ((1U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_1
                               : vlSelf->__PVT__regs_0);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_257 
        = ((1U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_asid_regs_1)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_asid_regs_0));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_1 
        = ((1U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_1
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_0);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_257 
        = ((1U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_1)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_0));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_4_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_20 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_4_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_36 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_4_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_35));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_52 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_4_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_51));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_68 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_4_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_67));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_84 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_4_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_83));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_100 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_4_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_99));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_116 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_4_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_115));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_132 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_4_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_131));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_148 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_4_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_147));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_164 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_4_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_163);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_180 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_4_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_179));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_4_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_20 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_4_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_36 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_4_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_35));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_52 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_4_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_51));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_68 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_4_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_67));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_84 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_4_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_83));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_100 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_4_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_99));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_116 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_4_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_115));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_132 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_4_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_131));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_148 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_4_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_147));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_164 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_4_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_163);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_180 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_4_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_179));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_68 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_4_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_67));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_84 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_4_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_83));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_100 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_4_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_99));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_116 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_4_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_115));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_132 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_4_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_131));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_148 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_4_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_147));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_164 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_4_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_163);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_180 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_4_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_179));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_196 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_4_inst
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_195);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___br_Stall_T_18 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM2) 
           & (((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM2) 
               == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R2D)) 
              | ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM2) 
                 == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1D))));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___br_Stall_T_16 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_WriteRegM2) 
           == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_R1D));
}

VL_INLINE_OPT void Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__1(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__1\n"); );
    // Body
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_A3))
                              ? vlSelf->__PVT__regs_7
                              : vlSelf->__PVT___GEN_6);
    vlSelf->__PVT___GEN_103 = ((7U == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_7
                                : vlSelf->__PVT___GEN_102);
    vlSelf->__PVT___GEN_71 = ((7U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_7
                               : vlSelf->__PVT___GEN_70);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_263 
        = ((7U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_asid_regs_7)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_262));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_7 
        = ((7U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_7
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_6);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_263 
        = ((7U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_7)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_262));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_10 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_10_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_9));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_26 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_10_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_42 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_10_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_41));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_58 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_10_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_57));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_74 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_10_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_73));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_90 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_10_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_89));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_106 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_10_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_105));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_122 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_10_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_138 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_10_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_137));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_154 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_10_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_153));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_170 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_10_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_169);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_186 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_10_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_185));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_10 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_10_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_9));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_26 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_10_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_42 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_10_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_41));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_58 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_10_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_57));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_74 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_10_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_73));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_90 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_10_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_89));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_106 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_10_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_105));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_122 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_10_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_138 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_10_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_137));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_154 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_10_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_153));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_170 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_10_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_169);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_186 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_10_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_185));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_10 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_10_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_9));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_26 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_10_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_42 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_10_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_41));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_58 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_10_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_57));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_74 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_10_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_73));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_90 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_10_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_89));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_106 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_10_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_105));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_122 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_10_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_121));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_138 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_10_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_137));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_154 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_10_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_153));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_170 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_10_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_169);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_186 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_10_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_185));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_218 
        = ((0xaU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_10_pc
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_217);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_1));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2 
        = ((2U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_2)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_1));
}

VL_INLINE_OPT void Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__2(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__2\n"); );
    // Body
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_A3))
                              ? vlSelf->__PVT__regs_8
                              : vlSelf->__PVT___GEN_7);
    vlSelf->__PVT___GEN_104 = ((8U == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_8
                                : vlSelf->__PVT___GEN_103);
    vlSelf->__PVT___GEN_72 = ((8U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_8
                               : vlSelf->__PVT___GEN_71);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_264 
        = ((8U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_asid_regs_8)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_263));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_8 
        = ((8U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_8
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_7);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_264 
        = ((8U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_8)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_263));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_11_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_27 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_11_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_43 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_11_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_42));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_59 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_11_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_58));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_75 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_11_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_74));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_91 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_11_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_90));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_107 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_11_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_106));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_123 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_11_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_139 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_11_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_138));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_155 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_11_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_154));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_171 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_11_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_170);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_187 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_11_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_186));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_11_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_27 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_11_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_43 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_11_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_42));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_59 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_11_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_58));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_75 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_11_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_74));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_91 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_11_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_90));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_107 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_11_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_106));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_123 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_11_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_139 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_11_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_138));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_155 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_11_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_154));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_171 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_11_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_170);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_187 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_11_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_186));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_11_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_27 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_11_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_26));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_43 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_11_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_42));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_59 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_11_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_58));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_75 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_11_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_74));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_91 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_11_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_90));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_107 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_11_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_106));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_123 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_11_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_122));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_139 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_11_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_138));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_155 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_11_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_154));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_171 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_11_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_170);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_187 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_11_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_186));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_219 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_11_pc
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_218);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3 
        = ((3U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_3)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_2));
}

VL_INLINE_OPT void Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__3(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__3\n"); );
    // Body
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_A3))
                              ? vlSelf->__PVT__regs_9
                              : vlSelf->__PVT___GEN_8);
    vlSelf->__PVT___GEN_105 = ((9U == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_9
                                : vlSelf->__PVT___GEN_104);
    vlSelf->__PVT___GEN_73 = ((9U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_9
                               : vlSelf->__PVT___GEN_72);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_265 
        = ((9U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_asid_regs_9)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_264));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_9 
        = ((9U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_9
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_8);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_265 
        = ((9U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_9)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_264));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_12_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_28 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_12_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_44 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_12_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_43));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_60 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_12_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_59));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_76 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_12_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_75));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_92 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_12_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_91));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_108 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_12_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_107));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_124 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_12_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_123));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_140 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_12_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_139));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_156 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_12_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_155));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_172 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_12_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_171);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_188 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_12_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_187));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_76 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_12_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_75));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_92 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_12_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_91));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_108 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_12_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_107));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_124 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_12_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_123));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_140 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_12_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_139));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_156 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_12_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_155));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_172 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_12_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_171);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_188 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_12_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_187));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_12_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_28 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_12_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_27));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_44 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_12_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_43));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_60 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_12_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_59));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_76 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_12_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_75));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_92 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_12_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_91));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_108 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_12_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_107));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_124 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_12_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_123));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_140 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_12_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_139));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_156 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_12_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_155));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_172 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_12_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_171);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_188 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_12_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_187));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_220 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_12_pc
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_219);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4 
        = ((4U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_4)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_3));
}

VL_INLINE_OPT void Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__4(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__4\n"); );
    // Body
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_10
                               : vlSelf->__PVT___GEN_9);
    vlSelf->__PVT___GEN_106 = ((0xaU == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_10
                                : vlSelf->__PVT___GEN_105);
    vlSelf->__PVT___GEN_74 = ((0xaU == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_10
                               : vlSelf->__PVT___GEN_73);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_266 
        = ((0xaU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_asid_regs_10)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_265));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_10 
        = ((0xaU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_10
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_9);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_266 
        = ((0xaU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_10)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_265));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_13_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_29 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_13_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_28));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_45 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_13_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_44));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_61 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_13_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_60));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_77 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_13_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_76));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_93 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_13_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_92));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_109 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_13_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_108));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_125 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_13_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_141 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_13_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_140));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_157 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_13_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_156));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_173 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_13_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_172);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_189 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_13_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_188));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_77 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_13_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_76));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_93 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_13_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_92));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_109 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_13_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_108));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_125 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_13_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_141 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_13_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_140));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_157 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_13_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_156));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_173 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_13_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_172);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_189 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_13_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_188));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_13_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_29 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_13_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_28));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_45 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_13_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_44));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_61 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_13_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_60));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_77 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_13_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_76));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_93 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_13_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_92));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_109 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_13_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_108));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_125 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_13_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_124));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_141 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_13_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_140));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_157 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_13_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_156));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_173 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_13_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_172);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_189 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_13_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_188));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_221 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_13_pc
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_220);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5 
        = ((5U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_5)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_4));
}

VL_INLINE_OPT void Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__5(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__5\n"); );
    // Body
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_11
                               : vlSelf->__PVT___GEN_10);
    vlSelf->__PVT___GEN_107 = ((0xbU == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_11
                                : vlSelf->__PVT___GEN_106);
    vlSelf->__PVT___GEN_75 = ((0xbU == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_11
                               : vlSelf->__PVT___GEN_74);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_267 
        = ((0xbU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_asid_regs_11)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_266));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_11 
        = ((0xbU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_11
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_10);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_267 
        = ((0xbU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_11)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_266));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_14_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_30 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_14_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_29));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_46 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_14_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_45));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_62 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_14_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_61));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_78 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_14_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_77));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_94 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_14_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_93));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_110 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_14_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_109));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_126 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_14_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_142 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_14_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_141));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_158 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_14_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_157));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_174 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_14_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_173);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_190 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_14_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_189));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_78 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_14_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_77));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_94 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_14_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_93));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_110 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_14_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_109));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_126 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_14_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_142 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_14_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_141));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_158 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_14_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_157));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_174 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_14_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_173);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_190 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_14_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_189));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_14_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_30 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_14_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_29));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_46 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_14_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_45));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_62 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_14_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_61));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_78 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_14_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_77));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_94 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_14_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_93));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_110 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_14_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_109));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_126 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_14_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_125));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_142 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_14_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_141));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_158 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_14_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_157));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_174 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_14_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_173);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_190 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_14_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_189));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_222 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_14_pc
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_221);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6 
        = ((6U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_6)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_5));
}

VL_INLINE_OPT void Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__6(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__6\n"); );
    // Body
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_12
                               : vlSelf->__PVT___GEN_11);
    vlSelf->__PVT___GEN_108 = ((0xcU == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_12
                                : vlSelf->__PVT___GEN_107);
    vlSelf->__PVT___GEN_76 = ((0xcU == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_12
                               : vlSelf->__PVT___GEN_75);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_268 
        = ((0xcU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_asid_regs_12)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_267));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_12 
        = ((0xcU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_12
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_11);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_268 
        = ((0xcU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_12)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_267));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_out_pre_decoder_branchD_flag 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_15_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_78));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_out_pre_decoder_jump 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_15_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_62));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_out_pre_decoder_branchdata 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_15_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_46));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_out_pre_decoder_jr 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_15_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_out_true_branch_state 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_15_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_out_pre_pc_target 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_15_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_174);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_out_pre_lookup_data 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_15_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_158));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_out_pre_hashcode 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_15_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_142));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_out_pre_pht 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_15_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_out_pre_bht 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_15_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_110));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_out_pre_lookup_value 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_15_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_94));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_out_exception_type 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__btb_15_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT___GEN_190));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_out_pre_decoder_branchD_flag 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_15_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_78));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_out_pre_pc_target 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_15_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_174);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_out_pre_lookup_data 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_15_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_158));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_out_pre_hashcode 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_15_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_142));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_out_pre_pht 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_15_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_out_pre_bht 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_15_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_110));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_out_pre_lookup_value 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_15_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_94));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_out_exception_type 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__btb_15_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT___GEN_190));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_out_pre_decoder_branchD_flag 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_15_pre_decoder_branchD_flag)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_78));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_out_pre_decoder_jump 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_15_pre_decoder_jump)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_62));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_out_pre_decoder_branchdata 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_15_pre_decoder_branchdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_46));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_out_pre_decoder_jr 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_15_pre_decoder_jr)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_30));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_out_true_branch_state 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_15_true_branch_state)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_out_pre_pc_target 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_15_pre_pc_target
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_174);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_out_pre_lookup_data 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_15_pre_lookup_data)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_158));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_out_pre_hashcode 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_15_pre_hashcode)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_142));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_out_pre_pht 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_15_pre_pht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_126));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_out_pre_bht 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_15_pre_bht)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_110));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_out_pre_lookup_value 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_15_pre_lookup_value)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_94));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_out_exception_type 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_15_exception_type)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_190));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_out_pc 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_ar_addr))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__btb_15_pc
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT___GEN_222);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7 
        = ((7U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_7)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_6));
}

VL_INLINE_OPT void Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__7(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__7\n"); );
    // Body
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_13
                               : vlSelf->__PVT___GEN_12);
    vlSelf->__PVT___GEN_109 = ((0xdU == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_13
                                : vlSelf->__PVT___GEN_108);
    vlSelf->__PVT___GEN_77 = ((0xdU == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_13
                               : vlSelf->__PVT___GEN_76);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_269 
        = ((0xdU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_asid_regs_13)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_268));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_13 
        = ((0xdU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_13
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_12);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_269 
        = ((0xdU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_13)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_268));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_8 
        = ((8U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_8)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_7));
}

VL_INLINE_OPT void Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__8(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__8\n"); );
    // Body
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_16
                               : vlSelf->__PVT___GEN_15);
    vlSelf->__PVT___GEN_112 = ((0x10U == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_16
                                : vlSelf->__PVT___GEN_111);
    vlSelf->__PVT___GEN_80 = ((0x10U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_16
                               : vlSelf->__PVT___GEN_79);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_272 
        = ((0x10U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_asid_regs_16)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_271));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_16 
        = ((0x10U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_16
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_15);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_272 
        = ((0x10U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_16)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_271));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11 
        = ((0xbU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_11)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_10));
}

VL_INLINE_OPT void Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__9(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__9\n"); );
    // Body
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_17
                               : vlSelf->__PVT___GEN_16);
    vlSelf->__PVT___GEN_113 = ((0x11U == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_17
                                : vlSelf->__PVT___GEN_112);
    vlSelf->__PVT___GEN_81 = ((0x11U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_17
                               : vlSelf->__PVT___GEN_80);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_273 
        = ((0x11U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_asid_regs_17)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_272));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_17 
        = ((0x11U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_17
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_16);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_273 
        = ((0x11U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_17)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_272));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12 
        = ((0xcU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_12)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_11));
}

VL_INLINE_OPT void Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__10(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__10\n"); );
    // Body
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_18
                               : vlSelf->__PVT___GEN_17);
    vlSelf->__PVT___GEN_114 = ((0x12U == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_18
                                : vlSelf->__PVT___GEN_113);
    vlSelf->__PVT___GEN_82 = ((0x12U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_18
                               : vlSelf->__PVT___GEN_81);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_274 
        = ((0x12U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_asid_regs_18)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_273));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_18 
        = ((0x12U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_18
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_17);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_274 
        = ((0x12U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_18)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_273));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13 
        = ((0xdU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_13)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_12));
}

VL_INLINE_OPT void Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__11(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__11\n"); );
    // Body
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_19
                               : vlSelf->__PVT___GEN_18);
    vlSelf->__PVT___GEN_115 = ((0x13U == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_19
                                : vlSelf->__PVT___GEN_114);
    vlSelf->__PVT___GEN_83 = ((0x13U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_19
                               : vlSelf->__PVT___GEN_82);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_275 
        = ((0x13U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_asid_regs_19)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_274));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_19 
        = ((0x13U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_19
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_18);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_275 
        = ((0x13U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_19)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_274));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14 
        = ((0xeU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_14)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_13));
}

VL_INLINE_OPT void Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__12(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__12\n"); );
    // Body
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_20
                               : vlSelf->__PVT___GEN_19);
    vlSelf->__PVT___GEN_116 = ((0x14U == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_20
                                : vlSelf->__PVT___GEN_115);
    vlSelf->__PVT___GEN_84 = ((0x14U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_20
                               : vlSelf->__PVT___GEN_83);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_276 
        = ((0x14U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_asid_regs_20)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_275));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_20 
        = ((0x14U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_20
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_19);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_276 
        = ((0x14U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_20)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_275));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_15)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_14));
}

VL_INLINE_OPT void Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__13(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__13\n"); );
    // Body
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_21
                               : vlSelf->__PVT___GEN_20);
    vlSelf->__PVT___GEN_117 = ((0x15U == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_21
                                : vlSelf->__PVT___GEN_116);
    vlSelf->__PVT___GEN_85 = ((0x15U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_21
                               : vlSelf->__PVT___GEN_84);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_277 
        = ((0x15U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_asid_regs_21)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_276));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_21 
        = ((0x15U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_21
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_20);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_277 
        = ((0x15U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_21)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_276));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16 
        = ((0x10U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_16)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_15));
}

VL_INLINE_OPT void Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__14(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__14\n"); );
    // Body
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_22
                               : vlSelf->__PVT___GEN_21);
    vlSelf->__PVT___GEN_118 = ((0x16U == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_22
                                : vlSelf->__PVT___GEN_117);
    vlSelf->__PVT___GEN_86 = ((0x16U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_22
                               : vlSelf->__PVT___GEN_85);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_278 
        = ((0x16U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_asid_regs_22)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_277));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_22 
        = ((0x16U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_22
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_21);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_278 
        = ((0x16U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_22)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_277));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17 
        = ((0x11U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_17)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_16));
}

VL_INLINE_OPT void Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__15(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__15\n"); );
    // Body
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_23
                               : vlSelf->__PVT___GEN_22);
    vlSelf->__PVT___GEN_119 = ((0x17U == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_23
                                : vlSelf->__PVT___GEN_118);
    vlSelf->__PVT___GEN_87 = ((0x17U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_23
                               : vlSelf->__PVT___GEN_86);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_279 
        = ((0x17U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_asid_regs_23)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_278));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_23 
        = ((0x17U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_23
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_22);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_279 
        = ((0x17U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_23)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_278));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18 
        = ((0x12U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_18)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_17));
}

VL_INLINE_OPT void Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__16(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__16\n"); );
    // Body
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_24
                               : vlSelf->__PVT___GEN_23);
    vlSelf->__PVT___GEN_120 = ((0x18U == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_24
                                : vlSelf->__PVT___GEN_119);
    vlSelf->__PVT___GEN_88 = ((0x18U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_24
                               : vlSelf->__PVT___GEN_87);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_280 
        = ((0x18U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_asid_regs_24)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_279));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_24 
        = ((0x18U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_24
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_23);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_280 
        = ((0x18U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_24)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_279));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19 
        = ((0x13U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_19)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_18));
}

VL_INLINE_OPT void Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__17(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__17\n"); );
    // Body
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_25
                               : vlSelf->__PVT___GEN_24);
    vlSelf->__PVT___GEN_121 = ((0x19U == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_25
                                : vlSelf->__PVT___GEN_120);
    vlSelf->__PVT___GEN_89 = ((0x19U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_25
                               : vlSelf->__PVT___GEN_88);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_281 
        = ((0x19U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_asid_regs_25)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_280));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_25 
        = ((0x19U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_25
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_24);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_281 
        = ((0x19U == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_25)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_280));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20 
        = ((0x14U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_20)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_19));
}

VL_INLINE_OPT void Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__18(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__18\n"); );
    // Body
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_26
                               : vlSelf->__PVT___GEN_25);
    vlSelf->__PVT___GEN_122 = ((0x1aU == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_26
                                : vlSelf->__PVT___GEN_121);
    vlSelf->__PVT___GEN_90 = ((0x1aU == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_26
                               : vlSelf->__PVT___GEN_89);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_282 
        = ((0x1aU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_asid_regs_26)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_281));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_26 
        = ((0x1aU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_26
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_25);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_282 
        = ((0x1aU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_26)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_281));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21 
        = ((0x15U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_21)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_20));
}

VL_INLINE_OPT void Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__19(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__19\n"); );
    // Body
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_27
                               : vlSelf->__PVT___GEN_26);
    vlSelf->__PVT___GEN_123 = ((0x1bU == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_27
                                : vlSelf->__PVT___GEN_122);
    vlSelf->__PVT___GEN_91 = ((0x1bU == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_27
                               : vlSelf->__PVT___GEN_90);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_283 
        = ((0x1bU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_asid_regs_27)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_282));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_27 
        = ((0x1bU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_27
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_26);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_283 
        = ((0x1bU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_27)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_282));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22 
        = ((0x16U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_22)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_21));
}

VL_INLINE_OPT void Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__20(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__20\n"); );
    // Body
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_28
                               : vlSelf->__PVT___GEN_27);
    vlSelf->__PVT___GEN_124 = ((0x1cU == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_28
                                : vlSelf->__PVT___GEN_123);
    vlSelf->__PVT___GEN_92 = ((0x1cU == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_28
                               : vlSelf->__PVT___GEN_91);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_284 
        = ((0x1cU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_asid_regs_28)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_283));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_28 
        = ((0x1cU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_28
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_27);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_284 
        = ((0x1cU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_28)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_283));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23 
        = ((0x17U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_23)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_22));
}

VL_INLINE_OPT void Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__21(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__21\n"); );
    // Body
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_29
                               : vlSelf->__PVT___GEN_28);
    vlSelf->__PVT___GEN_125 = ((0x1dU == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_29
                                : vlSelf->__PVT___GEN_124);
    vlSelf->__PVT___GEN_93 = ((0x1dU == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_29
                               : vlSelf->__PVT___GEN_92);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_285 
        = ((0x1dU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_asid_regs_29)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_284));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_29 
        = ((0x1dU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_29
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_28);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_285 
        = ((0x1dU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_29)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_284));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24 
        = ((0x18U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_24)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_23));
}

VL_INLINE_OPT void Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__22(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__22\n"); );
    // Body
    vlSelf->__PVT___GEN_126 = ((0x1eU == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_30
                                : vlSelf->__PVT___GEN_125);
    vlSelf->__PVT___GEN_94 = ((0x1eU == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_30
                               : vlSelf->__PVT___GEN_93);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_286 
        = ((0x1eU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_asid_regs_30)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_285));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_30 
        = ((0x1eU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_30
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_29);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_286 
        = ((0x1eU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_30)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_285));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25 
        = ((0x19U == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_25)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_24));
}

VL_INLINE_OPT void Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__23(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___combo__TOP__mycpu_top__u_riscv_cpu___regfile__23\n"); );
    // Body
    vlSelf->__PVT___GEN_127 = ((0x1fU == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_31
                                : vlSelf->__PVT___GEN_126);
    vlSelf->__PVT___GEN_95 = ((0x1fU == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_31
                               : vlSelf->__PVT___GEN_94);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_287 
        = ((0x1fU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_asid_regs_31)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_286));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_31 
        = ((0x1fU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_addr, 5U, 7U)))
            ? vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__tag_regs_31
            : vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT___GEN_30);
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_287 
        = ((0x1fU == (0x7fU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_addr, 5U, 7U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__tag_asid_regs_31)
            : (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT___GEN_286));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_26 
        = ((0x1aU == (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__io_ar_addr))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT__btb_26)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__Look_up_table_read_first_.__PVT___GEN_25));
}
