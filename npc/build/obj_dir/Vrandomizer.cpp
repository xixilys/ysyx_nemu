// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrandomizer.h"
#include "Vrandomizer__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vrandomizer::Vrandomizer(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vrandomizer__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , bcd_num0{vlSymsp->TOP.bcd_num0}
    , bcd_num1{vlSymsp->TOP.bcd_num1}
    , bcd_num2{vlSymsp->TOP.bcd_num2}
    , rootp{&(vlSymsp->TOP)}
{
}

Vrandomizer::Vrandomizer(const char* _vcname__)
    : Vrandomizer(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vrandomizer::~Vrandomizer() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vrandomizer___024root___eval_initial(Vrandomizer___024root* vlSelf);
void Vrandomizer___024root___eval_settle(Vrandomizer___024root* vlSelf);
void Vrandomizer___024root___eval(Vrandomizer___024root* vlSelf);
QData Vrandomizer___024root___change_request(Vrandomizer___024root* vlSelf);
#ifdef VL_DEBUG
void Vrandomizer___024root___eval_debug_assertions(Vrandomizer___024root* vlSelf);
#endif  // VL_DEBUG
void Vrandomizer___024root___final(Vrandomizer___024root* vlSelf);

static void _eval_initial_loop(Vrandomizer__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vrandomizer___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vrandomizer___024root___eval_settle(&(vlSymsp->TOP));
        Vrandomizer___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vrandomizer___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/media/ddddddd/40d0728b-21f5-4125-bf84-4d623a60d871/ddddddd/Documents/ysyx/ysyx-workbench/npc/vsrc/randomizer.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vrandomizer___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vrandomizer::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrandomizer::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrandomizer___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vrandomizer___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vrandomizer___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/media/ddddddd/40d0728b-21f5-4125-bf84-4d623a60d871/ddddddd/Documents/ysyx/ysyx-workbench/npc/vsrc/randomizer.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vrandomizer___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vrandomizer::final() {
    Vrandomizer___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vrandomizer::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vrandomizer::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vrandomizer___024root__traceInitTop(Vrandomizer___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vrandomizer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrandomizer___024root*>(voidSelf);
    Vrandomizer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vrandomizer___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vrandomizer___024root__traceRegister(Vrandomizer___024root* vlSelf, VerilatedVcd* tracep);

void Vrandomizer::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vrandomizer___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
