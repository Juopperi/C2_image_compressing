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
    reg signed [DATA_WIDTH-1:0] data_mem [0:DATA_DEPTH-1];
    reg signed [DATA_WIDTH-1:0] coeff_mem[0:DATA_DEPTH-1];
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

        // 加载激励文件（注意路径和格式）
        $readmemh("stim_data.txt", data_mem);
        $readmemh("stim_coeff.txt", coeff_mem);
        $readmemh("expected_out.txt", expected_out);

        // 打包 data_in 和 coeff
        data_in = 0;
        coeff   = 0;
        for (i = 0; i < DATA_DEPTH; i = i + 1) begin
            data_in = data_in | (data_mem[i] << (i * DATA_WIDTH));
            coeff   = coeff   | (coeff_mem[i] << (i * DATA_WIDTH));
        end

        // 初始化
        #2  reset_n = 0;
        #20 reset_n = 1;

        // 等待 1~2 个周期数据稳定
        #20;

        // 检查输出
        $display("data_out (sim)  = %0d", data_out);
        $display("expected_output = %0d", expected_out);
        if (data_out === expected_out) begin
            $display("✅ TEST PASSED!");
        end else begin
            $display("❌ TEST FAILED!");
        end

        #10;
        $finish;
    end

endmodule
