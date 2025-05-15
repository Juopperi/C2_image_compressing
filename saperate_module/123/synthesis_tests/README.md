# Vivado综合测试与比较框架

这个框架用于自动化综合多个RTL模块设计，并生成比较报告，帮助分析不同架构的资源使用情况、时序性能和功耗特性。

## 目录结构

```
synthesis_tests/
├── run_synthesis.tcl       # 主TCL脚本
├── reports/                # 报告目录
│   ├── synthesis_summary.csv    # CSV格式的摘要报告
│   ├── synthesis_comparison.html # HTML格式的比较报告
│   └── [module_name]/      # 每个模块的详细报告
└── [module_name]_proj/     # 每个模块的Vivado项目目录
```

## 使用方法

### 准备工作

1. 将您的RTL设计文件(.v, .sv)放在项目根目录的`RTL`文件夹中
2. 确保每个顶层模块有对应的文件，文件名应与模块名匹配

### 运行综合

使用以下命令运行综合测试：

```bash
cd synthesis_tests
vivado -mode batch -source run_synthesis.tcl
```

### 高级选项

脚本支持以下命令行参数：

```bash
vivado -mode batch -source run_synthesis.tcl -tclargs [options]
```

选项包括：
- `-modules {module1 module2 ...}`: 指定要综合的模块列表，默认综合RTL文件夹下所有顶层模块
- `-part partname`: 指定FPGA型号，默认为xc7z020clg484-1
- `-rtl_dir path`: 指定RTL文件夹路径，默认为../RTL
- `-nthreads N`: 指定线程数，默认为4

示例：
```bash
vivado -mode batch -source run_synthesis.tcl -tclargs -modules {dct8_chen_ts dct_1d_8x1} -part xczu9eg-ffvb1156-2-e -nthreads 8
```

## 输出结果

脚本执行后，会在`reports`目录下生成以下文件：

1. `synthesis_summary.csv`: 包含所有模块的关键指标（LUT、寄存器、DSP、BRAM、频率等）
2. `synthesis_comparison.html`: 以HTML表格形式呈现的比较报告，最佳值会高亮显示
3. 每个模块的详细报告目录，包含时序、资源和功耗报告

## 示例工作流程

1. 设计多个实现相同功能但架构不同的RTL模块
2. 将所有源文件放入RTL目录
3. 运行综合脚本
4. 打开生成的HTML比较报告，分析哪个架构在资源使用、时序和功耗方面表现最佳
5. 根据需求选择最适合的实现方案

## 注意事项

- 确保Vivado已安装且可在命令行访问
- 如遇到综合失败，请检查模块文件中是否有语法错误或不支持的结构
- 该框架适用于比较功能相同但实现方式不同的模块 