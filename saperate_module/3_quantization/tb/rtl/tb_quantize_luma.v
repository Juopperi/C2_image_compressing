`timescale 1ns / 1ps

module tb_quantize_luma;

    parameter DATA_WIDTH = 32;
    parameter PIXEL_COUNT = 64;
    parameter MAX_SAMPLES = 100;

    localparam TOTAL_BITS = DATA_WIDTH * PIXEL_COUNT;

    reg clk;
    reg [TOTAL_BITS-1:0] input_flat;
    wire [TOTAL_BITS-1:0] output_flat;

    // DUT 实例化（默认 USE_LUMA = 1）
    quantize_array dut (
        .clk(clk),
        .pixels(input_flat),
        .q_result(output_flat)
    );

    // 时钟生成
    initial clk = 0;
    always #5 clk = ~clk;

    // 内存加载
    reg [DATA_WIDTH-1:0] input_mem  [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] golden_mem [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] output_buf [0:PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] all_output [0:MAX_SAMPLES*PIXEL_COUNT-1];

    integer g, i, diff;
    localparam signed [31:0] ERROR_THRESHOLD = 32'sh00008000;  // Q16.16 中约等于 0.5

    initial begin
        input_flat = 0;
    end

    initial begin
        $display("==== TB: Quantize (Luma) ====");

        $readmemh("input.mem", input_mem);
        $readmemh("expected_luma_output.mem", golden_mem);

        #20;

        for (g = 0; g < MAX_SAMPLES; g = g + 1) begin
            $display("---- Group %0d ----", g);

            // 打包输入
            for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
                input_flat[i*DATA_WIDTH +: DATA_WIDTH] = input_mem[g*PIXEL_COUNT + i];
            end

            #30;



            // 抽出输出
            for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
                output_buf[i] = output_flat[i*DATA_WIDTH +: DATA_WIDTH];
            end

            // 比对输出
            for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
                diff = $signed(output_buf[i]) - $signed(golden_mem[g*PIXEL_COUNT + i]);
                if (diff < 0) diff = -diff;
                if (diff > ERROR_THRESHOLD)
                    $display("Mismatch [%0d]: Got %h, Exp %h, Diff = %0d",
                        i, output_buf[i], golden_mem[g*PIXEL_COUNT + i], diff >>> 16);

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
