# 乘法器资源优化测试框架

本测试框架用于比较不同乘法器实现的资源使用情况和性能，帮助选择最适合您项目的乘法器设计。

## 包含的乘法器实现

1. **DSP乘法器 (dsp_multiplier.v)**
   - 基于DSP块的标准乘法器
   - 适合当DSP资源充足时

2. **LUT乘法器 (lut_multiplier.v)**
   - 强制使用LUT实现的乘法器
   - 使用Vivado attribute `(* use_dsp = "no" *)`

3. **Booth乘法器 (booth_multiplier.v)**
   - 基于Booth算法的乘法器
   - 针对LUT优化，不使用DSP

4. **移位加法乘法器 (shift_add_multiplier.v)**
   - 基于移位和加法的乘法器实现
   - 针对LUT优化，不使用DSP

## 使用方法

### Windows系统

1. 确保已安装Vivado并配置了环境变量
2. 运行批处理脚本:
   ```
   run_all_multipliers.bat
   ```

### Linux/Mac系统

1. 确保已安装Vivado并配置了环境变量
2. 给脚本添加执行权限:
   ```bash
   chmod +x run_all_multipliers.sh
   ```
3. 运行Shell脚本:
   ```bash
   ./run_all_multipliers.sh
   ```

### 单独测试某个乘法器

如果您只想测试特定的乘法器和位宽:

```bash
vivado -mode batch -source synth_multipliers.tcl -tclargs <模块名> <源文件> <位宽>
```

例如:
```bash
vivado -mode batch -source synth_multipliers.tcl -tclargs booth_multiplier booth_multiplier.v 16
```

## 结果分析

脚本运行完成后，结果将保存在`synth_results`目录中:

1. 每个乘法器和位宽组合都有一个子目录，包含详细报告
2. `summary.csv`文件包含所有测试结果的摘要，便于比较

## 自定义测试

您可以根据需要修改以下内容:

1. 在`run_all_multipliers.bat`或`run_all_multipliers.sh`中修改`MODULES`和`WIDTHS`变量来测试不同的模块和位宽
2. 修改`synth_multipliers.tcl`中的FPGA型号(-part参数)来针对您的目标设备进行优化
3. 创建新的乘法器实现并添加到测试列表中

## 参考结果解释

* **LUTs**: 查找表资源使用量
* **FFs**: 触发器使用量
* **DSPs**: DSP块使用量
* **TimingDelay**: 时序延迟，影响可达到的最大频率 