`timescale 1ns / 1ps

module tb_dct_1d_8x1;

    parameter DATA_WIDTH = 32;
    parameter DATA_DEPTH = 8;

    localparam IN_WIDTH = DATA_WIDTH * DATA_DEPTH;     // 256
    localparam COEFF_WIDTH = DATA_WIDTH * 64;          // 2048

    reg clk;
    reg reset_n;
    reg [IN_WIDTH-1:0] data_in;
    wire [IN_WIDTH-1:0] dct_out;

    // 系数文件
    `include "dct_coeffs_1d_1x8.vh"

    // DUT 实例化
    dct_1d_8x1 #(
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

    // 输入、预期输出、记录输出
    reg [DATA_WIDTH-1:0] input_vec  [0:7];
    reg [DATA_WIDTH-1:0] golden_vec [0:7];
    reg [DATA_WIDTH-1:0] out_vec    [0:7];

    integer i;

    initial begin
        $readmemh("row_input_5.mem", input_vec);
        $readmemh("row_output_5.mem", golden_vec);

        // Flatten input_vec into data_in
        for (i = 0; i < 8; i = i + 1) begin
            data_in[i*DATA_WIDTH +: DATA_WIDTH] = input_vec[i];
        end

        // 复位
        reset_n = 0;
        #20;
        reset_n = 1;

        // 等待计算
        #100;

        // 提取输出结果
        for (i = 0; i < 8; i = i + 1) begin
            out_vec[i] = dct_out[i*DATA_WIDTH +: DATA_WIDTH];
        end

        // 写入输出文件
        $writememh("dct_1d_8x1_out_dump.txt", out_vec);

        // 比较输出与 golden
        $display("==== DCT 1D 8x1 比较 ====");
        for (i = 0; i < 8; i = i + 1) begin
            if (out_vec[i] !== golden_vec[i]) begin
                $display("Mismatch at [%0d]: Got %h, Expected %h",
                         i, out_vec[i], golden_vec[i]);
            end else begin
                $display("Match at [%0d]: %h", i, out_vec[i]);
            end
        end

        #1000
        $finish;
    end

endmodule
