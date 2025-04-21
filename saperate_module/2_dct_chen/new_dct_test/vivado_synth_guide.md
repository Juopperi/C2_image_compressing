# Vivado综合使用指南

## 前提条件
1. 安装Xilinx Vivado（推荐版本2020.2或更新版本）
2. 准备好设计文件：`dct_1d_8x1.v`和`dct_8muladd.v`
   - 注意：脚本假设这两个文件在同一目录下

## 方法一：使用TCL脚本运行批处理综合

1. 打开命令提示符或终端，导航到设计文件所在目录
2. 运行Vivado的批处理命令：
   ```
   vivado -mode batch -source synth.tcl
   vivado -mode batch -source synth.tcl -tclargs -nthreads 32
   ```
3. 脚本执行完成后，可以在`dct_1d_8x1_proj`目录下找到生成的报告文件：
   - `timing_synth.rpt`：时序报告
   - `utilization_synth.rpt`：资源使用报告
   - `power_synth.rpt`：功耗报告

## 方法二：在Vivado GUI中运行TCL脚本

1. 启动Vivado
2. 在Tcl Console中，切换到设计文件所在目录：
   ```
   cd [你的文件路径]
   ```
3. 执行TCL脚本：
   ```
   source synth.tcl
   ```
4. 脚本执行结束后，会自动打开GUI界面查看结果

## 方法三：手动创建和综合项目

1. 启动Vivado，选择"Create Project"
2. 按照向导创建新项目，选择合适的FPGA设备（默认脚本使用xc7z020clg484-1）
3. 添加源文件`dct_1d_8x1.v`和`dct_8muladd.v`
4. 设置顶层模块为`dct_1d_8x1`
5. 运行综合（Run Synthesis）
6. 查看综合报告

## 修改TCL脚本
- 如果需要使用不同的FPGA设备，请修改脚本中的`-part`参数
- 如果有测试台文件，取消脚本中仿真源文件部分的注释并更新文件名

## 注意事项
- 确保`dct_8muladd.v`模块定义正确且可用
- 如果DCT模块使用了特定IP核，可能需要在脚本中添加相应的IP设置
- 在正式综合前，建议先进行仿真验证模块功能 