// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv_control__Syms.h"


void Vriscv_control___024root__traceInitSub0(Vriscv_control___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vriscv_control___024root__traceInitTop(Vriscv_control___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vriscv_control___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vriscv_control___024root__traceInitSub0(Vriscv_control___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+103,"clock", false,-1);
        tracep->declBit(c+104,"reset", false,-1);
        tracep->declBus(c+105,"io_mem_instrution", false,-1, 31,0);
        tracep->declQuad(c+106,"io_pc", false,-1, 63,0);
        tracep->declBus(c+108,"io_riscv_instruction", false,-1, 31,0);
        tracep->declQuad(c+109,"io_answer", false,-1, 63,0);
        tracep->declBus(c+111,"io_src1", false,-1, 31,0);
        tracep->declBus(c+112,"io_src2", false,-1, 31,0);
        tracep->declBus(c+113,"io_dest", false,-1, 31,0);
        tracep->declBus(c+114,"io_inscode", false,-1, 31,0);
        tracep->declBus(c+115,"io_instype", false,-1, 3,0);
        tracep->declBit(c+116,"io_trap_flag", false,-1);
        tracep->declBit(c+103,"riscv_control clock", false,-1);
        tracep->declBit(c+104,"riscv_control reset", false,-1);
        tracep->declBus(c+105,"riscv_control io_mem_instrution", false,-1, 31,0);
        tracep->declQuad(c+106,"riscv_control io_pc", false,-1, 63,0);
        tracep->declBus(c+108,"riscv_control io_riscv_instruction", false,-1, 31,0);
        tracep->declQuad(c+109,"riscv_control io_answer", false,-1, 63,0);
        tracep->declBus(c+111,"riscv_control io_src1", false,-1, 31,0);
        tracep->declBus(c+112,"riscv_control io_src2", false,-1, 31,0);
        tracep->declBus(c+113,"riscv_control io_dest", false,-1, 31,0);
        tracep->declBus(c+114,"riscv_control io_inscode", false,-1, 31,0);
        tracep->declBus(c+115,"riscv_control io_instype", false,-1, 3,0);
        tracep->declBit(c+116,"riscv_control io_trap_flag", false,-1);
        tracep->declBit(c+103,"riscv_control ifu_instance_clock", false,-1);
        tracep->declBit(c+104,"riscv_control ifu_instance_reset", false,-1);
        tracep->declBus(c+105,"riscv_control ifu_instance_io_mem_instrution", false,-1, 31,0);
        tracep->declBus(c+1,"riscv_control ifu_instance_io_ifu_instruction", false,-1, 31,0);
        tracep->declBus(c+1,"riscv_control idu_instance_io_idu_instruction", false,-1, 31,0);
        tracep->declBus(c+2,"riscv_control idu_instance_io_idu_src1", false,-1, 31,0);
        tracep->declBus(c+3,"riscv_control idu_instance_io_idu_src2", false,-1, 31,0);
        tracep->declBus(c+4,"riscv_control idu_instance_io_idu_dest", false,-1, 31,0);
        tracep->declBus(c+5,"riscv_control idu_instance_io_idu_inscode", false,-1, 31,0);
        tracep->declBus(c+6,"riscv_control idu_instance_io_idu_instype", false,-1, 3,0);
        tracep->declBit(c+103,"riscv_control exu_instance_clock", false,-1);
        tracep->declBus(c+7,"riscv_control exu_instance_io_exu_src1", false,-1, 31,0);
        tracep->declBus(c+8,"riscv_control exu_instance_io_exu_src2", false,-1, 31,0);
        tracep->declBus(c+9,"riscv_control exu_instance_io_exu_dest", false,-1, 31,0);
        tracep->declBus(c+10,"riscv_control exu_instance_io_exu_inscode", false,-1, 31,0);
        tracep->declBus(c+11,"riscv_control exu_instance_io_exu_instype", false,-1, 31,0);
        tracep->declQuad(c+12,"riscv_control exu_instance_io_exu_answer", false,-1, 63,0);
        tracep->declBit(c+14,"riscv_control exu_instance_io_exu_enable", false,-1);
        tracep->declQuad(c+15,"riscv_control pc", false,-1, 63,0);
        tracep->declBus(c+7,"riscv_control src1", false,-1, 31,0);
        tracep->declBus(c+8,"riscv_control src2", false,-1, 31,0);
        tracep->declBus(c+9,"riscv_control dest", false,-1, 31,0);
        tracep->declBus(c+10,"riscv_control inscode", false,-1, 31,0);
        tracep->declBus(c+17,"riscv_control instype", false,-1, 3,0);
        tracep->declBus(c+18,"riscv_control a", false,-1, 1,0);
        tracep->declBit(c+19,"riscv_control wrap_wrap", false,-1);
        tracep->declQuad(c+20,"riscv_control riscv_ins", false,-1, 63,0);
        tracep->declBit(c+103,"riscv_control ifu_instance clock", false,-1);
        tracep->declBit(c+104,"riscv_control ifu_instance reset", false,-1);
        tracep->declBus(c+105,"riscv_control ifu_instance io_mem_instrution", false,-1, 31,0);
        tracep->declBus(c+1,"riscv_control ifu_instance io_ifu_instruction", false,-1, 31,0);
        tracep->declBus(c+1,"riscv_control ifu_instance instruction_reg", false,-1, 31,0);
        tracep->declBus(c+1,"riscv_control idu_instance io_idu_instruction", false,-1, 31,0);
        tracep->declBus(c+2,"riscv_control idu_instance io_idu_src1", false,-1, 31,0);
        tracep->declBus(c+3,"riscv_control idu_instance io_idu_src2", false,-1, 31,0);
        tracep->declBus(c+4,"riscv_control idu_instance io_idu_dest", false,-1, 31,0);
        tracep->declBus(c+5,"riscv_control idu_instance io_idu_inscode", false,-1, 31,0);
        tracep->declBus(c+6,"riscv_control idu_instance io_idu_instype", false,-1, 3,0);
        tracep->declBit(c+22,"riscv_control idu_instance type_r_test", false,-1);
        tracep->declBit(c+23,"riscv_control idu_instance type_I_test", false,-1);
        tracep->declBit(c+24,"riscv_control idu_instance type_S_test", false,-1);
        tracep->declBit(c+25,"riscv_control idu_instance type_SB_test", false,-1);
        tracep->declBit(c+26,"riscv_control idu_instance type_U_test", false,-1);
        tracep->declBit(c+27,"riscv_control idu_instance type_UJ_test", false,-1);
        tracep->declBit(c+28,"riscv_control idu_instance type_Ebreak_test", false,-1);
        tracep->declBus(c+29,"riscv_control idu_instance instype", false,-1, 3,0);
        tracep->declBus(c+30,"riscv_control idu_instance type_R_I_S_SB_src1", false,-1, 4,0);
        tracep->declBus(c+31,"riscv_control idu_instance type_R_S_SB_src2", false,-1, 4,0);
        tracep->declBus(c+32,"riscv_control idu_instance type_R_I_U_UJ_dest", false,-1, 4,0);
        tracep->declQuad(c+33,"riscv_control idu_instance type_I_src2", false,-1, 63,0);
        tracep->declBus(c+35,"riscv_control idu_instance type_S_dest", false,-1, 11,0);
        tracep->declBus(c+36,"riscv_control idu_instance type_SB_dest", false,-1, 12,0);
        tracep->declBus(c+37,"riscv_control idu_instance type_U_src1", false,-1, 31,0);
        tracep->declBus(c+38,"riscv_control idu_instance type_UJ_src1", false,-1, 19,0);
        tracep->declBit(c+103,"riscv_control exu_instance clock", false,-1);
        tracep->declBus(c+7,"riscv_control exu_instance io_exu_src1", false,-1, 31,0);
        tracep->declBus(c+8,"riscv_control exu_instance io_exu_src2", false,-1, 31,0);
        tracep->declBus(c+9,"riscv_control exu_instance io_exu_dest", false,-1, 31,0);
        tracep->declBus(c+10,"riscv_control exu_instance io_exu_inscode", false,-1, 31,0);
        tracep->declBus(c+11,"riscv_control exu_instance io_exu_instype", false,-1, 31,0);
        tracep->declQuad(c+12,"riscv_control exu_instance io_exu_answer", false,-1, 63,0);
        tracep->declBit(c+14,"riscv_control exu_instance io_exu_enable", false,-1);
        tracep->declQuad(c+39,"riscv_control exu_instance Riscv_Reg_0", false,-1, 63,0);
        tracep->declQuad(c+41,"riscv_control exu_instance Riscv_Reg_1", false,-1, 63,0);
        tracep->declQuad(c+43,"riscv_control exu_instance Riscv_Reg_2", false,-1, 63,0);
        tracep->declQuad(c+45,"riscv_control exu_instance Riscv_Reg_3", false,-1, 63,0);
        tracep->declQuad(c+47,"riscv_control exu_instance Riscv_Reg_4", false,-1, 63,0);
        tracep->declQuad(c+49,"riscv_control exu_instance Riscv_Reg_5", false,-1, 63,0);
        tracep->declQuad(c+51,"riscv_control exu_instance Riscv_Reg_6", false,-1, 63,0);
        tracep->declQuad(c+53,"riscv_control exu_instance Riscv_Reg_7", false,-1, 63,0);
        tracep->declQuad(c+55,"riscv_control exu_instance Riscv_Reg_8", false,-1, 63,0);
        tracep->declQuad(c+57,"riscv_control exu_instance Riscv_Reg_9", false,-1, 63,0);
        tracep->declQuad(c+59,"riscv_control exu_instance Riscv_Reg_10", false,-1, 63,0);
        tracep->declQuad(c+61,"riscv_control exu_instance Riscv_Reg_11", false,-1, 63,0);
        tracep->declQuad(c+63,"riscv_control exu_instance Riscv_Reg_12", false,-1, 63,0);
        tracep->declQuad(c+65,"riscv_control exu_instance Riscv_Reg_13", false,-1, 63,0);
        tracep->declQuad(c+67,"riscv_control exu_instance Riscv_Reg_14", false,-1, 63,0);
        tracep->declQuad(c+69,"riscv_control exu_instance Riscv_Reg_15", false,-1, 63,0);
        tracep->declQuad(c+71,"riscv_control exu_instance Riscv_Reg_16", false,-1, 63,0);
        tracep->declQuad(c+73,"riscv_control exu_instance Riscv_Reg_17", false,-1, 63,0);
        tracep->declQuad(c+75,"riscv_control exu_instance Riscv_Reg_18", false,-1, 63,0);
        tracep->declQuad(c+77,"riscv_control exu_instance Riscv_Reg_19", false,-1, 63,0);
        tracep->declQuad(c+79,"riscv_control exu_instance Riscv_Reg_20", false,-1, 63,0);
        tracep->declQuad(c+81,"riscv_control exu_instance Riscv_Reg_21", false,-1, 63,0);
        tracep->declQuad(c+83,"riscv_control exu_instance Riscv_Reg_22", false,-1, 63,0);
        tracep->declQuad(c+85,"riscv_control exu_instance Riscv_Reg_23", false,-1, 63,0);
        tracep->declQuad(c+87,"riscv_control exu_instance Riscv_Reg_24", false,-1, 63,0);
        tracep->declQuad(c+89,"riscv_control exu_instance Riscv_Reg_25", false,-1, 63,0);
        tracep->declQuad(c+91,"riscv_control exu_instance Riscv_Reg_26", false,-1, 63,0);
        tracep->declQuad(c+93,"riscv_control exu_instance Riscv_Reg_27", false,-1, 63,0);
        tracep->declQuad(c+95,"riscv_control exu_instance Riscv_Reg_28", false,-1, 63,0);
        tracep->declQuad(c+97,"riscv_control exu_instance Riscv_Reg_29", false,-1, 63,0);
        tracep->declQuad(c+99,"riscv_control exu_instance Riscv_Reg_30", false,-1, 63,0);
        tracep->declQuad(c+101,"riscv_control exu_instance Riscv_Reg_31", false,-1, 63,0);
    }
}

void Vriscv_control___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vriscv_control___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vriscv_control___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vriscv_control___024root__traceRegister(Vriscv_control___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vriscv_control___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vriscv_control___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vriscv_control___024root__traceCleanup, vlSelf);
    }
}

void Vriscv_control___024root__traceFullSub0(Vriscv_control___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vriscv_control___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vriscv_control___024root* const __restrict vlSelf = static_cast<Vriscv_control___024root*>(voidSelf);
    Vriscv_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vriscv_control___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vriscv_control___024root__traceFullSub0(Vriscv_control___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg),32);
        tracep->fullIData(oldp+2,(((0U == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                    ? (0x1fU & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                >> 0xfU))
                                    : ((1U == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                        ? (0x1fU & 
                                           (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                            >> 0xfU))
                                        : ((2U == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                            ? (0x1fU 
                                               & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                  >> 0xfU))
                                            : ((3U 
                                                == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                                ? (0x1fU 
                                                   & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                      >> 0xfU))
                                                : (
                                                   (4U 
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
        tracep->fullIData(oldp+3,((IData)(((0U == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                            ? (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                                  >> 0x14U))))
                                            : ((1U 
                                                == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                                ? (
                                                   (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
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
        tracep->fullIData(oldp+4,(((0U == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                    ? (0x1fU & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                >> 7U))
                                    : ((1U == (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__instype))
                                        ? (0x1fU & 
                                           (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
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
                                                ? (
                                                   (0x1000U 
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
                                                : (
                                                   (4U 
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
        tracep->fullIData(oldp+5,(((0x1fc00U & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                >> 0xfU)) 
                                   | ((0x380U & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                 >> 5U)) 
                                      | (0x7fU & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)))),32);
        tracep->fullCData(oldp+6,(((IData)(vlSelf->riscv_control__DOT__idu_instance__DOT__type_r_test)
                                    ? 0U : (IData)(vlSelf->riscv_control__DOT__idu_instance__DOT___instype_T_5))),4);
        tracep->fullIData(oldp+7,(vlSelf->riscv_control__DOT__src1),32);
        tracep->fullIData(oldp+8,(vlSelf->riscv_control__DOT__src2),32);
        tracep->fullIData(oldp+9,(vlSelf->riscv_control__DOT__dest),32);
        tracep->fullIData(oldp+10,(vlSelf->riscv_control__DOT__inscode),32);
        tracep->fullIData(oldp+11,(vlSelf->riscv_control__DOT__instype),32);
        tracep->fullQData(oldp+12,(((0x1fU == (0x1fU 
                                               & vlSelf->riscv_control__DOT__dest))
                                     ? vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_31
                                     : vlSelf->riscv_control__DOT__exu_instance__DOT___GEN_126)),64);
        tracep->fullBit(oldp+14,((1U == (IData)(vlSelf->riscv_control__DOT__a))));
        tracep->fullQData(oldp+15,(vlSelf->riscv_control__DOT__pc),64);
        tracep->fullCData(oldp+17,(vlSelf->riscv_control__DOT__instype),4);
        tracep->fullCData(oldp+18,(vlSelf->riscv_control__DOT__a),2);
        tracep->fullBit(oldp+19,((2U == (IData)(vlSelf->riscv_control__DOT__a))));
        tracep->fullQData(oldp+20,((QData)((IData)(vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg))),64);
        tracep->fullBit(oldp+22,(vlSelf->riscv_control__DOT__idu_instance__DOT__type_r_test));
        tracep->fullBit(oldp+23,(((0x67U == (0x7fU 
                                             & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)) 
                                  | (0x13U == (0x7fU 
                                               & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)))));
        tracep->fullBit(oldp+24,(((3U == (0x7fU & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)) 
                                  | (0x23U == (0x7fU 
                                               & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)))));
        tracep->fullBit(oldp+25,((0x63U == (0x7fU & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg))));
        tracep->fullBit(oldp+26,(((0x37U == (0x7fU 
                                             & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)) 
                                  | (0x17U == (0x7fU 
                                               & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)))));
        tracep->fullBit(oldp+27,((0x6fU == (0x7fU & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg))));
        tracep->fullBit(oldp+28,((0x100073U == vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)));
        tracep->fullCData(oldp+29,(vlSelf->riscv_control__DOT__idu_instance__DOT__instype),4);
        tracep->fullCData(oldp+30,((0x1fU & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+31,((0x1fU & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+32,((0x1fU & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                             >> 7U))),5);
        tracep->fullQData(oldp+33,(((vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                     >> 0x1fU) ? (0xfffffffffffff000ULL 
                                                  | (QData)((IData)(
                                                                    (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                                     >> 0x14U))))
                                     : (QData)((IData)(
                                                       (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                        >> 0x14U))))),64);
        tracep->fullSData(oldp+35,(((0xfe0U & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                               >> 0x14U)) 
                                    | (0x1fU & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                >> 7U)))),12);
        tracep->fullSData(oldp+36,(((0x1000U & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                >> 0x13U)) 
                                    | ((0x800U & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                  << 4U)) 
                                       | ((0x7e0U & 
                                           (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                            >> 0x14U)) 
                                          | (0x1eU 
                                             & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                >> 7U)))))),13);
        tracep->fullIData(oldp+37,((0xfffff000U & vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg)),32);
        tracep->fullIData(oldp+38,(((0x80000U & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                 >> 0xcU)) 
                                    | ((0x7f800U & 
                                        (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                         >> 1U)) | 
                                       ((0x400U & (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->riscv_control__DOT__ifu_instance__DOT__instruction_reg 
                                            >> 0x15U)))))),20);
        tracep->fullQData(oldp+39,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_0),64);
        tracep->fullQData(oldp+41,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_1),64);
        tracep->fullQData(oldp+43,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_2),64);
        tracep->fullQData(oldp+45,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_3),64);
        tracep->fullQData(oldp+47,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_4),64);
        tracep->fullQData(oldp+49,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_5),64);
        tracep->fullQData(oldp+51,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_6),64);
        tracep->fullQData(oldp+53,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_7),64);
        tracep->fullQData(oldp+55,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_8),64);
        tracep->fullQData(oldp+57,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_9),64);
        tracep->fullQData(oldp+59,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_10),64);
        tracep->fullQData(oldp+61,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_11),64);
        tracep->fullQData(oldp+63,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_12),64);
        tracep->fullQData(oldp+65,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_13),64);
        tracep->fullQData(oldp+67,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_14),64);
        tracep->fullQData(oldp+69,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_15),64);
        tracep->fullQData(oldp+71,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_16),64);
        tracep->fullQData(oldp+73,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_17),64);
        tracep->fullQData(oldp+75,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_18),64);
        tracep->fullQData(oldp+77,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_19),64);
        tracep->fullQData(oldp+79,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_20),64);
        tracep->fullQData(oldp+81,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_21),64);
        tracep->fullQData(oldp+83,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_22),64);
        tracep->fullQData(oldp+85,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_23),64);
        tracep->fullQData(oldp+87,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_24),64);
        tracep->fullQData(oldp+89,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_25),64);
        tracep->fullQData(oldp+91,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_26),64);
        tracep->fullQData(oldp+93,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_27),64);
        tracep->fullQData(oldp+95,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_28),64);
        tracep->fullQData(oldp+97,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_29),64);
        tracep->fullQData(oldp+99,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_30),64);
        tracep->fullQData(oldp+101,(vlSelf->riscv_control__DOT__exu_instance__DOT__Riscv_Reg_31),64);
        tracep->fullBit(oldp+103,(vlSelf->clock));
        tracep->fullBit(oldp+104,(vlSelf->reset));
        tracep->fullIData(oldp+105,(vlSelf->io_mem_instrution),32);
        tracep->fullQData(oldp+106,(vlSelf->io_pc),64);
        tracep->fullIData(oldp+108,(vlSelf->io_riscv_instruction),32);
        tracep->fullQData(oldp+109,(vlSelf->io_answer),64);
        tracep->fullIData(oldp+111,(vlSelf->io_src1),32);
        tracep->fullIData(oldp+112,(vlSelf->io_src2),32);
        tracep->fullIData(oldp+113,(vlSelf->io_dest),32);
        tracep->fullIData(oldp+114,(vlSelf->io_inscode),32);
        tracep->fullCData(oldp+115,(vlSelf->io_instype),4);
        tracep->fullBit(oldp+116,(vlSelf->io_trap_flag));
    }
}
