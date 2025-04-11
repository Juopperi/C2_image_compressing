`timescale 1ns / 1ps

module tb_dct_8muladd;

    parameter DATA_WIDTH = 32;
    parameter DATA_DEPTH = 8;

    reg clk = 0;
    reg reset_n = 0;

    reg  [DATA_WIDTH*DATA_DEPTH-1:0] data_in;
    reg  [DATA_WIDTH*DATA_DEPTH-1:0] coeff;
    wire [DATA_WIDTH-1:0] data_out;

    integer i;

    // 内部 memory 与期望输出
    reg signed [DATA_WIDTH-1:0] data_mem     [0:DATA_DEPTH-1];
    reg signed [DATA_WIDTH-1:0] coeff_mem    [0:DATA_DEPTH-1];
    reg signed [DATA_WIDTH-1:0] expected_mem [0:0];  // 用作文件读取容器
    reg signed [DATA_WIDTH-1:0] expected_out;

    // 实例化待测模块
    dct_8muladd #(
        .DATA_WIDTH(DATA_WIDTH),
        .DATA_DEPTH(DATA_DEPTH)
    ) uut (
        .clk(clk),
        .reset_n(reset_n),
        .data_in(data_in),
        .coeff(coeff),
        .data_out(data_out)
    );

    // 时钟生成
    always #5 clk = ~clk;

    initial begin
        $display(">>> Starting DCT 8-MulAdd testbench...");

        // 读取输入和期望输出
        $readmemh("stim_data.txt", data_mem);
        $readmemh("stim_coeff.txt", coeff_mem);
        $readmemh("expected_out.txt", expected_mem);
        expected_out = expected_mem[0];

        // 打包 data_in 和 coeff 向量
        data_in = 0;
        coeff   = 0;
        for (i = 0; i < DATA_DEPTH; i = i + 1) begin
            data_in = data_in | (data_mem[i] << (i * DATA_WIDTH));
            coeff   = coeff   | (coeff_mem[i] << (i * DATA_WIDTH));
        end

        // 初始化复位
        #2  reset_n = 0;
        #20 reset_n = 1;

        // 等待结果稳定
        #20;

        // 输出检查
        $display("data_out (sim)  = %0d (0x%08x)", data_out, data_out);
        $display("expected_output = %0d (0x%08x)", expected_out, expected_out);

        if (data_out === expected_out) begin
            $display("✅ TEST PASSED!");
        end else begin
            $display("❌ TEST FAILED!");
        end

        #1000000;
        $finish;
    end

endmodule
