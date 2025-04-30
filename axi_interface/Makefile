# Verilator configuration
VERILATOR = verilator
VERILATOR_FLAGS = --cc --exe --trace
VERILATOR_FLAGS += -Wall -Wno-fatal
VERILATOR_FLAGS += --top-module axi_self_test
VERILATOR_FLAGS += --trace-max-array 512

# Source files
VERILOG_SOURCES = axi_self_test.v
CPP_SOURCES = sim_main.cpp 

# Output directory
OBJ_DIR = obj_dir
SIM_BINARY = $(OBJ_DIR)/Vaxi_self_test

# Target: full build (verilate + compile)
all: build

# Phase 1: generate C++ simulation code
verilate:
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILOG_SOURCES) $(CPP_SOURCES)

# Phase 2: build the C++ simulation binary
build: verilate
	make -C $(OBJ_DIR) -f Vaxi_self_test.mk Vaxi_self_test

# Clean up
clean:
	rm -rf $(OBJ_DIR)

.PHONY: all clean verilate build
