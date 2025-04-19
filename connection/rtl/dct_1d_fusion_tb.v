module dct_1d_fusion_tb;
    
    // 参数定义
    parameter DATA_WIDTH = 16;
    parameter CLK_PERIOD = 10; // 时钟周期 10ns (100MHz)
    
    // 测试信号
    reg clk;
    reg reset_n;
    reg start;
    reg mode_sel;
    
    // 输入数据
    reg [DATA_WIDTH-1:0] x0, x1, x2, x3, x4, x5, x6, x7;
    
    // 系数矩阵 - 实际使用中应该是从ROM加载
    reg [DATA_WIDTH*64-1:0] coeff_vector;
    
    // 输出数据
    wire [DATA_WIDTH-1:0] y0, y1, y2, y3, y4, y5, y6, y7;
    wire valid;
    
    // 被测模块实例化
    dct_1d_fusion #(
        .DATA_WIDTH(DATA_WIDTH)
    ) dut (
        .clk(clk),
        .reset_n(reset_n),
        .start(start),
        .mode_sel(mode_sel),
        .x0(x0), .x1(x1), .x2(x2), .x3(x3),
        .x4(x4), .x5(x5), .x6(x6), .x7(x7),
        .coeff_vector(coeff_vector),
        .y0(y0), .y1(y1), .y2(y2), .y3(y3),
        .y4(y4), .y5(y5), .y6(y6), .y7(y7),
        .valid(valid)
    );
    
    // 时钟生成
    initial begin
        clk = 0;
        forever #(CLK_PERIOD/2) clk = ~clk;
    end
    
    // 测试向量加载和验证函数
    task load_test_vector;
        input [DATA_WIDTH-1:0] in0, in1, in2, in3, in4, in5, in6, in7;
        begin
            x0 = in0; x1 = in1; x2 = in2; x3 = in3;
            x4 = in4; x5 = in5; x6 = in6; x7 = in7;
        end
    endtask
    
    // 测试序列
    initial begin
        // 初始化
        reset_n = 0;
        start = 0;
        mode_sel = 0;
        load_test_vector(0, 0, 0, 0, 0, 0, 0, 0);
        
        // 设置DCT系数矩阵（简化版本，实际应基于DCT定义计算）
        // 这里使用了简化的系数值，实际应用中应该使用标准的DCT系数
        coeff_vector = {
            16'd100, 16'd100, 16'd100, 16'd100, 16'd100, 16'd100, 16'd100, 16'd100,
            16'd138, 16'd117, 16'd50, 16'd-50, 16'd-117, 16'd-138, 16'd-92, 16'd-20,
            16'd127, 16'd52, 16'd-52, 16'd-127, 16'd-52, 16'd127, 16'd52, 16'd-127,
            16'd92, 16'd-20, 16'd-138, 16'd-50, 16'd117, 16'd100, 16'd-100, 16'd-117,
            16'd70, 16'd-70, 16'd-70, 16'd70, 16'd70, 16'd-70, 16'd-70, 16'd70,
            16'd38, 16'd-92, 16'd38, 16'd92, 16'd-92, 16'd-38, 16'd92, 16'd-38,
            16'd20, 16'd-92, 16'd117, 16'd-100, 16'd20, 16'd92, 16'd-138, 16'd100,
            16'd8, 16'd-38, 16'd70, 16'd-92, 16'd100, 16'd-92, 16'd70, 16'd-38
        };
        
        // 复位后释放
        #(CLK_PERIOD*2);
        reset_n = 1;
        #(CLK_PERIOD*2);
        
        // 测试1: 使用Chen算法 (mode_sel = 0)
        $display("测试1: 使用Chen算法模式");
        mode_sel = 0;
        
        // 测试 - 斜坡信号
        load_test_vector(16'd10, 16'd20, 16'd30, 16'd40, 16'd50, 16'd60, 16'd70, 16'd80);
        start = 1;
        #(CLK_PERIOD);
        start = 0;
        
        // 等待结果
        wait(valid);
        #(CLK_PERIOD);
        $display("Chen算法输出: y0=%d, y1=%d, y2=%d, y3=%d, y4=%d, y5=%d, y6=%d, y7=%d", 
                  y0, y1, y2, y3, y4, y5, y6, y7);
        
        // 测试2: 使用矩阵乘法 (mode_sel = 1)
        $display("测试2: 使用矩阵乘法模式");
        #(CLK_PERIOD*2);
        mode_sel = 1;
        
        // 相同的测试向量
        load_test_vector(16'd10, 16'd20, 16'd30, 16'd40, 16'd50, 16'd60, 16'd70, 16'd80);
        start = 1;
        #(CLK_PERIOD);
        start = 0;
        
        // 等待结果
        wait(valid);
        #(CLK_PERIOD);
        $display("矩阵乘法输出: y0=%d, y1=%d, y2=%d, y3=%d, y4=%d, y5=%d, y6=%d, y7=%d", 
                  y0, y1, y2, y3, y4, y5, y6, y7);
        
        // 测试3: 再次测试不同的输入
        $display("测试3: 脉冲信号输入");
        #(CLK_PERIOD*2);
        mode_sel = 0; // 切换回Chen算法
        
        // 脉冲信号测试
        load_test_vector(16'd100, 16'd0, 16'd0, 16'd0, 16'd0, 16'd0, 16'd0, 16'd0);
        start = 1;
        #(CLK_PERIOD);
        start = 0;
        
        // 等待结果
        wait(valid);
        #(CLK_PERIOD);
        $display("脉冲信号Chen算法输出: y0=%d, y1=%d, y2=%d, y3=%d, y4=%d, y5=%d, y6=%d, y7=%d", 
                  y0, y1, y2, y3, y4, y5, y6, y7);
        
        // 完成测试
        #(CLK_PERIOD*10);
        $display("测试完成");
        $finish;
    end
    
    // 可选: 波形导出
    initial begin
        $dumpfile("dct_1d_fusion_tb.vcd");
        $dumpvars(0, dct_1d_fusion_tb);
    end

endmodule 