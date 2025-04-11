`timescale 1ns / 1ps

module tb_dct_1d_8x8_col;

    parameter DATA_WIDTH = 32;
    localparam TOTAL_BITS = DATA_WIDTH * 64;

    reg clk;
    reg reset_n;

    // 系数文件包含
    `include "dct_coeffs_1d_8x8.vh"

    reg  [TOTAL_BITS-1:0] data_in;
    wire [TOTAL_BITS-1:0] dct_out;

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
    always #5 clk = ~clk;

    reg [DATA_WIDTH-1:0] input_mem  [0:63];  // row_dct_intermediate.mem
    reg [DATA_WIDTH-1:0] golden_mem [0:63];  // final_dct_result.mem
    reg [DATA_WIDTH-1:0] out_mem    [0:63];

    integer i, row, col;
    integer diff;
    localparam signed [31:0] error_threshold = 32'sh00008000;  // 0.5 Q16.16

    initial begin
        $display("==== TB: dct_1d_8x8 (column DCT test, with transpose) ====");

        // 加载原始中间结果（行方向输出）
        $readmemh("row_dct_intermediate.mem", input_mem);
        $readmemh("final_dct_result.mem", golden_mem);

        // 输入转置（列方向变为“行”方向）
        for (row = 0; row < 8; row = row + 1)
            for (col = 0; col < 8; col = col + 1)
                data_in[(row*8 + col)*DATA_WIDTH +: DATA_WIDTH] = input_mem[(col*8 + row)];

        // 复位
        reset_n = 0;
        #20;
        reset_n = 1;

        // 等待输出稳定
        #100;

        // 输出转置回来（恢复为正常矩阵顺序）
        for (row = 0; row < 8; row = row + 1)
            for (col = 0; col < 8; col = col + 1)
                out_mem[row*8 + col] = dct_out[(col*8 + row)*DATA_WIDTH +: DATA_WIDTH];

        // 输出保存
        $writememh("dct_1d_8x8_col_out_dump.txt", out_mem);

        // 比对
        $display("==== Comparing column DCT output with final 2D DCT result ====");
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

        $display("==== Test Completed ====");
        #10000;
        $finish;
    end

endmodule
