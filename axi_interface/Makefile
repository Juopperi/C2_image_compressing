# Verilator configuration
VERILATOR = verilator
VERILATOR_FLAGS = --cc --exe --trace
VERILATOR_FLAGS += -Wall -Wno-fatal
VERILATOR_FLAGS += --top-module proc_full_axi

# Source files
VERILOG_SOURCES = proc_full_axi.sv \
                  user_core_pass_thru.sv
CPP_SOURCES = sim_main.cpp

# Output directory
OBJ_DIR = obj_dir
SIM_BINARY = $(OBJ_DIR)/Vproc_full_axi

# Target: full build (verilate + compile)
all: build

# Phase 1: generate C++ simulation code
verilate:
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILOG_SOURCES) $(CPP_SOURCES)

# Phase 2: build the C++ simulation binary
build: verilate
	make -C $(OBJ_DIR) -f Vproc_full_axi.mk Vproc_full_axi

# Clean up
clean:
	rm -rf $(OBJ_DIR)

.PHONY: all clean verilate build
