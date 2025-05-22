# Makefile for rgb2ycbcr_quant Verilator testbench

# Variables
VERILATOR = verilator
VERILATOR_FLAGS = -Wall --trace -cc --exe -LDFLAGS "-pthread" -Wno-fatal --trace-max-array 512 --top-module $(TOP_MODULE) -Irtl
# Use -CFLAGS to pass C++ compiler flags to Verilator
CPP_FLAGS = -CFLAGS "-std=c++17 -Wall"

# Top module to be tested
TOP_MODULE = rgb2ycbcr_quant

# Testbench filename
TB = tb_rgb2ycbcr_quant.cpp

# RTL files
RTL_FILES = rtl/rgb2ycbcr_quant.sv 
RTL_DEPS = $(wildcard rtl/*.sv) $(wildcard rtl/*.v)

# Verilator build directory
BUILD_DIR = obj_dir

# Target executable
TARGET = $(BUILD_DIR)/V$(TOP_MODULE)

# Default target
all: $(TARGET)

# Rule to run the simulation
run: $(TARGET)
	$(TARGET)

# Rule to build the Verilator model and testbench
$(TARGET): $(TB) $(RTL_FILES) $(RTL_DEPS)
	@echo "Building and running testbench..."
	@echo "RTL files found: $(RTL_DEPS)"
	$(VERILATOR) $(VERILATOR_FLAGS) $(CPP_FLAGS) $(RTL_DEPS) $(TB)
	cd $(BUILD_DIR) && make -f V$(TOP_MODULE).mk

# Clean up
clean:
	rm -rf $(BUILD_DIR)

# Help target
help:
	@echo "Available targets:"
	@echo "  all     - Build the testbench (default)"
	@echo "  run     - Build and run the testbench"
	@echo "  clean   - Remove build directory"
	@echo "  help    - Show this help message"

# Debug target to show variables
debug:
	@echo "VERILATOR: $(VERILATOR)"
	@echo "VERILATOR_FLAGS: $(VERILATOR_FLAGS)"
	@echo "CPP_FLAGS: $(CPP_FLAGS)"
	@echo "TOP_MODULE: $(TOP_MODULE)"
	@echo "TB: $(TB)"
	@echo "RTL_FILES: $(RTL_FILES)"
	@echo "RTL_DEPS: $(RTL_DEPS)"
	@echo "TARGET: $(TARGET)"

.PHONY: all run clean help debug