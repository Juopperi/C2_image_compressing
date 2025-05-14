`timescale 1ns / 1ps

module tb_rgb2ycbcr_container;

    parameter DATA_WIDTH_IN  = 8;
    parameter DATA_WIDTH_OUT = 32;
    parameter PIXEL_COUNT = 64;
    parameter MAX_SAMPLES = 100;

    localparam IN_TOTAL_BITS  = DATA_WIDTH_IN  * PIXEL_COUNT;
    localparam OUT_TOTAL_BITS = DATA_WIDTH_OUT * PIXEL_COUNT;

    reg clk;
    reg rst;                              // 新增：复位信号
    reg start;                            // 新增：启动信号
    reg [IN_TOTAL_BITS-1:0] R_flat, G_flat, B_flat;
    wire [OUT_TOTAL_BITS-1:0] Y_flat, Cb_flat, Cr_flat;
    wire done;                            // 新增：完成信号

    // DUT 实例化 - 更新接口
    rgb2ycbcr_container #(
        .fixed_point_length(DATA_WIDTH_OUT),
        .input_width(DATA_WIDTH_IN),
        .PIXEL_COUNT(PIXEL_COUNT),
        .CORE_COUNT(8)                    // 设置为8个计算核心
    ) dut (
        .clk(clk),
        .rst(rst),                        // 添加复位信号
        .start(start),                    // 添加启动信号
        .r_all(R_flat),
        .g_all(G_flat),
        .b_all(B_flat),
        .y_all(Y_flat),
        .cb_all(Cb_flat),
        .cr_all(Cr_flat),
        .done(done)                       // 添加完成信号
    );

    // 时钟生成
    initial clk = 0;
    always #5 clk = ~clk;

    // 内存数据
    reg [DATA_WIDTH_IN-1:0] R_mem   [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [DATA_WIDTH_IN-1:0] G_mem   [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [DATA_WIDTH_IN-1:0] B_mem   [0:MAX_SAMPLES*PIXEL_COUNT-1];

    reg [DATA_WIDTH_OUT-1:0] Y_golden  [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [DATA_WIDTH_OUT-1:0] Cb_golden [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [DATA_WIDTH_OUT-1:0] Cr_golden [0:MAX_SAMPLES*PIXEL_COUNT-1];

    reg [DATA_WIDTH_OUT-1:0] Y_out     [0:PIXEL_COUNT-1];
    reg [DATA_WIDTH_OUT-1:0] Cb_out    [0:PIXEL_COUNT-1];
    reg [DATA_WIDTH_OUT-1:0] Cr_out    [0:PIXEL_COUNT-1];

    reg [DATA_WIDTH_OUT-1:0] Y_all     [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [DATA_WIDTH_OUT-1:0] Cb_all    [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [DATA_WIDTH_OUT-1:0] Cr_all    [0:MAX_SAMPLES*PIXEL_COUNT-1];

    integer g, i, diff;
    localparam signed [31:0] ERROR_THRESHOLD = 32'sh00008000;  // Q16.16 的 0.5

    // 初始化阶段：避免输入为 X/U
    initial begin
        R_flat = 0;
        G_flat = 0;
        B_flat = 0;
        rst = 1;                          // 初始复位
        start = 0;                        // 初始不启动
        #20;
        rst = 0;                          // 释放复位
    end

    initial begin
        $display("==== TB: RGB to YCbCr Container ====");

        $readmemh("input_R.mem", R_mem);
        $readmemh("input_G.mem", G_mem);
        $readmemh("input_B.mem", B_mem);
        $readmemh("expected_Y_output.mem", Y_golden);
        $readmemh("expected_Cb_output.mem", Cb_golden);
        $readmemh("expected_Cr_output.mem", Cr_golden);

        // 等待初始复位完成
        #30;

        for (g = 0; g < MAX_SAMPLES; g = g + 1) begin
            $display("---- Group %0d ----", g);

            // 打包输入
            for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
                R_flat[i*DATA_WIDTH_IN +: DATA_WIDTH_IN] = R_mem[g*PIXEL_COUNT + i];
                G_flat[i*DATA_WIDTH_IN +: DATA_WIDTH_IN] = G_mem[g*PIXEL_COUNT + i];
                B_flat[i*DATA_WIDTH_IN +: DATA_WIDTH_IN] = B_mem[g*PIXEL_COUNT + i];
            end

            // 启动转换
            @(posedge clk);
            start = 1;

            // 等待转换完成
            @(posedge done);
            // 再等一个周期确保输出稳定
            @(posedge clk);
            @(posedge clk);
            start = 0;

            // 抽出输出结果
            for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
                Y_out[i]  = Y_flat[i*DATA_WIDTH_OUT +: DATA_WIDTH_OUT];
                Cb_out[i] = Cb_flat[i*DATA_WIDTH_OUT +: DATA_WIDTH_OUT];
                Cr_out[i] = Cr_flat[i*DATA_WIDTH_OUT +: DATA_WIDTH_OUT];
            end

            // 比对 & 收集
            for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
                diff = $signed(Y_out[i]) - $signed(Y_golden[g*PIXEL_COUNT + i]);
                if (diff < 0) diff = -diff;
                if (diff > ERROR_THRESHOLD)
                    $display("Y Mismatch [%0d]: Got %h, Exp %h, Diff = %0d", i, Y_out[i], Y_golden[g*PIXEL_COUNT + i], diff >> 16);

                diff = $signed(Cb_out[i]) - $signed(Cb_golden[g*PIXEL_COUNT + i]);
                if (diff < 0) diff = -diff;
                if (diff > ERROR_THRESHOLD)
                    $display("Cb Mismatch [%0d]: Got %h, Exp %h, Diff = %0d", i, Cb_out[i], Cb_golden[g*PIXEL_COUNT + i], diff >> 16);

                diff = $signed(Cr_out[i]) - $signed(Cr_golden[g*PIXEL_COUNT + i]);
                if (diff < 0) diff = -diff;
                if (diff > ERROR_THRESHOLD)
                    $display("Cr Mismatch [%0d]: Got %h, Exp %h, Diff = %0d", i, Cr_out[i], Cr_golden[g*PIXEL_COUNT + i], diff >> 16);

                // 保存结果
                Y_all[g*PIXEL_COUNT + i]  = Y_out[i];
                Cb_all[g*PIXEL_COUNT + i] = Cb_out[i];
                Cr_all[g*PIXEL_COUNT + i] = Cr_out[i];
            end

            $display("-----------------------------");
            #20;
        end

        // 写出结果
        $writememh("actual_Y_output.mem",  Y_all);
        $writememh("actual_Cb_output.mem", Cb_all);
        $writememh("actual_Cr_output.mem", Cr_all);

        $display("==== All Groups Completed ====");
        #100;
        $finish;
    end

endmodule