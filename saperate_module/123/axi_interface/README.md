# AXI接口读写测试

这个项目包含一个用于测试AXI接口模块(myip)的读写功能的测试程序。

## 功能描述

测试程序将对myip模块的寄存器0-511进行读写测试，测试流程如下：

1. 初始化AXI总线
2. 复位myip模块
3. 对地址0-511（每4个字节一个地址）进行写入测试，写入的数据为地址值本身
4. 对地址0-511（每4个字节一个地址）进行读取测试，验证读取的数据是否与写入的数据一致

## 环境要求

- C++编译器（支持C++11标准）
- Verilator（用于将Verilog代码转换为C++模型）
- Make工具

## 文件说明

- `vivado_axi_wrapper.v`: AXI接口模块的Verilog代码
- `myip_test.cpp`: 测试程序的C++代码
- `Makefile`: 用于构建和运行测试的脚本

## 使用方法

1. 编译测试程序:

```bash
make
```

2. 运行测试程序:

```bash
make run
```

3. 查看波形文件(需要安装gtkwave):

```bash
make wave
```

4. 清理生成的文件:

```bash
make clean
```

## 输出说明

程序运行时会输出每次读写操作的地址、数据和状态（成功或失败）。如果读取的数据与写入的数据不一致，将会输出不匹配信息。

波形文件`myip_test.vcd`包含了完整的总线时序，可以用gtkwave工具查看。

## Implementation Details

In the first virsion of the AXI interface module, we only maintain the basic functional ports, perhaps even fewer than the AXI-Lite standard requires.

Following are the ports we declear:
- clk & reset_n
- Write and Write Chennal Set
    - valid & ready signal
    - address & data




We divided register managements into two parts: one for data read/write operations, and another for storing configuration information, where the error and debug information also be stored.
The configuration information addresses start with the highest bit set to 1, making it easier to distinguish and indicate the processing logic for input data. 
We diredcted `reg_data` and `reg_cfg` into separate always blocks for read/write operations, avoiding the complexity of unified processing in a single large functional module.

### Development Recording 


Regarding the handling of ready and valid signals: all ready signals are processed using the logic show below.


```verilog
// Original one
always @(posedge clk) begin
    if (!reset_n) begin
        ready <= 1'b0;
    end
    else begin
        if (~ready && valid) begin
            ready <= 1'b1;
        end
        else begin
            ready <= 1'b0;
        end
    end
end

// Advice from Claude

always @(posedge clk or negedge reset_n) begin
    if (!reset_n) begin
        ready <= 1'b0;
    end
    else begin
        // 基于内部处理状态控制ready
        ready <= internal_processing_complete && !buffer_full;
        
        // 或者对于简单情况，可以保持ready直到无法处理新数据
        // ready <= !buffer_full;
    end
end

```

Ofcourse, This is just the current implementation, which doesn't seem particularly optimal, especially for the sender side. 
Claude provided me withe an alternative implementation approach.

I confirm that the current handling approach is very appropriate and without issues. 
This is because the current implemetnation doesn't have any processes that need to wait for completion (Done), and the system reads and saves the address information simutaneously when the ready signal is issued.
Of course, the ready signal for reading command cannot be processed like this, we need to give the signal with the right output data.

其实两个对应的`addr_valid`信号是开始进行读写控制的启动信号。
可以分别为读写通道写一个状态机。
现在的效果是，在每次写入的时候加入几个周期的间隔就好了，如果连续写入会导致第一位处理出现问题同时`addr_valid`一只持续高位。

## Interim result

完成了一个以反相器为例的通用状态机的测试，在这个模型的构建过程中主要考虑了通用型，所以有一些地方会消耗比较多的周期，看起来并不是性能最优的选择。当然，好处是以后所有的模块都可以使用这个类似的模型进行开发了。


