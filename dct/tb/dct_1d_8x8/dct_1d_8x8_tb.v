`timescale 1ns / 1ps

module tb_dct_1d_8x8;

    parameter DATA_WIDTH = 32;
    localparam TOTAL_BITS = DATA_WIDTH * 64;

    reg clk;
    reg reset_n;

    // 系数文件包含（你已经用 .vh 定义了它）
    `include "dct_coeffs_1d_8x8.vh"

    reg  [TOTAL_BITS-1:0] data_in;
    wire [TOTAL_BITS-1:0] dct_out;

    // DUT 实例
    dct_1d_8x8 #(
        .DATA_WIDTH(DATA_WIDTH)
    ) dut (
        .clk(clk),
        .reset_n(reset_n),
        .data_in(data_in),
        .coeff_vector(dct_coeffs),
        .dct_out(dct_out)
    );

    // 时钟生成
    initial clk = 0;
    always #5 clk = ~clk;  // 100MHz

    // 输入输出内存
    reg [DATA_WIDTH-1:0] input_mem [0:63];
    reg [DATA_WIDTH-1:0] golden_mem [0:63];
    reg [DATA_WIDTH-1:0] out_mem    [0:63];

    integer i;
    integer diff;
    localparam signed [31:0] error_threshold = 32'sh00008000;  // Q16.16 中的 0.5

    initial begin
        $display("==== TB: dct_1d_8x8 ====");

        // 加载输入和期望输出
        $readmemh("input_matrix.mem", input_mem);
        $readmemh("row_dct_intermediate.mem", golden_mem);

        // 展平输入为 2048-bit 总线
        for (i = 0; i < 64; i = i + 1) begin
            data_in[i*DATA_WIDTH +: DATA_WIDTH] = input_mem[i];
        end

        // 复位阶段
        reset_n = 0;
        #20;
        reset_n = 1;

        // 等待输出稳定（组合或 1~2 周期同步）
        #100;

        // 抽取输出数据
        for (i = 0; i < 64; i = i + 1) begin
            out_mem[i] = dct_out[i*DATA_WIDTH +: DATA_WIDTH];
        end

        // 输出 dump 文件
        $writememh("dct_1d_8x8_out_dump.txt", out_mem);

        // 比对输出与 golden
        $display("==== Comparing output with golden (tolerance = 0.5 Q16.16) ====");
        for (i = 0; i < 64; i = i + 1) begin
            diff = $signed(out_mem[i]) - $signed(golden_mem[i]);
            if (diff < 0) diff = -diff;

            if (diff > error_threshold) begin
                $display("Mismatch at [%0d]: Got %h, Expected %h, Diff = %0d", 
                         i, out_mem[i], golden_mem[i], diff/2**16);
            end else begin
                $display("Match at [%0d]: Got %h, Expected %h, Diff = %0d", 
                         i, out_mem[i], golden_mem[i], diff/2**16);
            end
        end

        $display("==== Test completed ====");
        #10000;
        $finish;
    end

endmodule
