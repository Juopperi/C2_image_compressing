# Vivado综合TCL脚本 - jpeg_compression_pipeline模块

# 创建工程
create_project wrapper_proj ./wrapper_proj -part xc7z020clg484-1 -force
set_property target_language Verilog [current_project]

# 添加所有必要的设计源文件
add_files -norecurse {
    ../rtl/wrapper.vhdl
    ../rtl/conversion.vhdl
    ../rtl/zigzag.vhd
    ../rtl/quantize_array.v
    ../rtl/inverse_qtables.vh
    ../rtl/dct8x8_chen_2d.sv
    ../rtl/dct8_chen_ts.sv
    ../rtl/fixed_adder.v
    ../rtl/fixed_multiplier.v
    ../rtl/fixed_point_array.vhd
}

# 由于有VHDL文件，需要确保正确的库引用
set_property library work [get_files ../rtl/zigzag.vhd]
set_property library work [get_files ../rtl/conversion.vhdl]
set_property library work [get_files ../rtl/wrapper.vhdl]
set_property library work [get_files ../rtl/fixed_point_array.vhd]

# 显式将文件类型设置为SystemVerilog
set_property file_type SystemVerilog [get_files ../rtl/dct8x8_chen_2d.sv]
set_property file_type SystemVerilog [get_files ../rtl/dct8_chen_ts.sv]

# 更新编译顺序
update_compile_order -fileset sources_1

# 设置顶层模块
set_property top wrapper [current_fileset]

# 综合设置
synth_design -top wrapper -part xc7z020clg484-1

# 生成报告
report_utilization -file utilization_synth.rpt

report_utilization -hierarchical -file utilization_synth_hierarchical.rpt

# 添加优化步骤
opt_design

# 保存综合后优化的设计检查点
write_checkpoint -force post_synth_opt.dcp

# 可选：添加完整实现流程
# place_design
# report_timing_summary -file timing_place.rpt
# phys_opt_design
# route_design

# 生成报告（在优化后）
report_utilization -file utilization_synth_opt.rpt
report_power -file power_synth_opt.rpt
report_timing_summary -file timing_synth_opt.rpt

# 保存设计检查点
write_checkpoint -force post_synth.dcp

# 可选：生成Verilog网表，用于仿真或进一步分析
write_verilog -force -mode synth_stub ./wrapper_synth_stub.v

# 如果需要，可以取消下面的注释来打开GUI查看结果
# start_gui 
