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

    // 多组内存（从文件加载）
    reg [INPUT_WIDTH-1:0] r_mem [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [INPUT_WIDTH-1:0] g_mem [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [INPUT_WIDTH-1:0] b_mem [0:MAX_SAMPLES*PIXEL_COUNT-1];

    // 期望输出数据
    reg [DATA_WIDTH-1:0] y_expected [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cb_expected [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cr_expected [0:MAX_SAMPLES*PIXEL_COUNT-1];

    // 当前组处理结果
    reg [DATA_WIDTH-1:0] y_out [0:PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cb_out [0:PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cr_out [0:PIXEL_COUNT-1];

    // 所有组处理结果
    reg [DATA_WIDTH-1:0] y_all [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cb_all [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cr_all [0:MAX_SAMPLES*PIXEL_COUNT-1];

    // 错误比较阈值
    localparam signed [31:0] ERROR_THRESHOLD = 32'sh00008000;  // Q16.16 的 0.5
    integer g, i, cycles, diff;

    // 初始化输入为 0，避免未定义值
    initial begin
        r_all = {(INPUT_WIDTH*PIXEL_COUNT){1'b0}};
        g_all = {(INPUT_WIDTH*PIXEL_COUNT){1'b0}};
        b_all = {(INPUT_WIDTH*PIXEL_COUNT){1'b0}};
        reset_n = 0;
    end

    initial begin
        $display("==== TB: JPEG Compression Pipeline with New DCT Module ====");

        // 读取输入文件
        $readmemh("input_R.mem", r_mem);
        $readmemh("input_G.mem", g_mem);
        $readmemh("input_B.mem", b_mem);

        // 读取期望输出文件
        $readmemh("expected_Y_output.mem", y_expected);
        $readmemh("expected_Cb_output.mem", cb_expected);
        $readmemh("expected_Cr_output.mem", cr_expected);
        
        // 保持复位状态足够长时间
        #100;
        reset_n = 1;
        #100;

        for (g = 0; g < MAX_SAMPLES; g = g + 1) begin
            $display("---- Processing Group %0d ----", g);
            
            // 填入一组 8x8 数据
            for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
                r_all[i*INPUT_WIDTH +: INPUT_WIDTH] = r_mem[g*PIXEL_COUNT + i];
                g_all[i*INPUT_WIDTH +: INPUT_WIDTH] = g_mem[g*PIXEL_COUNT + i];
                b_all[i*INPUT_WIDTH +: INPUT_WIDTH] = b_mem[g*PIXEL_COUNT + i];
            end

            // 等待直到处理完成
            // 简化：固定等待时间，WAIT_CYCLES 根据设计延迟估计
            #(30 * WAIT_CYCLES);
            
            // 采集输出数据
            for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
                y_out[i]  = y_zigzag[i*DATA_WIDTH +: DATA_WIDTH];
                cb_out[i] = cb_zigzag[i*DATA_WIDTH +: DATA_WIDTH];
                cr_out[i] = cr_zigzag[i*DATA_WIDTH +: DATA_WIDTH];
            end

            // 比较输出结果与期望值
            for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
                // 检查Y通道
                diff = $signed(y_out[i]) - $signed(y_expected[g*PIXEL_COUNT + i]);
                if (diff < 0) diff = -diff;
                if (diff > ERROR_THRESHOLD)
                    $display("Y Mismatch [%0d]: Got %h, Exp %h, Diff = %0d", 
                             i, y_out[i], y_expected[g*PIXEL_COUNT + i], diff >> 16);

                // 检查Cb通道
                diff = $signed(cb_out[i]) - $signed(cb_expected[g*PIXEL_COUNT + i]);
                if (diff < 0) diff = -diff;
                if (diff > ERROR_THRESHOLD)
                    $display("Cb Mismatch [%0d]: Got %h, Exp %h, Diff = %0d", 
                             i, cb_out[i], cb_expected[g*PIXEL_COUNT + i], diff >> 16);

                // 检查Cr通道
                diff = $signed(cr_out[i]) - $signed(cr_expected[g*PIXEL_COUNT + i]);
                if (diff < 0) diff = -diff;
                if (diff > ERROR_THRESHOLD)
                    $display("Cr Mismatch [%0d]: Got %h, Exp %h, Diff = %0d", 
                             i, cr_out[i], cr_expected[g*PIXEL_COUNT + i], diff >> 16);

                // 保存结果到全局数组
                y_all[g*PIXEL_COUNT + i]  = y_out[i];
                cb_all[g*PIXEL_COUNT + i] = cb_out[i];
                cr_all[g*PIXEL_COUNT + i] = cr_out[i];
            end

            $display("Group %0d complete", g);
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

    // 波形转储（可选）
    // initial begin
    //     $dumpfile("tb_jpeg_compression_pipeline.vcd");
    //     $dumpvars(0, tb_jpeg_compression_pipeline);
    // end

endmodule