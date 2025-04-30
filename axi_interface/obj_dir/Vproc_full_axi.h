// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VPROC_FULL_AXI_H_
#define VERILATED_VPROC_FULL_AXI_H_  // guard

#include "verilated.h"

class Vproc_full_axi__Syms;
class Vproc_full_axi___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vproc_full_axi VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vproc_full_axi__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&S_AXI_ACLK,0,0);
    VL_IN8(&S_AXI_ARESETN,0,0);
    VL_IN8(&S_AXI_AWID,0,0);
    VL_IN8(&S_AXI_AWADDR,6,0);
    VL_IN8(&S_AXI_AWLEN,7,0);
    VL_IN8(&S_AXI_AWSIZE,2,0);
    VL_IN8(&S_AXI_AWBURST,1,0);
    VL_IN8(&S_AXI_AWLOCK,0,0);
    VL_IN8(&S_AXI_AWCACHE,3,0);
    VL_IN8(&S_AXI_AWPROT,2,0);
    VL_IN8(&S_AXI_AWQOS,3,0);
    VL_IN8(&S_AXI_AWREGION,3,0);
    VL_IN8(&S_AXI_AWUSER,0,-1);
    VL_IN8(&S_AXI_AWVALID,0,0);
    VL_OUT8(&S_AXI_AWREADY,0,0);
    VL_IN8(&S_AXI_WSTRB,3,0);
    VL_IN8(&S_AXI_WLAST,0,0);
    VL_IN8(&S_AXI_WUSER,0,-1);
    VL_IN8(&S_AXI_WVALID,0,0);
    VL_OUT8(&S_AXI_WREADY,0,0);
    VL_OUT8(&S_AXI_BID,0,0);
    VL_OUT8(&S_AXI_BRESP,1,0);
    VL_OUT8(&S_AXI_BUSER,0,-1);
    VL_OUT8(&S_AXI_BVALID,0,0);
    VL_IN8(&S_AXI_BREADY,0,0);
    VL_IN8(&S_AXI_ARID,0,0);
    VL_IN8(&S_AXI_ARADDR,6,0);
    VL_IN8(&S_AXI_ARLEN,7,0);
    VL_IN8(&S_AXI_ARSIZE,2,0);
    VL_IN8(&S_AXI_ARBURST,1,0);
    VL_IN8(&S_AXI_ARLOCK,0,0);
    VL_IN8(&S_AXI_ARCACHE,3,0);
    VL_IN8(&S_AXI_ARPROT,2,0);
    VL_IN8(&S_AXI_ARQOS,3,0);
    VL_IN8(&S_AXI_ARREGION,3,0);
    VL_IN8(&S_AXI_ARUSER,0,-1);
    VL_IN8(&S_AXI_ARVALID,0,0);
    VL_OUT8(&S_AXI_ARREADY,0,0);
    VL_OUT8(&S_AXI_RID,0,0);
    VL_OUT8(&S_AXI_RRESP,1,0);
    VL_OUT8(&S_AXI_RLAST,0,0);
    VL_OUT8(&S_AXI_RUSER,0,-1);
    VL_OUT8(&S_AXI_RVALID,0,0);
    VL_IN8(&S_AXI_RREADY,0,0);
    VL_IN(&S_AXI_WDATA,31,0);
    VL_OUT(&S_AXI_RDATA,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vproc_full_axi___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vproc_full_axi(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vproc_full_axi(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vproc_full_axi();
  private:
    VL_UNCOPYABLE(Vproc_full_axi);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
