// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vproc_full_axi__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vproc_full_axi::Vproc_full_axi(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vproc_full_axi__Syms(contextp(), _vcname__, this)}
    , S_AXI_ACLK{vlSymsp->TOP.S_AXI_ACLK}
    , S_AXI_ARESETN{vlSymsp->TOP.S_AXI_ARESETN}
    , S_AXI_AWID{vlSymsp->TOP.S_AXI_AWID}
    , S_AXI_AWADDR{vlSymsp->TOP.S_AXI_AWADDR}
    , S_AXI_AWLEN{vlSymsp->TOP.S_AXI_AWLEN}
    , S_AXI_AWSIZE{vlSymsp->TOP.S_AXI_AWSIZE}
    , S_AXI_AWBURST{vlSymsp->TOP.S_AXI_AWBURST}
    , S_AXI_AWLOCK{vlSymsp->TOP.S_AXI_AWLOCK}
    , S_AXI_AWCACHE{vlSymsp->TOP.S_AXI_AWCACHE}
    , S_AXI_AWPROT{vlSymsp->TOP.S_AXI_AWPROT}
    , S_AXI_AWQOS{vlSymsp->TOP.S_AXI_AWQOS}
    , S_AXI_AWREGION{vlSymsp->TOP.S_AXI_AWREGION}
    , S_AXI_AWUSER{vlSymsp->TOP.S_AXI_AWUSER}
    , S_AXI_AWVALID{vlSymsp->TOP.S_AXI_AWVALID}
    , S_AXI_AWREADY{vlSymsp->TOP.S_AXI_AWREADY}
    , S_AXI_WSTRB{vlSymsp->TOP.S_AXI_WSTRB}
    , S_AXI_WLAST{vlSymsp->TOP.S_AXI_WLAST}
    , S_AXI_WUSER{vlSymsp->TOP.S_AXI_WUSER}
    , S_AXI_WVALID{vlSymsp->TOP.S_AXI_WVALID}
    , S_AXI_WREADY{vlSymsp->TOP.S_AXI_WREADY}
    , S_AXI_BID{vlSymsp->TOP.S_AXI_BID}
    , S_AXI_BRESP{vlSymsp->TOP.S_AXI_BRESP}
    , S_AXI_BUSER{vlSymsp->TOP.S_AXI_BUSER}
    , S_AXI_BVALID{vlSymsp->TOP.S_AXI_BVALID}
    , S_AXI_BREADY{vlSymsp->TOP.S_AXI_BREADY}
    , S_AXI_ARID{vlSymsp->TOP.S_AXI_ARID}
    , S_AXI_ARADDR{vlSymsp->TOP.S_AXI_ARADDR}
    , S_AXI_ARLEN{vlSymsp->TOP.S_AXI_ARLEN}
    , S_AXI_ARSIZE{vlSymsp->TOP.S_AXI_ARSIZE}
    , S_AXI_ARBURST{vlSymsp->TOP.S_AXI_ARBURST}
    , S_AXI_ARLOCK{vlSymsp->TOP.S_AXI_ARLOCK}
    , S_AXI_ARCACHE{vlSymsp->TOP.S_AXI_ARCACHE}
    , S_AXI_ARPROT{vlSymsp->TOP.S_AXI_ARPROT}
    , S_AXI_ARQOS{vlSymsp->TOP.S_AXI_ARQOS}
    , S_AXI_ARREGION{vlSymsp->TOP.S_AXI_ARREGION}
    , S_AXI_ARUSER{vlSymsp->TOP.S_AXI_ARUSER}
    , S_AXI_ARVALID{vlSymsp->TOP.S_AXI_ARVALID}
    , S_AXI_ARREADY{vlSymsp->TOP.S_AXI_ARREADY}
    , S_AXI_RID{vlSymsp->TOP.S_AXI_RID}
    , S_AXI_RRESP{vlSymsp->TOP.S_AXI_RRESP}
    , S_AXI_RLAST{vlSymsp->TOP.S_AXI_RLAST}
    , S_AXI_RUSER{vlSymsp->TOP.S_AXI_RUSER}
    , S_AXI_RVALID{vlSymsp->TOP.S_AXI_RVALID}
    , S_AXI_RREADY{vlSymsp->TOP.S_AXI_RREADY}
    , S_AXI_WDATA{vlSymsp->TOP.S_AXI_WDATA}
    , S_AXI_RDATA{vlSymsp->TOP.S_AXI_RDATA}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vproc_full_axi::Vproc_full_axi(const char* _vcname__)
    : Vproc_full_axi(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vproc_full_axi::~Vproc_full_axi() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vproc_full_axi___024root___eval_debug_assertions(Vproc_full_axi___024root* vlSelf);
#endif  // VL_DEBUG
void Vproc_full_axi___024root___eval_static(Vproc_full_axi___024root* vlSelf);
void Vproc_full_axi___024root___eval_initial(Vproc_full_axi___024root* vlSelf);
void Vproc_full_axi___024root___eval_settle(Vproc_full_axi___024root* vlSelf);
void Vproc_full_axi___024root___eval(Vproc_full_axi___024root* vlSelf);

void Vproc_full_axi::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vproc_full_axi::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vproc_full_axi___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vproc_full_axi___024root___eval_static(&(vlSymsp->TOP));
        Vproc_full_axi___024root___eval_initial(&(vlSymsp->TOP));
        Vproc_full_axi___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vproc_full_axi___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vproc_full_axi::eventsPending() { return false; }

uint64_t Vproc_full_axi::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vproc_full_axi::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vproc_full_axi___024root___eval_final(Vproc_full_axi___024root* vlSelf);

VL_ATTR_COLD void Vproc_full_axi::final() {
    Vproc_full_axi___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vproc_full_axi::hierName() const { return vlSymsp->name(); }
const char* Vproc_full_axi::modelName() const { return "Vproc_full_axi"; }
unsigned Vproc_full_axi::threads() const { return 1; }
void Vproc_full_axi::prepareClone() const { contextp()->prepareClone(); }
void Vproc_full_axi::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vproc_full_axi::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vproc_full_axi___024root__trace_decl_types(VerilatedVcd* tracep);

void Vproc_full_axi___024root__trace_init_top(Vproc_full_axi___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vproc_full_axi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vproc_full_axi___024root*>(voidSelf);
    Vproc_full_axi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vproc_full_axi___024root__trace_decl_types(tracep);
    Vproc_full_axi___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vproc_full_axi___024root__trace_register(Vproc_full_axi___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vproc_full_axi::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vproc_full_axi::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vproc_full_axi___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
