# Verilator configuration
VERILATOR = verilator
VERILATOR_FLAGS = --cc --exe --trace
VERILATOR_FLAGS += -Wall -Wno-fatal
VERILATOR_FLAGS += --top-module axi_self_test
VERILATOR_FLAGS += --trace-max-array 512

# Source files
VERILOG_SOURCES = axi_self_test.sv
CPP_SOURCES = sim_main.cpp axi_helper.cpp

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

# Run simulation
run: build
	$(SIM_BINARY)

# Run with waveform viewer
run_wave: build
	$(SIM_BINARY)
	gtkwave wave.vcd &

# Clean up
clean:
	rm -rf $(OBJ_DIR) *.vcd

.PHONY: all clean verilate build run run_wave
