`timescale 1ns / 1ps

module tb_dct_2d_8x8;

    parameter DATA_WIDTH = 32;
    parameter DATA_DEPTH = 8;
    localparam TOTAL_BITS = DATA_WIDTH * DATA_DEPTH * DATA_DEPTH;

    reg clk;
    reg reset_n;
    reg  [TOTAL_BITS-1:0] data_in_matrix;
    wire [TOTAL_BITS-1:0] data_out_matrix;

    // 实例化 DUT
    dct_2d_8x8 #(
        .DATA_WIDTH(DATA_WIDTH),
        .DATA_DEPTH(DATA_DEPTH)
    ) dut (
        .clk(clk),
        .reset_n(reset_n),
        .data_in_matrix(data_in_matrix),
        .data_out_matrix(data_out_matrix)
    );

    // 时钟生成
    initial clk = 0;
    always #5 clk = ~clk;  // 100MHz

    // 内存阵列
    reg [DATA_WIDTH-1:0] input_mem  [0:63];
    reg [DATA_WIDTH-1:0] golden_mem [0:63];
    reg [DATA_WIDTH-1:0] out_mem    [0:63];

    integer i;
    integer diff;
    localparam signed [31:0] error_threshold = 32'sh00008000;  // Q16.16 中的 0.5

    initial begin
        $display("==== TB: dct_2d_8x8 ====");

        // 读取输入和golden数据
        $readmemh("input_matrix.mem", input_mem);
        $readmemh("final_dct_result.mem", golden_mem);

        // 数据展开（64×32bit -> data_in_matrix）
        for (i = 0; i < 64; i = i + 1) begin
            data_in_matrix[i*DATA_WIDTH +: DATA_WIDTH] = input_mem[i];
        end

        // 复位阶段
        reset_n = 0;
        #20;
        reset_n = 1;

        // 等待逻辑稳定（流水结构通常等待多个周期）
        #180;

        // 抽取输出
        for (i = 0; i < 64; i = i + 1) begin
            out_mem[i] = data_out_matrix[i*DATA_WIDTH +: DATA_WIDTH];
        end

        // 输出保存
        $writememh("dct_2d_out_dump.txt", out_mem);

        // 比较结果
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

        $display("==== Test Completed ====");
        #10000;
        $finish;
    end

endmodule
