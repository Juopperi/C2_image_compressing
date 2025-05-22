// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vconnect__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vconnect::Vconnect(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vconnect__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , start{vlSymsp->TOP.start}
    , done{vlSymsp->TOP.done}
    , r_all{vlSymsp->TOP.r_all}
    , g_all{vlSymsp->TOP.g_all}
    , b_all{vlSymsp->TOP.b_all}
    , y_quantized{vlSymsp->TOP.y_quantized}
    , cb_quantized{vlSymsp->TOP.cb_quantized}
    , cr_quantized{vlSymsp->TOP.cr_quantized}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vconnect::Vconnect(const char* _vcname__)
    : Vconnect(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vconnect::~Vconnect() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vconnect___024root___eval_debug_assertions(Vconnect___024root* vlSelf);
#endif  // VL_DEBUG
void Vconnect___024root___eval_static(Vconnect___024root* vlSelf);
void Vconnect___024root___eval_initial(Vconnect___024root* vlSelf);
void Vconnect___024root___eval_settle(Vconnect___024root* vlSelf);
void Vconnect___024root___eval(Vconnect___024root* vlSelf);

void Vconnect::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vconnect::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vconnect___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vconnect___024root___eval_static(&(vlSymsp->TOP));
        Vconnect___024root___eval_initial(&(vlSymsp->TOP));
        Vconnect___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vconnect___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vconnect::eventsPending() { return false; }

uint64_t Vconnect::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vconnect::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vconnect___024root___eval_final(Vconnect___024root* vlSelf);

VL_ATTR_COLD void Vconnect::final() {
    Vconnect___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vconnect::hierName() const { return vlSymsp->name(); }
const char* Vconnect::modelName() const { return "Vconnect"; }
unsigned Vconnect::threads() const { return 1; }
void Vconnect::prepareClone() const { contextp()->prepareClone(); }
void Vconnect::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vconnect::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vconnect___024root__trace_decl_types(VerilatedVcd* tracep);

void Vconnect___024root__trace_init_top(Vconnect___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vconnect___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconnect___024root*>(voidSelf);
    Vconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vconnect___024root__trace_decl_types(tracep);
    Vconnect___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconnect___024root__trace_register(Vconnect___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vconnect::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vconnect::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vconnect___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
