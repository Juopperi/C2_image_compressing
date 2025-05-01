
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
