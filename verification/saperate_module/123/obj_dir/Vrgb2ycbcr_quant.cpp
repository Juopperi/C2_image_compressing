// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrgb2ycbcr_quant__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vrgb2ycbcr_quant::Vrgb2ycbcr_quant(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vrgb2ycbcr_quant__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , in_valid{vlSymsp->TOP.in_valid}
    , in_ready{vlSymsp->TOP.in_ready}
    , component_sel{vlSymsp->TOP.component_sel}
    , out_valid{vlSymsp->TOP.out_valid}
    , out_ready{vlSymsp->TOP.out_ready}
    , r_all{vlSymsp->TOP.r_all}
    , g_all{vlSymsp->TOP.g_all}
    , b_all{vlSymsp->TOP.b_all}
    , out_data{vlSymsp->TOP.out_data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vrgb2ycbcr_quant::Vrgb2ycbcr_quant(const char* _vcname__)
    : Vrgb2ycbcr_quant(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vrgb2ycbcr_quant::~Vrgb2ycbcr_quant() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vrgb2ycbcr_quant___024root___eval_debug_assertions(Vrgb2ycbcr_quant___024root* vlSelf);
#endif  // VL_DEBUG
void Vrgb2ycbcr_quant___024root___eval_static(Vrgb2ycbcr_quant___024root* vlSelf);
void Vrgb2ycbcr_quant___024root___eval_initial(Vrgb2ycbcr_quant___024root* vlSelf);
void Vrgb2ycbcr_quant___024root___eval_settle(Vrgb2ycbcr_quant___024root* vlSelf);
void Vrgb2ycbcr_quant___024root___eval(Vrgb2ycbcr_quant___024root* vlSelf);

void Vrgb2ycbcr_quant::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrgb2ycbcr_quant::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrgb2ycbcr_quant___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vrgb2ycbcr_quant___024root___eval_static(&(vlSymsp->TOP));
        Vrgb2ycbcr_quant___024root___eval_initial(&(vlSymsp->TOP));
        Vrgb2ycbcr_quant___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vrgb2ycbcr_quant___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vrgb2ycbcr_quant::eventsPending() { return false; }

uint64_t Vrgb2ycbcr_quant::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vrgb2ycbcr_quant::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vrgb2ycbcr_quant___024root___eval_final(Vrgb2ycbcr_quant___024root* vlSelf);

VL_ATTR_COLD void Vrgb2ycbcr_quant::final() {
    Vrgb2ycbcr_quant___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vrgb2ycbcr_quant::hierName() const { return vlSymsp->name(); }
const char* Vrgb2ycbcr_quant::modelName() const { return "Vrgb2ycbcr_quant"; }
unsigned Vrgb2ycbcr_quant::threads() const { return 1; }
void Vrgb2ycbcr_quant::prepareClone() const { contextp()->prepareClone(); }
void Vrgb2ycbcr_quant::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vrgb2ycbcr_quant::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vrgb2ycbcr_quant___024root__trace_decl_types(VerilatedVcd* tracep);

void Vrgb2ycbcr_quant___024root__trace_init_top(Vrgb2ycbcr_quant___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vrgb2ycbcr_quant___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrgb2ycbcr_quant___024root*>(voidSelf);
    Vrgb2ycbcr_quant__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vrgb2ycbcr_quant___024root__trace_decl_types(tracep);
    Vrgb2ycbcr_quant___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vrgb2ycbcr_quant___024root__trace_register(Vrgb2ycbcr_quant___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vrgb2ycbcr_quant::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vrgb2ycbcr_quant::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vrgb2ycbcr_quant___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
