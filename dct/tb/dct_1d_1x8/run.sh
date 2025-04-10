
# 配置
TOP_MODULE="tb_dct_1d_8x1"
WORK_LIB="work"
SRC_DIR="../../"
SRC_DIR_FIXED="../../../fixed_point/"
TB_FILE="dct_1d_1x8_tb.v"

# 清理旧数据
rm -rf ${WORK_LIB} transcript vsim.wlf

# 1. 创建工作库
vlib ${WORK_LIB}

# 2. 编译 Verilog 源文件和 testbench
vlog -work ${WORK_LIB} +acc \
    ${SRC_DIR}/dct_8muladd.v \
    ${SRC_DIR}/fixed_multiplier.v \
    ${SRC_DIR}/fixed_adder.v \
    ${SRC_DIR}/dct_1d_8x1.v \
    ${SRC_DIR}/dct_coeffs.vh \
    ${TB_FILE}

# 3. 编译 VHDL 源文件
vcom -work ${WORK_LIB} \
    ${SRC_DIR_FIXED}/fixed_adder.vhd \
    ${SRC_DIR_FIXED}/fixed_multiplier.vhd

# 4. 启动仿真（命令行模式）
vsim -c -do "run -all; quit" ${TOP_MODULE}
