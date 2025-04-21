`timescale 1ns / 1ns

module tb_jpeg_compression_pipeline;

    parameter DATA_WIDTH = 32;
    parameter INPUT_WIDTH = 8;
    parameter DATA_DEPTH = 8;
    parameter PIXEL_COUNT = DATA_DEPTH * DATA_DEPTH;  // 64 pixels
    parameter MAX_SAMPLES = 100;
    parameter WAIT_CYCLES = 200;  // 调整等待周期以适应新的DCT模块

    // 时钟与复位
    reg clk;
    reg reset_n;

    // DUT 输入输出
    reg [INPUT_WIDTH*PIXEL_COUNT-1:0] r_all;
    reg [INPUT_WIDTH*PIXEL_COUNT-1:0] g_all;
    reg [INPUT_WIDTH*PIXEL_COUNT-1:0] b_all;

    wire [DATA_WIDTH*PIXEL_COUNT-1:0] y_zigzag;
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] cb_zigzag;
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] cr_zigzag;

    // DUT 实例化
    jpeg_compression_pipeline #(
        .DATA_WIDTH(DATA_WIDTH),
        .INPUT_WIDTH(INPUT_WIDTH),
        .DATA_DEPTH(DATA_DEPTH)
    ) dut (
        .clk(clk),
        .reset_n(reset_n),
        .r_all(r_all),
        .g_all(g_all),
        .b_all(b_all),
        .y_zigzag(y_zigzag),
        .cb_zigzag(cb_zigzag),
        .cr_zigzag(cr_zigzag)
    );

    // 时钟
    initial clk = 0;
    always #5 clk = ~clk;

    // 输入信号监控 - 避免直接访问DUT内部信号，防止仿真错误
    // 如需监控，可使用更安全的$monitor指令或适当的绑定

    // 多组内存（从文件加载）
    reg [INPUT_WIDTH-1:0] r_mem [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [INPUT_WIDTH-1:0] g_mem [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [INPUT_WIDTH-1:0] b_mem [0:MAX_SAMPLES*PIXEL_COUNT-1];

    reg [DATA_WIDTH-1:0] y_all  [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cb_all [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cr_all [0:MAX_SAMPLES*PIXEL_COUNT-1];

    reg [DATA_WIDTH-1:0] y_out  [0:PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cb_out [0:PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cr_out [0:PIXEL_COUNT-1];

    integer g, i, cycles;
    reg processing_done;

    initial begin
        $display("==== TB: JPEG Compression Pipeline with New DCT Module ====");

        // 读取 RGB 输入文件
        $readmemh("input_R.mem", r_mem);
        $readmemh("input_G.mem", g_mem);
        $readmemh("input_B.mem", b_mem);

        // 初始化所有输入为确定值，避免未定义值
        reset_n = 0;
        r_all = {(INPUT_WIDTH*PIXEL_COUNT){1'b0}};
        g_all = {(INPUT_WIDTH*PIXEL_COUNT){1'b0}};
        b_all = {(INPUT_WIDTH*PIXEL_COUNT){1'b0}};
        
        // 保持复位状态足够长时间
        #100;
        reset_n = 1;
        #100;

        for (g = 0; g < MAX_SAMPLES; g = g + 1) begin
            $display("---- Processing Group %0d ----", g);
            processing_done = 0;
            
            // 填入一组 8x8 数据
            for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
                r_all[i*INPUT_WIDTH +: INPUT_WIDTH] = r_mem[g*PIXEL_COUNT + i];
                g_all[i*INPUT_WIDTH +: INPUT_WIDTH] = g_mem[g*PIXEL_COUNT + i];
                b_all[i*INPUT_WIDTH +: INPUT_WIDTH] = b_mem[g*PIXEL_COUNT + i];
            end

            // 等待直到所有DCT处理完成
            cycles = 0;
            
            // 方法1：简单等待固定时间
            #(30 * WAIT_CYCLES);
            
            // 方法2已移除：由于不再直接访问内部信号，此方法暂不可用
            // 如需监控处理进度，建议使用$monitor或其他不直接访问内部信号的方法
            
            // 采集输出数据
            for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
                y_out[i]  = y_zigzag[i*DATA_WIDTH +: DATA_WIDTH];
                cb_out[i] = cb_zigzag[i*DATA_WIDTH +: DATA_WIDTH];
                cr_out[i] = cr_zigzag[i*DATA_WIDTH +: DATA_WIDTH];

                y_all[g*PIXEL_COUNT + i]  = y_out[i];
                cb_all[g*PIXEL_COUNT + i] = cb_out[i];
                cr_all[g*PIXEL_COUNT + i] = cr_out[i];
            end

            $display("Group %0d complete after %0d cycles", g, cycles);
            #20;  // 组间间隔
        end

        // 写出所有组输出
        $writememh("actual_y_output.mem",  y_all);
        $writememh("actual_cb_output.mem", cb_all);
        $writememh("actual_cr_output.mem", cr_all);

        $display("==== All %0d Groups Completed ====", MAX_SAMPLES);
        #100;
        $finish;
    end

    // 波形转储（可选，目前禁用以避免仿真器崩溃）
    // initial begin
    //     $dumpfile("tb_jpeg_compression_pipeline.vcd");
    //     $dumpvars(0, tb_jpeg_compression_pipeline);
    // end

endmodule