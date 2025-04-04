`timescale 1ns/1ps

module tb_dct_1d;

    // 参数定义
    parameter DATA_WIDTH = 32;
    parameter DATA_DEPTH = 8;
    parameter VECTOR_WIDTH = DATA_WIDTH * DATA_DEPTH;

    // 信号定义
    logic clk;
    logic reset_n;
    logic [VECTOR_WIDTH-1:0] data_in;
    logic [VECTOR_WIDTH-1:0] coeff;
    logic [VECTOR_WIDTH-1:0] data_out;

    // 时钟生成
    initial clk = 0;
    always #5 clk = ~clk;  // 100MHz 时钟

    // DUT 实例化
    dct_1d #(
        .DATA_WIDTH(DATA_WIDTH),
        .DATA_DEPTH(DATA_DEPTH)
    ) dut (
        .clk(clk),
        .reset_n(reset_n),
        .data_in(data_in),
        .coeff(coeff),
        .data_out(data_out)
    );

    // 仿真过程
    initial begin
        // 初始化
        reset_n = 0;
        data_in = '0;
        coeff   = '0;

        #20;
        reset_n = 1;

        // 输入激励：8 个数据 * 32bit，每个数据为 {16'hdata, 16'hcoeff}
        data_in = {
            32'sd10, 32'sd20, 32'sd30, 32'sd40,
            32'sd50, 32'sd60, 32'sd70, 32'sd80
        };

        coeff = {
            32'sd1, 32'sd2, 32'sd3, 32'sd4,
            32'sd5, 32'sd6, 32'sd7, 32'sd8
        };

        #20;

        // 观察输出
        $display("Time = %0t ns", $time);
        $display("Data Out:");
        for (int i = 0; i < DATA_DEPTH; i++) begin
            $display("[%0d] = %0d", i, data_out[i*DATA_WIDTH +: DATA_WIDTH]);
        end

        #20;
        $finish;
    end

endmodule