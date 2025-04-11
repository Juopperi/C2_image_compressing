`timescale 1ns / 1ps

module tb_dct_2d_8x8_multi;

    parameter DATA_WIDTH = 32;
    parameter DATA_DEPTH = 8;
    localparam TOTAL_BITS = DATA_WIDTH * DATA_DEPTH * DATA_DEPTH;
    localparam TOTAL_WORDS = 64;
    localparam MAX_SAMPLES = 1000;  // 固定 1000 组

    reg clk;
    reg reset_n;
    reg  [TOTAL_BITS-1:0] data_in_matrix;
    wire [TOTAL_BITS-1:0] data_out_matrix;

    // DUT 实例
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
    always #5 clk = ~clk;

    // 输入输出内存
    reg [DATA_WIDTH-1:0] input_mem  [0:MAX_SAMPLES*TOTAL_WORDS-1];
    reg [DATA_WIDTH-1:0] golden_mem [0:MAX_SAMPLES*TOTAL_WORDS-1];
    reg [DATA_WIDTH-1:0] out_mem    [0:TOTAL_WORDS-1];

    integer i, g, diff;

    localparam signed [31:0] error_threshold = 32'sh00008000;  // Q16.16 格式下的 0.5

    initial begin
        $display("==== TB: dct_2d_8x8 Multi-Group Mode ====");

        // 读取输入输出文件
        $readmemh("multi_input.mem", input_mem);
        $readmemh("multi_output.mem", golden_mem);

        // 遍历每一组测试
        for (g = 0; g < MAX_SAMPLES; g = g + 1) begin
            $display("---- Group %0d ----", g);

            // 装载输入数据
            for (i = 0; i < TOTAL_WORDS; i = i + 1)
                data_in_matrix[i*DATA_WIDTH +: DATA_WIDTH] = input_mem[g*TOTAL_WORDS + i];

            // 复位
            reset_n = 0;
            #20;
            reset_n = 1;

            // 等待数据输出稳定
            #100;

            // 获取输出结果
            for (i = 0; i < TOTAL_WORDS; i = i + 1)
                out_mem[i] = data_out_matrix[i*DATA_WIDTH +: DATA_WIDTH];

            // 可选：保存当前组输出
            $writememh($sformatf("dct_2d_out_group%0d.mem", g), out_mem);

            // 结果比对
            for (i = 0; i < TOTAL_WORDS; i = i + 1) begin
                diff = $signed(out_mem[i]) - $signed(golden_mem[g*TOTAL_WORDS + i]);
                if (diff < 0) diff = -diff;

                if (diff > error_threshold) begin
                    $display("Mismatch at [%0d]: Got %h, Expected %h, Diff = %0d",
                             i, out_mem[i], golden_mem[g*TOTAL_WORDS + i], diff >> 16);
                end else begin
                    $display("Match at [%0d]: Got %h, Expected %h, Diff = %0d",
                             i, out_mem[i], golden_mem[g*TOTAL_WORDS + i], diff >> 16);
                end
            end

            $display("-----------------------------");
            #20;
        end

        $display("==== All Groups Completed ====");
        #1000000;
        $finish;
    end

endmodule
