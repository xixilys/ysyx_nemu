// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv_control__Syms.h"


void Vriscv_control___024root__traceChgSub0(Vriscv_control___024root* vlSelf, VerilatedVcd* tracep);

void Vriscv_control___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vriscv_control___024root* const __restrict vlSelf = static_cast<Vriscv_control___024root*>(voidSelf);
    Vriscv_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vriscv_control___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vriscv_control___024root__traceChgSub0(Vriscv_control___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg),32);
            tracep->chgIData(oldp+1,(((0U == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                       ? (0x1fU & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                   >> 0xfU))
                                       : ((1U == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                           ? (0x1fU 
                                              & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                 >> 0xfU))
                                           : ((2U == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                               ? (0x1fU 
                                                  & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                     >> 0xfU))
                                               : ((3U 
                                                   == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                      >> 0xfU))
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                                    ? 
                                                   (0xfffff000U 
                                                    & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                                     ? 
                                                    ((0x80000U 
                                                      & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                         >> 0xcU)) 
                                                     | ((0x7f800U 
                                                         & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                            >> 1U)) 
                                                        | ((0x400U 
                                                            & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                               >> 0xaU)) 
                                                           | (0x3ffU 
                                                              & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                                 >> 0x15U)))))
                                                     : 0U))))))),32);
            tracep->chgIData(oldp+2,((IData)(((0U == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                               ? (QData)((IData)(
                                                                 (0x1fU 
                                                                  & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                                     >> 0x14U))))
                                               : ((1U 
                                                   == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                                   ? 
                                                  ((vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                    >> 0x1fU)
                                                    ? 
                                                   (0xfffffffffffff000ULL 
                                                    | (QData)((IData)(
                                                                      (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                                       >> 0x14U))))
                                                    : (QData)((IData)(
                                                                      (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                                       >> 0x14U))))
                                                   : (QData)((IData)(
                                                                     ((2U 
                                                                       == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                                                       ? 
                                                                      (0x1fU 
                                                                       & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                                          >> 0x14U))
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                                                        ? 
                                                                       (0x1fU 
                                                                        & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                                           >> 0x14U))
                                                                        : 0U)))))))),32);
            tracep->chgIData(oldp+3,(((0U == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                       ? (0x1fU & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                   >> 7U))
                                       : ((1U == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                           ? (0x1fU 
                                              & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                 >> 7U))
                                           : ((2U == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                               ? ((0xfe0U 
                                                   & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                        >> 7U)))
                                               : ((3U 
                                                   == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                                   ? 
                                                  ((0x1000U 
                                                    & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                       >> 0x13U)) 
                                                   | ((0x800U 
                                                       & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                               >> 7U)))))
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                                    ? 
                                                   (0x1fU 
                                                    & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                       >> 7U))
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                                     ? 
                                                    (0x1fU 
                                                     & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                        >> 7U))
                                                     : 0U))))))),32);
            tracep->chgIData(oldp+4,(((0x1fc00U & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                   >> 0xfU)) 
                                      | ((0x380U & 
                                          (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                           >> 5U)) 
                                         | (0x7fU & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)))),32);
            tracep->chgCData(oldp+5,(((IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__type_r_test)
                                       ? 0U : (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT___instype_T_5))),4);
            tracep->chgIData(oldp+6,(vlSelf->riscv_control__DOT__src1),32);
            tracep->chgIData(oldp+7,(vlSelf->riscv_control__DOT__src2),32);
            tracep->chgIData(oldp+8,(vlSelf->riscv_control__DOT__dest),32);
            tracep->chgIData(oldp+9,(vlSelf->riscv_control__DOT__inscode),32);
            tracep->chgIData(oldp+10,(vlSelf->riscv_control__DOT__instype),32);
            tracep->chgQData(oldp+11,(((0x1fU == (0x1fU 
                                                  & vlSelf->riscv_control__DOT__dest))
                                        ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_31
                                        : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_126)),64);
            tracep->chgBit(oldp+13,((1U == (IData)(vlSelf->riscv_control__DOT__a))));
            tracep->chgQData(oldp+14,(vlSelf->riscv_control__DOT__pc),64);
            tracep->chgCData(oldp+16,(vlSelf->riscv_control__DOT__instype),4);
            tracep->chgCData(oldp+17,(vlSelf->riscv_control__DOT__a),2);
            tracep->chgBit(oldp+18,((2U == (IData)(vlSelf->riscv_control__DOT__a))));
            tracep->chgQData(oldp+19,((QData)((IData)(vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg))),64);
            tracep->chgBit(oldp+21,(vlSelf->riscv_control__DOT__idu_instance__DOT__type_r_test));
            tracep->chgBit(oldp+22,(((0x67U == (0x7fU 
                                                & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)) 
                                     | (0x13U == (0x7fU 
                                                  & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)))));
            tracep->chgBit(oldp+23,(((3U == (0x7fU 
                                             & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)) 
                                     | (0x23U == (0x7fU 
                                                  & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)))));
            tracep->chgBit(oldp+24,((0x63U == (0x7fU 
                                               & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg))));
            tracep->chgBit(oldp+25,(((0x37U == (0x7fU 
                                                & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)) 
                                     | (0x17U == (0x7fU 
                                                  & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)))));
            tracep->chgBit(oldp+26,((0x6fU == (0x7fU 
                                               & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg))));
            tracep->chgBit(oldp+27,((0x100073U == vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)));
            tracep->chgCData(oldp+28,(vlSelf->riscv_control__DOT__idu_instance__DOT__instype),4);
            tracep->chgCData(oldp+29,((0x1fU & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+30,((0x1fU & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+31,((0x1fU & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                >> 7U))),5);
            tracep->chgQData(oldp+32,(((vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                        >> 0x1fU) ? 
                                       (0xfffffffffffff000ULL 
                                        | (QData)((IData)(
                                                          (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                           >> 0x14U))))
                                        : (QData)((IData)(
                                                          (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                           >> 0x14U))))),64);
            tracep->chgSData(oldp+34,(((0xfe0U & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                  >> 0x14U)) 
                                       | (0x1fU & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                   >> 7U)))),12);
            tracep->chgSData(oldp+35,(((0x1000U & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                   >> 0x13U)) 
                                       | ((0x800U & 
                                           (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                            << 4U)) 
                                          | ((0x7e0U 
                                              & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                 >> 0x14U)) 
                                             | (0x1eU 
                                                & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                   >> 7U)))))),13);
            tracep->chgIData(oldp+36,((0xfffff000U 
                                       & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)),32);
            tracep->chgIData(oldp+37,(((0x80000U & 
                                        (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                         >> 0xcU)) 
                                       | ((0x7f800U 
                                           & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                              >> 1U)) 
                                          | ((0x400U 
                                              & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                 >> 0xaU)) 
                                             | (0x3ffU 
                                                & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                   >> 0x15U)))))),20);
            tracep->chgQData(oldp+38,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_0),64);
            tracep->chgQData(oldp+40,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_1),64);
            tracep->chgQData(oldp+42,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_2),64);
            tracep->chgQData(oldp+44,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_3),64);
            tracep->chgQData(oldp+46,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_4),64);
            tracep->chgQData(oldp+48,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_5),64);
            tracep->chgQData(oldp+50,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_6),64);
            tracep->chgQData(oldp+52,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_7),64);
            tracep->chgQData(oldp+54,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_8),64);
            tracep->chgQData(oldp+56,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_9),64);
            tracep->chgQData(oldp+58,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_10),64);
            tracep->chgQData(oldp+60,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_11),64);
            tracep->chgQData(oldp+62,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_12),64);
            tracep->chgQData(oldp+64,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_13),64);
            tracep->chgQData(oldp+66,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_14),64);
            tracep->chgQData(oldp+68,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_15),64);
            tracep->chgQData(oldp+70,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_16),64);
            tracep->chgQData(oldp+72,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_17),64);
            tracep->chgQData(oldp+74,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_18),64);
            tracep->chgQData(oldp+76,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_19),64);
            tracep->chgQData(oldp+78,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_20),64);
            tracep->chgQData(oldp+80,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_21),64);
            tracep->chgQData(oldp+82,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_22),64);
            tracep->chgQData(oldp+84,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_23),64);
            tracep->chgQData(oldp+86,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_24),64);
            tracep->chgQData(oldp+88,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_25),64);
            tracep->chgQData(oldp+90,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_26),64);
            tracep->chgQData(oldp+92,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_27),64);
            tracep->chgQData(oldp+94,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_28),64);
            tracep->chgQData(oldp+96,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_29),64);
            tracep->chgQData(oldp+98,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_30),64);
            tracep->chgQData(oldp+100,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_31),64);
        }
        tracep->chgBit(oldp+102,(vlSelf->clock));
        tracep->chgBit(oldp+103,(vlSelf->reset));
        tracep->chgIData(oldp+104,(vlSelf->io_mem_instrution),32);
        tracep->chgQData(oldp+105,(vlSelf->io_pc),64);
        tracep->chgIData(oldp+107,(vlSelf->io_riscv_instruction),32);
        tracep->chgQData(oldp+108,(vlSelf->io_answer),64);
        tracep->chgIData(oldp+110,(vlSelf->io_src1),32);
        tracep->chgIData(oldp+111,(vlSelf->io_src2),32);
        tracep->chgIData(oldp+112,(vlSelf->io_dest),32);
        tracep->chgIData(oldp+113,(vlSelf->io_inscode),32);
        tracep->chgCData(oldp+114,(vlSelf->io_instype),4);
        tracep->chgBit(oldp+115,(vlSelf->io_trap_flag));
    }
}

void Vriscv_control___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vriscv_control___024root* const __restrict vlSelf = static_cast<Vriscv_control___024root*>(voidSelf);
    Vriscv_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
