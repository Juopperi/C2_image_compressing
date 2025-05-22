# Verilator configuration
VERILATOR = verilator
VERILATOR_FLAGS = --cc --trace --build -CFLAGS "-std=c++17" -LDFLAGS "-pthread" 
VERILATOR_FLAGS += -Wno-fatal
VERILATOR_FLAGS += --trace-max-array 64  # 限制数组大小
VERILATOR_FLAGS += --trace-max-width 64  # 限制信号宽度
# VERILATOR_FLAGS += --trace-max-array 512

# 设置Verilator输出目录
VERILATOR_OUTPUT = obj_dir

# Verilator包含目录
VERILATOR_INCLUDE = /opt/verilator/include

# Source files
VERILOG_SOURCES = rtl/dct8x8_chen_2d.sv rtl/dct8_chen_ts_refined.sv rtl/lut_multiplier.sv
CPP_SOURCES = dct_test.cpp dct_sweep.cpp

# Output directory
OBJ_DIR = obj_dir
SIM_BINARY = $(OBJ_DIR)/Vdct8x8_chen_2d

# Target: full build (verilate + compile)
all: dct_test dct_sweep

# Run simulation
run: dct_test
	./dct_test

# Run sweep
sweep: dct_sweep
	./dct_sweep
	python3 plot_results.py

# Run with waveform viewer
wave: run
	gtkwave dct_wave.vcd &

# Clean up
clean:
	rm -rf $(OBJ_DIR) *.vcd *.csv *.png

# 使用Verilator编译Verilog模块
$(VERILATOR_OUTPUT)/Vdct8x8_chen_2d.mk: $(VERILOG_SOURCES)
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILOG_SOURCES) --top-module dct8x8_chen_2d -o dct8x8_chen_2d
	$(MAKE) -j$(shell nproc) -C $(VERILATOR_OUTPUT) -f Vdct8x8_chen_2d.mk

# 编译测试程序
dct_test: $(VERILATOR_OUTPUT)/Vdct8x8_chen_2d.mk dct_test.cpp
	g++ -std=c++17 -I$(VERILATOR_OUTPUT) -I$(VERILATOR_INCLUDE) -o dct_test dct_test.cpp $(VERILATOR_OUTPUT)/Vdct8x8_chen_2d__ALL.a $(VERILATOR_INCLUDE)/verilated.cpp $(VERILATOR_INCLUDE)/verilated_vcd_c.cpp $(VERILATOR_INCLUDE)/verilated_threads.cpp -pthread

# 编译sweep程序
dct_sweep: $(VERILATOR_OUTPUT)/Vdct8x8_chen_2d.mk dct_sweep.cpp
	g++ -std=c++17 -I$(VERILATOR_OUTPUT) -I$(VERILATOR_INCLUDE) -o dct_sweep dct_sweep.cpp $(VERILATOR_OUTPUT)/Vdct8x8_chen_2d__ALL.a $(VERILATOR_INCLUDE)/verilated.cpp $(VERILATOR_INCLUDE)/verilated_vcd_c.cpp $(VERILATOR_INCLUDE)/verilated_threads.cpp -pthread

.PHONY: all run sweep wave clean
