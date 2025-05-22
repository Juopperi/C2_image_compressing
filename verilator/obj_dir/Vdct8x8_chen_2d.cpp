// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdct8x8_chen_2d__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdct8x8_chen_2d::Vdct8x8_chen_2d(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdct8x8_chen_2d__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , in_valid{vlSymsp->TOP.in_valid}
    , in_ready{vlSymsp->TOP.in_ready}
    , out_valid{vlSymsp->TOP.out_valid}
    , out_ready{vlSymsp->TOP.out_ready}
    , in_data{vlSymsp->TOP.in_data}
    , out_data{vlSymsp->TOP.out_data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vdct8x8_chen_2d::Vdct8x8_chen_2d(const char* _vcname__)
    : Vdct8x8_chen_2d(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdct8x8_chen_2d::~Vdct8x8_chen_2d() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdct8x8_chen_2d___024root___eval_debug_assertions(Vdct8x8_chen_2d___024root* vlSelf);
#endif  // VL_DEBUG
void Vdct8x8_chen_2d___024root___eval_static(Vdct8x8_chen_2d___024root* vlSelf);
void Vdct8x8_chen_2d___024root___eval_initial(Vdct8x8_chen_2d___024root* vlSelf);
void Vdct8x8_chen_2d___024root___eval_settle(Vdct8x8_chen_2d___024root* vlSelf);
void Vdct8x8_chen_2d___024root___eval(Vdct8x8_chen_2d___024root* vlSelf);

void Vdct8x8_chen_2d::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdct8x8_chen_2d::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdct8x8_chen_2d___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdct8x8_chen_2d___024root___eval_static(&(vlSymsp->TOP));
        Vdct8x8_chen_2d___024root___eval_initial(&(vlSymsp->TOP));
        Vdct8x8_chen_2d___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdct8x8_chen_2d___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdct8x8_chen_2d::eventsPending() { return false; }

uint64_t Vdct8x8_chen_2d::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdct8x8_chen_2d::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdct8x8_chen_2d___024root___eval_final(Vdct8x8_chen_2d___024root* vlSelf);

VL_ATTR_COLD void Vdct8x8_chen_2d::final() {
    Vdct8x8_chen_2d___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdct8x8_chen_2d::hierName() const { return vlSymsp->name(); }
const char* Vdct8x8_chen_2d::modelName() const { return "Vdct8x8_chen_2d"; }
unsigned Vdct8x8_chen_2d::threads() const { return 1; }
void Vdct8x8_chen_2d::prepareClone() const { contextp()->prepareClone(); }
void Vdct8x8_chen_2d::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vdct8x8_chen_2d::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdct8x8_chen_2d___024root__trace_decl_types(VerilatedVcd* tracep);

void Vdct8x8_chen_2d___024root__trace_init_top(Vdct8x8_chen_2d___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdct8x8_chen_2d___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdct8x8_chen_2d___024root*>(voidSelf);
    Vdct8x8_chen_2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vdct8x8_chen_2d___024root__trace_decl_types(tracep);
    Vdct8x8_chen_2d___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdct8x8_chen_2d___024root__trace_register(Vdct8x8_chen_2d___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdct8x8_chen_2d::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdct8x8_chen_2d::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdct8x8_chen_2d___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
