# Vivado综合TCL脚本 - dct_1d_8x1模块

# 创建工程
create_project dct_1d_8x1_proj ./dct_1d_8x1_proj -part xc7z020clg484-1 -force
set_property target_language Verilog [current_project]

# 添加设计源文件 - 假设dct_8muladd.v在同一目录下
# add_files -norecurse {../dct_1d_8x1.v ../dct_8muladd.v ../fixed_multiplier.v ../fixed_adder.v}
add_files -norecurse {../chen_mul_1d.sv }
update_compile_order -fileset sources_1

# 添加仿真源文件 (如果有)
# add_files -fileset sim_1 -norecurse ./dct_1d_8x1_tb.v
# update_compile_order -fileset sim_1

# 设置顶层模块
set_property top dct8_chen_ts [current_fileset]

# 综合设置
synth_design -top dct8_chen_ts -part xc7z020clg484-1

# 执行综合
# synth_design

# 生成报告
report_timing_summary -file timing_synth.rpt
report_utilization -file utilization_synth.rpt
report_power -file power_synth.rpt

# 保存设计检查点
write_checkpoint -force post_synth.dcp

# 打开GUI查看结果
# start_gui 