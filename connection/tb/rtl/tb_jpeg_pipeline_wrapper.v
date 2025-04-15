`timescale 1ns / 1ps

module tb_jpeg_pipeline_wrapper;

    parameter DATA_WIDTH = 32;
    parameter INPUT_WIDTH = 8;
    parameter DATA_DEPTH = 8;
    parameter PIXEL_COUNT = DATA_DEPTH * DATA_DEPTH;
    parameter MAX_SAMPLES = 100;

    // 时钟与复位
    reg clk;
    reg reset_n;

    // 控制信号
    reg start;
    wire done;
    wire valid_out;

    // DUT 输入输出
    reg [INPUT_WIDTH*PIXEL_COUNT-1:0] r_all;
    reg [INPUT_WIDTH*PIXEL_COUNT-1:0] g_all;
    reg [INPUT_WIDTH*PIXEL_COUNT-1:0] b_all;

    wire [DATA_WIDTH*PIXEL_COUNT-1:0] y_zigzag;
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] cb_zigzag;
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] cr_zigzag;

    // DUT 实例化
    jpeg_pipeline_wrapper #(
        .DATA_WIDTH(DATA_WIDTH),
        .INPUT_WIDTH(INPUT_WIDTH),
        .DATA_DEPTH(DATA_DEPTH)
    ) dut (
        .clk(clk),
        .reset_n(reset_n),
        .start(start),
        .done(done),
        .r_all(r_all),
        .g_all(g_all),
        .b_all(b_all),
        .y_zigzag(y_zigzag),
        .cb_zigzag(cb_zigzag),
        .cr_zigzag(cr_zigzag),
        .valid_out(valid_out)
    );

    // 时钟生成
    initial clk = 0;
    always #5 clk = ~clk;

    // 输入输出缓冲区
    reg [INPUT_WIDTH-1:0] r_mem [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [INPUT_WIDTH-1:0] g_mem [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [INPUT_WIDTH-1:0] b_mem [0:MAX_SAMPLES*PIXEL_COUNT-1];

    reg [DATA_WIDTH-1:0] y_all  [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cb_all [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cr_all [0:MAX_SAMPLES*PIXEL_COUNT-1];

    reg [DATA_WIDTH-1:0] y_out  [0:PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cb_out [0:PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cr_out [0:PIXEL_COUNT-1];

    integer g, i;

    initial begin
        $display("==== TB: JPEG Pipeline WRAPPER Multi-Group Mode ====");

        // 加载输入数据
        $readmemh("input_R.mem", r_mem);
        $readmemh("input_G.mem", g_mem);
        $readmemh("input_B.mem", b_mem);

        // 初始化信号
        reset_n = 0;
        r_all = 0;
        g_all = 0;
        b_all = 0;
        start = 0;
        #20;
        reset_n = 1;
        #20;

        // 遍历每组输入图像块
        for (g = 0; g < MAX_SAMPLES; g = g + 1) begin
            $display("---- Group %0d ----", g);

            // 装载一组像素数据（8x8）
            for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
                r_all[i*INPUT_WIDTH +: INPUT_WIDTH] = r_mem[g*PIXEL_COUNT + i];
                g_all[i*INPUT_WIDTH +: INPUT_WIDTH] = g_mem[g*PIXEL_COUNT + i];
                b_all[i*INPUT_WIDTH +: INPUT_WIDTH] = b_mem[g*PIXEL_COUNT + i];
            end

            // 触发开始信号
            start = 1;
            #10;
            start = 0;

            // 等待 done 信号
            wait(done == 1);
            #10;

            // 读取输出
            if (valid_out) begin
                for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
                    y_out[i]  = y_zigzag[i*DATA_WIDTH +: DATA_WIDTH];
                    cb_out[i] = cb_zigzag[i*DATA_WIDTH +: DATA_WIDTH];
                    cr_out[i] = cr_zigzag[i*DATA_WIDTH +: DATA_WIDTH];

                    y_all[g*PIXEL_COUNT + i]  = y_out[i];
                    cb_all[g*PIXEL_COUNT + i] = cb_out[i];
                    cr_all[g*PIXEL_COUNT + i] = cr_out[i];
                end
                $display("Group %0d complete. Output valid.", g);
            end else begin
                $display("Warning: valid_out not asserted for group %0d", g);
            end

            #20;
        end

        // 保存结果
        $writememh("actual_y_output.mem",  y_all);
        $writememh("actual_cb_output.mem", cb_all);
        $writememh("actual_cr_output.mem", cr_all);

        $display("==== All Groups Completed ====");
        #100;
        $finish;
    end

endmodule
