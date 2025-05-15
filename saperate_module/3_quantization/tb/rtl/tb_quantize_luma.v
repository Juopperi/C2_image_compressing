`timescale 1ns / 1ps

module tb_quantize_luma;

    parameter DATA_WIDTH = 32;
    parameter PIXEL_COUNT = 64;
    parameter MAX_SAMPLES = 100;

    localparam TOTAL_BITS = DATA_WIDTH * PIXEL_COUNT;
    localparam OUTPUT_WIDTH = 16;
    localparam OUTPUT_BITS = OUTPUT_WIDTH * PIXEL_COUNT;

    reg clk;
    reg rst_n;
    reg start;
    reg [TOTAL_BITS-1:0] input_flat;
    wire [OUTPUT_BITS-1:0] output_flat;
    wire done;

    // DUT 实例化（使用色度量化表）
    quantize_array #(
        .USE_LUMA(1)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        .start(start),
        .pixels(input_flat),
        .q_result(output_flat),
        .done(done)
    );

    // 时钟生成
    initial clk = 0;
    always #5 clk = ~clk;

    // 内存加载
    reg [DATA_WIDTH-1:0] input_mem  [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [OUTPUT_WIDTH-1:0] golden_mem [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [OUTPUT_WIDTH-1:0] output_buf [0:PIXEL_COUNT-1];
    reg [OUTPUT_WIDTH-1:0] all_output [0:MAX_SAMPLES*PIXEL_COUNT-1];

    integer g, i, diff;
    localparam signed [31:0] ERROR_THRESHOLD = 32'sh00008000;  // Q16.16 中约等于 0.5

    initial begin
        input_flat = 0;
        rst_n = 0;
        start = 0;
        
        // 复位释放
        #20 rst_n = 1;
    end

    initial begin
        $display("==== TB: Quantize (Luma) ====");

        $readmemh("input.mem", input_mem);
        $readmemh("expected_luma_output.mem", golden_mem);

        #30; // 等待复位完成

        for (g = 0; g < MAX_SAMPLES; g = g + 1) begin
            $display("---- Group %0d ----", g);

            // 打包输入
            for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
                input_flat[i*DATA_WIDTH +: DATA_WIDTH] = input_mem[g*PIXEL_COUNT + i];
            end

            // 启动处理
            start = 1;
            #10 start = 0;

            // 等待完成信号
            wait(done);
            #10; // 稳定时间

            // 抽出输出
            for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
                output_buf[i] = output_flat[i*OUTPUT_WIDTH +: OUTPUT_WIDTH];
            end

            // 比对输出（注意：现在输出是16位，需要转换比较）
            for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
                // 使用16位输出值与golden值的高16位比较
                diff = $signed({output_buf[i]}) - $signed(golden_mem[g*PIXEL_COUNT + i]);
                if (diff < 0) diff = -diff;
                if (diff > ERROR_THRESHOLD)
                    $display("Mismatch [%0d]: Got %h, Exp %h, Diff = %0d",
                        i, {output_buf[i]}, golden_mem[g*PIXEL_COUNT + i], diff >>> 16);

                all_output[g*PIXEL_COUNT + i] = output_buf[i];
            end

            $display("-----------------------------");
        end

        $writememh("actual_luma_output.mem", all_output);
        $display("==== All Groups Completed ====");
        #100;
        $finish;
    end

endmodule