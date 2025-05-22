# Verilator configuration
VERILATOR = verilator
VERILATOR_FLAGS = --cc --trace --build -CFLAGS "-std=c++17" -LDFLAGS "-pthread" 
VERILATOR_FLAGS += -Wno-fatal
VERILATOR_FLAGS += --trace-max-array 512

# 设置Verilator输出目录
VERILATOR_OUTPUT = obj_dir

# Verilator包含目录
VERILATOR_INCLUDE = /opt/verilator/include

# Source files
VERILOG_SOURCES = dct8x8_chen_2d.sv
CPP_SOURCES = dct_test.cpp

# Output directory
OBJ_DIR = obj_dir
SIM_BINARY = $(OBJ_DIR)/Vdct8x8_chen_2d

# Target: full build (verilate + compile)
all: dct_test

# Run simulation
run: dct_test
	./dct_test

# Run with waveform viewer
wave: run
	gtkwave dct_wave.vcd &

# Clean up
clean:
	rm -rf $(OBJ_DIR) *.vcd

# 使用Verilator编译Verilog模块
$(VERILATOR_OUTPUT)/Vdct8x8_chen_2d.mk: $(VERILOG_SOURCES)
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILOG_SOURCES) --top-module dct8x8_chen_2d -o dct8x8_chen_2d
	$(MAKE) -j$(shell nproc) -C $(VERILATOR_OUTPUT) -f Vdct8x8_chen_2d.mk

# 编译测试程序
dct_test: $(VERILATOR_OUTPUT)/Vdct8x8_chen_2d.mk dct_test.cpp
	g++ -std=c++17 -I$(VERILATOR_OUTPUT) -I$(VERILATOR_INCLUDE) -o dct_test dct_test.cpp $(VERILATOR_OUTPUT)/Vdct8x8_chen_2d__ALL.a $(VERILATOR_INCLUDE)/verilated.cpp $(VERILATOR_INCLUDE)/verilated_vcd_c.cpp $(VERILATOR_INCLUDE)/verilated_threads.cpp -pthread

.PHONY: all run wave clean
