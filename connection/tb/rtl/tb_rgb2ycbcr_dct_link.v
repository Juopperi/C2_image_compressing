`timescale 1ns / 1ns

module tb_rgb2ycbcr_dct_link;

    parameter DATA_WIDTH = 32;     // 固定点位宽 - 对应转换器和DCT
    parameter INPUT_WIDTH = 8;     // 输入RGB位宽
    parameter DATA_DEPTH = 8;      // 8x8块
    parameter PIXEL_COUNT = DATA_DEPTH * DATA_DEPTH;  // 64 pixels
    parameter MAX_SAMPLES = 100;
    parameter WAIT_CYCLES = 300;   // DCT需要更多时钟周期

    // 时钟与复位
    reg clk;
    reg reset_n;

    // DUT 输入输出
    reg [INPUT_WIDTH*PIXEL_COUNT-1:0] r_all;
    reg [INPUT_WIDTH*PIXEL_COUNT-1:0] g_all;
    reg [INPUT_WIDTH*PIXEL_COUNT-1:0] b_all;

    // YCbCr原始输出 - 连接器输出
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] y_raw;
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] cb_raw;
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] cr_raw;
    
    // DCT输出
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] y_dct;
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] cb_dct;
    wire [DATA_WIDTH*PIXEL_COUNT-1:0] cr_dct;
    
    // DCT状态信号
    wire y_out_valid;
    wire cb_out_valid;
    wire cr_out_valid;
    
    // DUT 实例化
    rgb2ycbcr_dct_link #(
        .DATA_WIDTH(DATA_WIDTH),
        .INPUT_WIDTH(INPUT_WIDTH),
        .DATA_DEPTH(DATA_DEPTH)
    ) dut (
        .clk(clk),
        .reset_n(reset_n),
        .r_all(r_all),
        .g_all(g_all),
        .b_all(b_all),
        .y_raw(y_raw),
        .cb_raw(cb_raw),
        .cr_raw(cr_raw),
        .y_dct(y_dct),
        .cb_dct(cb_dct),
        .cr_dct(cr_dct),
        .y_out_valid(y_out_valid),
        .cb_out_valid(cb_out_valid),
        .cr_out_valid(cr_out_valid)
    );

    // 时钟
    initial clk = 0;
    always #5 clk = ~clk;

    // 多组内存（从文件加载）
    reg [INPUT_WIDTH-1:0] r_mem [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [INPUT_WIDTH-1:0] g_mem [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [INPUT_WIDTH-1:0] b_mem [0:MAX_SAMPLES*PIXEL_COUNT-1];

    // 期望输出数据 - YCbCr阶段
    reg [DATA_WIDTH-1:0] y_raw_expected [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cb_raw_expected [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cr_raw_expected [0:MAX_SAMPLES*PIXEL_COUNT-1];
    
    // 期望输出数据 - DCT阶段
    reg [DATA_WIDTH-1:0] y_dct_expected [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cb_dct_expected [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cr_dct_expected [0:MAX_SAMPLES*PIXEL_COUNT-1];

    // 当前组处理结果 - YCbCr阶段
    reg [DATA_WIDTH-1:0] y_raw_out [0:PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cb_raw_out [0:PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cr_raw_out [0:PIXEL_COUNT-1];
    
    // 当前组处理结果 - DCT阶段
    reg [DATA_WIDTH-1:0] y_dct_out [0:PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cb_dct_out [0:PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cr_dct_out [0:PIXEL_COUNT-1];

    // 所有组处理结果 - YCbCr阶段
    reg [DATA_WIDTH-1:0] y_raw_all [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cb_raw_all [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cr_raw_all [0:MAX_SAMPLES*PIXEL_COUNT-1];
    
    // 所有组处理结果 - DCT阶段
    reg [DATA_WIDTH-1:0] y_dct_all [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cb_dct_all [0:MAX_SAMPLES*PIXEL_COUNT-1];
    reg [DATA_WIDTH-1:0] cr_dct_all [0:MAX_SAMPLES*PIXEL_COUNT-1];

    // 错误比较阈值
    localparam signed [31:0] ERROR_THRESHOLD = 32'sh00008000;  // Q16.16 的 0.5
    integer g, i, cycles, diff;
    reg all_dct_valid;

    // 初始化输入为 0，避免未定义值
    initial begin
        r_all = {(INPUT_WIDTH*PIXEL_COUNT){1'b0}};
        g_all = {(INPUT_WIDTH*PIXEL_COUNT){1'b0}};
        b_all = {(INPUT_WIDTH*PIXEL_COUNT){1'b0}};
        reset_n = 0;
    end

    initial begin
        $display("==== TB: RGB to YCbCr + DCT Link Test ====");

        // 读取输入文件
        $readmemh("input_R.mem", r_mem);
        $readmemh("input_G.mem", g_mem);
        $readmemh("input_B.mem", b_mem);

        // 尝试读取期望输出文件 - YCbCr阶段
        $readmemh("expected_Y_raw.mem", y_raw_expected);
        $readmemh("expected_Cb_raw.mem", cb_raw_expected);
        $readmemh("expected_Cr_raw.mem", cr_raw_expected);
        
        // 尝试读取期望输出文件 - DCT阶段
        $readmemh("expected_Y_dct.mem", y_dct_expected);
        $readmemh("expected_Cb_dct.mem", cb_dct_expected);
        $readmemh("expected_Cr_dct.mem", cr_dct_expected);
        
        // 保持复位状态足够长时间
        #100;
        reset_n = 1;
        #100;

        for (g = 0; g < MAX_SAMPLES; g = g + 1) begin
            $display("---- Processing Group %0d ----", g);
            
            // 填入一组 8x8 数据
            for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
                r_all[i*INPUT_WIDTH +: INPUT_WIDTH] = r_mem[g*PIXEL_COUNT + i];
                g_all[i*INPUT_WIDTH +: INPUT_WIDTH] = g_mem[g*PIXEL_COUNT + i];
                b_all[i*INPUT_WIDTH +: INPUT_WIDTH] = b_mem[g*PIXEL_COUNT + i];
            end

            // 延迟1个周期让YCbCr转换器处理数据
            #10;
            
            // 采集YCbCr原始输出数据
            for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
                y_raw_out[i]  = y_raw[i*DATA_WIDTH +: DATA_WIDTH];
                cb_raw_out[i] = cb_raw[i*DATA_WIDTH +: DATA_WIDTH];
                cr_raw_out[i] = cr_raw[i*DATA_WIDTH +: DATA_WIDTH];
                
                // 保存结果到全局数组
                y_raw_all[g*PIXEL_COUNT + i]  = y_raw_out[i];
                cb_raw_all[g*PIXEL_COUNT + i] = cb_raw_out[i];
                cr_raw_all[g*PIXEL_COUNT + i] = cr_raw_out[i];
            end
            
            // 等待DCT处理完成
            all_dct_valid = 0;
            cycles = 0;
            
            while (!all_dct_valid && cycles < WAIT_CYCLES) begin
                all_dct_valid = y_out_valid & cb_out_valid & cr_out_valid;
                cycles = cycles + 1;
                #10;
            end
            
            if (all_dct_valid) begin
                $display("DCT processing completed after %0d cycles", cycles);
                
                // 采集DCT输出数据
                for (i = 0; i < PIXEL_COUNT; i = i + 1) begin
                    y_dct_out[i]  = y_dct[i*DATA_WIDTH +: DATA_WIDTH];
                    cb_dct_out[i] = cb_dct[i*DATA_WIDTH +: DATA_WIDTH];
                    cr_dct_out[i] = cr_dct[i*DATA_WIDTH +: DATA_WIDTH];
                    
                    // 保存结果到全局数组
                    y_dct_all[g*PIXEL_COUNT + i]  = y_dct_out[i];
                    cb_dct_all[g*PIXEL_COUNT + i] = cb_dct_out[i];
                    cr_dct_all[g*PIXEL_COUNT + i] = cr_dct_out[i];
                end
            end else begin
                $display("Warning: DCT processing timed out after %0d cycles", WAIT_CYCLES);
            end
            
            $display("Group %0d complete", g);
            #20;  // 组间间隔
        end

        // 写出所有组输出 - YCbCr原始输出
        $writememh("actual_Y_raw.mem",  y_raw_all);
        $writememh("actual_Cb_raw.mem", cb_raw_all);
        $writememh("actual_Cr_raw.mem", cr_raw_all);
        
        // 写出所有组输出 - DCT输出
        $writememh("actual_Y_dct.mem",  y_dct_all);
        $writememh("actual_Cb_dct.mem", cb_dct_all);
        $writememh("actual_Cr_dct.mem", cr_dct_all);

        $display("==== All %0d Groups Completed ====", MAX_SAMPLES);
        $display("Results saved to actual_Y/Cb/Cr_raw.mem and actual_Y/Cb/Cr_dct.mem");
        #100;
        $finish;
    end

endmodule 