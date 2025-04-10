# PowerShell 脚本（run.ps1）

$TOP_MODULE = "tb_dct_1d_8x1"
$WORK_LIB = "work"
$SRC_DIR = "../../../"
$SRC_DIR_FIXED = "../../../../fixed_point/"
$TB_FILE = "dct_1d_1x8_tb.v"

# 清理旧数据
Remove-Item -Recurse -Force $WORK_LIB, "transcript", "vsim.wlf" -ErrorAction Ignore

# 创建工作库
vlib $WORK_LIB

# 编译 VHDL 文件
vcom -work $WORK_LIB `
    "$SRC_DIR_FIXED/fixed_adder.vhd" `
    "$SRC_DIR_FIXED/fixed_multiplier.vhd"


# 编译 Verilog 文件
vlog -work $WORK_LIB +acc `
    "$SRC_DIR/dct_8muladd.v" `
    "$SRC_DIR/fixed_multiplier.v" `
    "$SRC_DIR/fixed_adder.v" `
    "$SRC_DIR/dct_1d_8x1.v" `
    "$SRC_DIR/dct_coeffs.vh" `
    $TB_FILE


# 运行仿真
vsim -c -do "run -all; quit" $TOP_MODULE
