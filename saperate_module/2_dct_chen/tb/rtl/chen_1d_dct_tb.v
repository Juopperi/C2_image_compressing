`timescale 1ns / 1ps

module tb_chen_1d_dct;

    parameter DATA_WIDTH = 32;
    localparam TOTAL_BITS = DATA_WIDTH * 8;
    localparam TOTAL_WORDS = 8;
    localparam MAX_SAMPLES = 100;  // 固定 1000 组

    reg clk;
    reg rst_n;
    reg start;
    reg [TOTAL_BITS-1:0] x;
    wire [TOTAL_BITS-1:0] y;
    wire valid;

    // DUT 实例
    chen_1d_dct #(
        .DATA_WIDTH(DATA_WIDTH)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        .start(start),
        .x(x),
        .y(y),
        .valid(valid)
    );

    // 时钟生成
    initial clk = 0;
    always #5 clk = ~clk;

    // 输入输出内存
    reg [DATA_WIDTH-1:0] input_mem  [0:MAX_SAMPLES*TOTAL_WORDS-1];
    reg [DATA_WIDTH-1:0] golden_mem [0:MAX_SAMPLES*TOTAL_WORDS-1];
    reg [DATA_WIDTH-1:0] out_mem    [0:MAX_SAMPLES*TOTAL_WORDS-1];

    integer i, g, diff, f;
    integer error_count = 0;
    reg test_passed;

    localparam signed [31:0] error_threshold = 32'sh00008000;  // Q16.16 格式下的 0.5

    initial begin
        $display("==== TB: chen_1d_dct Multi-Group Mode ====");

        // 读取输入输出文件
        $readmemh("chen_1d_dct_input.mem", input_mem);
        $readmemh("chen_1d_dct_golden.mem", golden_mem);

        // 初始化输出文件
        f = $fopen("chen_1d_dct_all_outputs.mem", "w");

        // 遍历每一组测试
        for (g = 0; g < MAX_SAMPLES; g = g + 1) begin
            $display("---- Group %0d ----", g);
            test_passed = 1'b1;

            // 装载输入数据
            for (i = 0; i < TOTAL_WORDS; i = i + 1)
                x[i*DATA_WIDTH +: DATA_WIDTH] = input_mem[g*TOTAL_WORDS + i];

            // 复位
            rst_n = 0;
            start = 0;
            #20;
            rst_n = 1;
            
            // 启动处理
            @(posedge clk);
            start = 1;
            @(posedge clk);
            start = 0;

            // 等待valid信号
            wait(valid);
            #10;  // 等待数据稳定

            // 获取输出结果
            for (i = 0; i < TOTAL_WORDS; i = i + 1) begin
                out_mem[g*TOTAL_WORDS + i] = y[i*DATA_WIDTH +: DATA_WIDTH];
                // 写入所有输出到同一个文件
                $fdisplay(f, "%h", y[i*DATA_WIDTH +: DATA_WIDTH]);
            end

            // 结果比对
            for (i = 0; i < TOTAL_WORDS; i = i + 1) begin
                diff = $signed(out_mem[g*TOTAL_WORDS + i]) - $signed(golden_mem[g*TOTAL_WORDS + i]);
                if (diff < 0) diff = -diff;

                if (diff > error_threshold) begin
                    $display("Mismatch at Group %0d [%0d]: Got %h, Expected %h, Diff = %0d",
                             g, i, out_mem[g*TOTAL_WORDS + i], golden_mem[g*TOTAL_WORDS + i], diff >> 16);
                    test_passed = 1'b0;
                    error_count = error_count + 1;
                end
            end

            if (test_passed)
                $display("Group %0d: All outputs match within threshold", g);

            $display("-----------------------------");
            #20;
        end

        $fclose(f);

        if (error_count == 0)
            $display("==== Test Passed: All %0d Groups Completed Successfully ====", MAX_SAMPLES);
        else
            $display("==== Test Failed: %0d errors detected across %0d Groups ====", error_count, MAX_SAMPLES);
            
        #100;
        $finish;
    end

endmodule 