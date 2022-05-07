// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_control.h for the primary calling header

#include "Vriscv_control___024root.h"
#include "Vriscv_control__Syms.h"

//==========


void Vriscv_control___024root___ctor_var_reset(Vriscv_control___024root* vlSelf);

Vriscv_control___024root::Vriscv_control___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vriscv_control___024root___ctor_var_reset(this);
}

void Vriscv_control___024root::__Vconfigure(Vriscv_control__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vriscv_control___024root::~Vriscv_control___024root() {
}

void Vriscv_control___024root___settle__TOP__2(Vriscv_control___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_control___024root___settle__TOP__2\n"); );
    // Variables
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT___GEN_13;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT___GEN_26;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT___GEN_30;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT___GEN_31;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT___GEN_109;
    QData/*63:0*/ riscv_control__DOT__exu_instance__DOT___GEN_122;
    // Body
    vlSelf->riscv_control__DOT___pc_T_5 = (4ULL + vlSelf->riscv_control__DOT__pc);
    vlSelf->io_pc = vlSelf->riscv_control__DOT__pc;
    vlSelf->io_src1 = vlSelf->riscv_control__DOT__src1;
    vlSelf->io_src2 = vlSelf->riscv_control__DOT__src2;
    vlSelf->io_inscode = vlSelf->riscv_control__DOT__inscode;
    riscv_control__DOT__exu_instance__DOT___GEN_13 
        = ((0xdU == (0x1fU & vlSelf->riscv_control__DOT__src1))
            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_13
            : ((0xcU == (0x1fU & vlSelf->riscv_control__DOT__src1))
                ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_12
                : ((0xbU == (0x1fU & vlSelf->riscv_control__DOT__src1))
                    ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_11
                    : ((0xaU == (0x1fU & vlSelf->riscv_control__DOT__src1))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_10
                        : ((9U == (0x1fU & vlSelf->riscv_control__DOT__src1))
                            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_9
                            : ((8U == (0x1fU & vlSelf->riscv_control__DOT__src1))
                                ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_8
                                : ((7U == (0x1fU & vlSelf->riscv_control__DOT__src1))
                                    ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_7
                                    : ((6U == (0x1fU 
                                               & vlSelf->riscv_control__DOT__src1))
                                        ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_6
                                        : ((5U == (0x1fU 
                                                   & vlSelf->riscv_control__DOT__src1))
                                            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->riscv_control__DOT__src1))
                                                ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->riscv_control__DOT__src1))
                                                    ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->riscv_control__DOT__src1))
                                                     ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelf->riscv_control__DOT__src1))
                                                      ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_1
                                                      : vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_0)))))))))))));
    vlSelf->riscv_control__DOT__wrap_wrap = (2U == (IData)(vlSelf->riscv_control__DOT__a));
    vlSelf->riscv_control__DOT___wrap_value_T_1 = (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->riscv_control__DOT__a)));
    vlSelf->io_dest = vlSelf->riscv_control__DOT__dest;
    vlSelf->io_instype = vlSelf->riscv_control__DOT__instype;
    vlSelf->io_trap_flag = (6U == (IData)(vlSelf->riscv_control__DOT__instype));
    riscv_control__DOT__exu_instance__DOT___GEN_109 
        = ((0xdU == (0x1fU & vlSelf->riscv_control__DOT__dest))
            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_13
            : ((0xcU == (0x1fU & vlSelf->riscv_control__DOT__dest))
                ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_12
                : ((0xbU == (0x1fU & vlSelf->riscv_control__DOT__dest))
                    ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_11
                    : ((0xaU == (0x1fU & vlSelf->riscv_control__DOT__dest))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_10
                        : ((9U == (0x1fU & vlSelf->riscv_control__DOT__dest))
                            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_9
                            : ((8U == (0x1fU & vlSelf->riscv_control__DOT__dest))
                                ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_8
                                : ((7U == (0x1fU & vlSelf->riscv_control__DOT__dest))
                                    ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_7
                                    : ((6U == (0x1fU 
                                               & vlSelf->riscv_control__DOT__dest))
                                        ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_6
                                        : ((5U == (0x1fU 
                                                   & vlSelf->riscv_control__DOT__dest))
                                            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->riscv_control__DOT__dest))
                                                ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->riscv_control__DOT__dest))
                                                    ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->riscv_control__DOT__dest))
                                                     ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelf->riscv_control__DOT__dest))
                                                      ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_1
                                                      : vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_0)))))))))))));
    vlSelf->io_riscv_instruction = vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg;
    vlSelf->riscv_control__DOT__idu_instance__DOT__type_r_test 
        = ((0x33U == (0x7fU & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)) 
           | (0x3bU == (0x7fU & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)));
    vlSelf->riscv_control__DOT__idu_instance__DOT___instype_T_5 
        = (((0x67U == (0x7fU & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)) 
            | (0x13U == (0x7fU & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)))
            ? 1U : (((3U == (0x7fU & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)) 
                     | (0x23U == (0x7fU & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)))
                     ? 2U : ((0x63U == (0x7fU & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg))
                              ? 3U : (((0x37U == (0x7fU 
                                                  & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)) 
                                       | (0x17U == 
                                          (0x7fU & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)))
                                       ? 4U : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg))
                                                ? 5U
                                                : (
                                                   (0x100073U 
                                                    == vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)
                                                    ? 6U
                                                    : 0xfU))))));
    riscv_control__DOT__exu_instance__DOT___GEN_26 
        = ((0x1aU == (0x1fU & vlSelf->riscv_control__DOT__src1))
            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_26
            : ((0x19U == (0x1fU & vlSelf->riscv_control__DOT__src1))
                ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_25
                : ((0x18U == (0x1fU & vlSelf->riscv_control__DOT__src1))
                    ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_24
                    : ((0x17U == (0x1fU & vlSelf->riscv_control__DOT__src1))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_23
                        : ((0x16U == (0x1fU & vlSelf->riscv_control__DOT__src1))
                            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_22
                            : ((0x15U == (0x1fU & vlSelf->riscv_control__DOT__src1))
                                ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_21
                                : ((0x14U == (0x1fU 
                                              & vlSelf->riscv_control__DOT__src1))
                                    ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_20
                                    : ((0x13U == (0x1fU 
                                                  & vlSelf->riscv_control__DOT__src1))
                                        ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & vlSelf->riscv_control__DOT__src1))
                                            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->riscv_control__DOT__src1))
                                                ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->riscv_control__DOT__src1))
                                                    ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->riscv_control__DOT__src1))
                                                     ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelf->riscv_control__DOT__src1))
                                                      ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_14
                                                      : riscv_control__DOT__exu_instance__DOT___GEN_13)))))))))))));
    riscv_control__DOT__exu_instance__DOT___GEN_122 
        = ((0x1aU == (0x1fU & vlSelf->riscv_control__DOT__dest))
            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_26
            : ((0x19U == (0x1fU & vlSelf->riscv_control__DOT__dest))
                ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_25
                : ((0x18U == (0x1fU & vlSelf->riscv_control__DOT__dest))
                    ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_24
                    : ((0x17U == (0x1fU & vlSelf->riscv_control__DOT__dest))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_23
                        : ((0x16U == (0x1fU & vlSelf->riscv_control__DOT__dest))
                            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_22
                            : ((0x15U == (0x1fU & vlSelf->riscv_control__DOT__dest))
                                ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_21
                                : ((0x14U == (0x1fU 
                                              & vlSelf->riscv_control__DOT__dest))
                                    ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_20
                                    : ((0x13U == (0x1fU 
                                                  & vlSelf->riscv_control__DOT__dest))
                                        ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & vlSelf->riscv_control__DOT__dest))
                                            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->riscv_control__DOT__dest))
                                                ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->riscv_control__DOT__dest))
                                                    ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->riscv_control__DOT__dest))
                                                     ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelf->riscv_control__DOT__dest))
                                                      ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_14
                                                      : riscv_control__DOT__exu_instance__DOT___GEN_109)))))))))))));
    vlSelf->riscv_control__DOT__idu_instance__DOT__instype 
        = ((IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__type_r_test)
            ? 0U : (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT___instype_T_5));
    riscv_control__DOT__exu_instance__DOT___GEN_30 
        = ((0x1eU == (0x1fU & vlSelf->riscv_control__DOT__src1))
            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_30
            : ((0x1dU == (0x1fU & vlSelf->riscv_control__DOT__src1))
                ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_29
                : ((0x1cU == (0x1fU & vlSelf->riscv_control__DOT__src1))
                    ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_28
                    : ((0x1bU == (0x1fU & vlSelf->riscv_control__DOT__src1))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_27
                        : riscv_control__DOT__exu_instance__DOT___GEN_26))));
    vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_126 
        = ((0x1eU == (0x1fU & vlSelf->riscv_control__DOT__dest))
            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_30
            : ((0x1dU == (0x1fU & vlSelf->riscv_control__DOT__dest))
                ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_29
                : ((0x1cU == (0x1fU & vlSelf->riscv_control__DOT__dest))
                    ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_28
                    : ((0x1bU == (0x1fU & vlSelf->riscv_control__DOT__dest))
                        ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_27
                        : riscv_control__DOT__exu_instance__DOT___GEN_122))));
    riscv_control__DOT__exu_instance__DOT___GEN_31 
        = ((0x1fU == (0x1fU & vlSelf->riscv_control__DOT__src1))
            ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_31
            : riscv_control__DOT__exu_instance__DOT___GEN_30);
    if ((0x1fU == (0x1fU & vlSelf->riscv_control__DOT__dest))) {
        vlSelf->io_answer = vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_31;
        vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127 
            = vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_31;
    } else {
        vlSelf->io_answer = vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_126;
        vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127 
            = vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_126;
    }
    vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20 
        = ((0x13U == (0x3ffU & vlSelf->riscv_control__DOT__inscode))
            ? (riscv_control__DOT__exu_instance__DOT___GEN_31 
               + (QData)((IData)(vlSelf->riscv_control__DOT__src2)))
            : ((0x113U == (0x3ffU & vlSelf->riscv_control__DOT__inscode))
                ? (QData)((IData)(VL_LTS_IQQ(1,64,64, 
                                             ((0x1fU 
                                               == (0x1fU 
                                                   & vlSelf->riscv_control__DOT__src1))
                                               ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_31
                                               : riscv_control__DOT__exu_instance__DOT___GEN_30), 
                                             (((QData)((IData)(
                                                               (- (IData)(
                                                                          (vlSelf->riscv_control__DOT__src2 
                                                                           >> 0x1fU))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->riscv_control__DOT__src2))))))
                : ((0x193U == (0x3ffU & vlSelf->riscv_control__DOT__inscode))
                    ? (QData)((IData)((riscv_control__DOT__exu_instance__DOT___GEN_31 
                                       < (QData)((IData)(vlSelf->riscv_control__DOT__src2)))))
                    : 0ULL)));
}

void Vriscv_control___024root___eval_initial(Vriscv_control___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_control___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void Vriscv_control___024root___eval_settle(Vriscv_control___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_control___024root___eval_settle\n"); );
    // Body
    Vriscv_control___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vriscv_control___024root___final(Vriscv_control___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_control___024root___final\n"); );
}

void Vriscv_control___024root___ctor_var_reset(Vriscv_control___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_control___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = 0;
    vlSelf->reset = 0;
    vlSelf->io_mem_instrution = 0;
    vlSelf->io_pc = 0;
    vlSelf->io_riscv_instruction = 0;
    vlSelf->io_answer = 0;
    vlSelf->io_src1 = 0;
    vlSelf->io_src2 = 0;
    vlSelf->io_dest = 0;
    vlSelf->io_inscode = 0;
    vlSelf->io_instype = 0;
    vlSelf->io_trap_flag = 0;
    vlSelf->riscv_control__DOT__pc = 0;
    vlSelf->riscv_control__DOT__src1 = 0;
    vlSelf->riscv_control__DOT__src2 = 0;
    vlSelf->riscv_control__DOT__dest = 0;
    vlSelf->riscv_control__DOT__inscode = 0;
    vlSelf->riscv_control__DOT__instype = 0;
    vlSelf->riscv_control__DOT__a = 0;
    vlSelf->riscv_control__DOT__wrap_wrap = 0;
    vlSelf->riscv_control__DOT___wrap_value_T_1 = 0;
    vlSelf->riscv_control__DOT___pc_T_5 = 0;
    vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg = 0;
    vlSelf->riscv_control__DOT__idu_instance__DOT__type_r_test = 0;
    vlSelf->riscv_control__DOT__idu_instance__DOT___instype_T_5 = 0;
    vlSelf->riscv_control__DOT__idu_instance__DOT__instype = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_0 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_1 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_2 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_3 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_4 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_5 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_6 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_7 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_8 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_9 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_10 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_11 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_12 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_13 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_14 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_15 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_16 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_17 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_18 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_19 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_20 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_21 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_22 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_23 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_24 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_25 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_26 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_27 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_28 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_29 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_30 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_31 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT___type_I_answer_T_20 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_126 = 0;
    vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_127 = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
