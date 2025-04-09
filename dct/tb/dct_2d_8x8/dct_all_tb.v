`timescale 1ns / 1ps

module tb_dct_all;

    parameter DATA_WIDTH = 32;
    parameter N = 8;
    localparam TOTAL_BITS = DATA_WIDTH * N * N;

    reg clk;
    reg reset_n;

    reg  [DATA_WIDTH-1:0] input_mem [0:63];
    reg  [DATA_WIDTH-1:0] golden_mem [0:63];
    reg  [DATA_WIDTH-1:0] out_mem    [0:63];

    reg  [TOTAL_BITS-1:0] data_in_flat;
    wire [TOTAL_BITS-1:0] data_out_flat;

    wire [DATA_WIDTH*64-1:0] dct_coeffs;
    `include "dct_coeffs.vh"

    integer i;

    // DUT: dct_2d_8x8
    dct_2d_8x8 #(
        .DATA_WIDTH(DATA_WIDTH),
        .DATA_DEPTH(N)
    ) dut_2d (
        .clk(clk),
        .reset_n(reset_n),
        .data_in_matrix(data_in_flat),
        .data_out_matrix(data_out_flat)
    );

    // DUT: dct_1d_8x8
    wire [DATA_WIDTH*64-1:0] dct_1d_8x8_out;
    dct_1d_8x8 #(
        .DATA_WIDTH(DATA_WIDTH)
    ) dut_1d_8x8 (
        .clk(clk),
        .reset_n(reset_n),
        .data_in(data_in_flat),
        .coeff_vector(dct_coeffs),
        .dct_out(dct_1d_8x8_out)
    );

    // DUT: dct_1d_8x1 (使用 input_mem[0..7] 和 dct_coeffs 第 0 行)
    wire [DATA_WIDTH*8-1:0] dct_1d_8x1_out;
    wire [DATA_WIDTH*8-1:0] input_1d;
    wire [DATA_WIDTH*8-1:0] coeff_1d;

    assign input_1d = {
        input_mem[0], input_mem[1], input_mem[2], input_mem[3],
        input_mem[4], input_mem[5], input_mem[6], input_mem[7]
    };

    assign coeff_1d = dct_coeffs[0*DATA_WIDTH*8 +: DATA_WIDTH*8];

    dct_1d_8x1 #(
        .DATA_WIDTH(DATA_WIDTH)
    ) dut_1d_8x1 (
        .clk(clk),
        .reset_n(reset_n),
        .data_in(input_1d),
        .coeff_vector(coeff_1d),
        .dct_out(dct_1d_8x1_out)
    );

    // Clock generation
    initial clk = 0;
    always #5 clk = ~clk; // 100MHz

    initial begin
        $readmemh("input_matrix.mem", input_mem);
        $readmemh("final_dct_result.mem", golden_mem);

        // 组装扁平化输入
        for (i = 0; i < 64; i = i + 1) begin
            data_in_flat[i*DATA_WIDTH +: DATA_WIDTH] = input_mem[i];
        end

        // Reset
        reset_n = 0;
        #20;
        reset_n = 1;

        #200;

        // 拆解 dct_2d_8x8 输出供写入文件
        for (i = 0; i < 64; i = i + 1) begin
            out_mem[i] = data_out_flat[i*DATA_WIDTH +: DATA_WIDTH];
        end
        $writememh("dct_out_2d.mem", out_mem);

        // 检查 2D 输出和 golden
        $display("==== Checking dct_2d_8x8 ====");
        for (i = 0; i < 64; i = i + 1) begin
            if (out_mem[i] !== golden_mem[i]) begin
                $display("Mismatch at [%0d]: Got %h, Expected %h", i, out_mem[i], golden_mem[i]);
            end else begin
                $display("Match at [%0d]: %h", i, out_mem[i]);
            end
        end

        #100;
        $finish;
    end

endmodule
