# Verilator configuration
VERILATOR = verilator
VERILATOR_FLAGS = --cc --trace --build -CFLAGS "-std=c++17" -LDFLAGS "-pthread" -Wno-fatal
VERILATOR_FLAGS += --trace-max-array 512



# 设置Verilator输出目录
VERILATOR_OUTPUT = obj_dir

# Verilator包含目录
VERILATOR_INCLUDE = /opt/verilator/include

# Source files
VERILOG_SOURCES = myip_slave_lite_v1_0_S00_AXI.v myip.sv
CPP_SOURCES = myip_test.cpp

# Output directory
OBJ_DIR = obj_dir
SIM_BINARY = $(OBJ_DIR)/Vmyip

# Target: full build (verilate + compile)
all: myip_test

# Run simulation
run: myip_test
	./myip_test

# Run with waveform viewer
wave: run
	gtkwave myip_test.vcd &

# Clean up
clean:
	rm -rf $(OBJ_DIR) *.vcd

# 使用Verilator编译Verilog模块
$(VERILATOR_OUTPUT)/Vmyip.mk: $(VERILOG_SOURCES)
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILOG_SOURCES) --top-module myip -o myip

# 编译测试程序
myip_test: $(VERILATOR_OUTPUT)/Vmyip.mk myip_test.cpp
	g++ -std=c++17 -I$(VERILATOR_OUTPUT) -I$(VERILATOR_INCLUDE) -o myip_test myip_test.cpp $(VERILATOR_OUTPUT)/Vmyip__ALL.a $(VERILATOR_INCLUDE)/verilated.cpp $(VERILATOR_INCLUDE)/verilated_vcd_c.cpp $(VERILATOR_INCLUDE)/verilated_threads.cpp -pthread

.PHONY: all run wave clean
