module quantize_array #(
    parameter USE_LUMA = 1  // 1: 使用 luma_qtable_inv, 0: chroma_qtable_inv
)(
    input  wire                   clk,
    input  wire                   rst_n,        // 复位信号，用于状态控制
    input  wire                   start,        // 开始处理信号
    input  wire [32*64-1:0]       pixels,       // 输入像素数组 (64 x 32-bit Q16.16)
    output reg  [16*64-1:0]       q_result,     // 输出量化结果数组（仅保留高16位）
    output reg                    done          // 处理完成信号
);

    // 状态机参数定义
    localparam IDLE = 2'b00;
    localparam PROCESSING = 2'b01;
    localparam DONE = 2'b10;
    
    reg [1:0] state, next_state;
    reg [2:0] cycle_cnt;  // 需要8个周期来处理所有数据
    reg [5:0] addr;       // 当前处理的像素索引
    
    // 使用ROM存储量化表 - 更高效地使用FPGA资源
    reg [31:0] luma_table_rom[0:63];
    reg [31:0] chroma_table_rom[0:63];
    // 完整的量化表初始化
initial begin
    // Luma量化表初始化
    luma_table_rom[0]  = 32'h00001000; luma_table_rom[1]  = 32'h00001746;
    luma_table_rom[2]  = 32'h0000199A; luma_table_rom[3]  = 32'h00001000;
    luma_table_rom[4]  = 32'h00000AAB; luma_table_rom[5]  = 32'h00000666;
    luma_table_rom[6]  = 32'h00000505; luma_table_rom[7]  = 32'h00000432;
    luma_table_rom[8]  = 32'h00001555; luma_table_rom[9]  = 32'h00001555;
    luma_table_rom[10] = 32'h00001249; luma_table_rom[11] = 32'h00000D79;
    luma_table_rom[12] = 32'h000009D9; luma_table_rom[13] = 32'h0000046A;
    luma_table_rom[14] = 32'h00000444; luma_table_rom[15] = 32'h000004A8;
    luma_table_rom[16] = 32'h00001249; luma_table_rom[17] = 32'h000013B1;
    luma_table_rom[18] = 32'h00001000; luma_table_rom[19] = 32'h00000AAB;
    luma_table_rom[20] = 32'h00000666; luma_table_rom[21] = 32'h0000047E;
    luma_table_rom[22] = 32'h000003B6; luma_table_rom[23] = 32'h00000492;
    luma_table_rom[24] = 32'h00001249; luma_table_rom[25] = 32'h00000F0F;
    luma_table_rom[26] = 32'h00000BA3; luma_table_rom[27] = 32'h000008D4;
    luma_table_rom[28] = 32'h00000505; luma_table_rom[29] = 32'h000002F1;
    luma_table_rom[30] = 32'h00000333; luma_table_rom[31] = 32'h00000421;
    luma_table_rom[32] = 32'h00000E39; luma_table_rom[33] = 32'h00000BA3;
    luma_table_rom[34] = 32'h000006EB; luma_table_rom[35] = 32'h00000492;
    luma_table_rom[36] = 32'h000003C4; luma_table_rom[37] = 32'h00000259;
    luma_table_rom[38] = 32'h0000027C; luma_table_rom[39] = 32'h00000353;
    luma_table_rom[40] = 32'h00000AAB; luma_table_rom[41] = 32'h00000750;
    luma_table_rom[42] = 32'h000004A8; luma_table_rom[43] = 32'h00000400;
    luma_table_rom[44] = 32'h00000329; luma_table_rom[45] = 32'h00000276;
    luma_table_rom[46] = 32'h00000244; luma_table_rom[47] = 32'h000002C8;
    luma_table_rom[48] = 32'h00000539; luma_table_rom[49] = 32'h00000400;
    luma_table_rom[50] = 32'h00000348; luma_table_rom[51] = 32'h000002F1;
    luma_table_rom[52] = 32'h0000027C; luma_table_rom[53] = 32'h0000021E;
    luma_table_rom[54] = 32'h00000222; luma_table_rom[55] = 32'h00000289;
    luma_table_rom[56] = 32'h0000038E; luma_table_rom[57] = 32'h000002C8;
    luma_table_rom[58] = 32'h000002B2; luma_table_rom[59] = 32'h0000029D;
    luma_table_rom[60] = 32'h00000249; luma_table_rom[61] = 32'h0000028F;
    luma_table_rom[62] = 32'h0000027C; luma_table_rom[63] = 32'h00000296;
    
    // Chroma量化表初始化
    chroma_table_rom[0]  = 32'h00000F0F; chroma_table_rom[1]  = 32'h00000E39;
    chroma_table_rom[2]  = 32'h00000AAB; chroma_table_rom[3]  = 32'h00000572;
    chroma_table_rom[4]  = 32'h00000296; chroma_table_rom[5]  = 32'h00000296;
    chroma_table_rom[6]  = 32'h00000296; chroma_table_rom[7]  = 32'h00000296;
    chroma_table_rom[8]  = 32'h00000E39; chroma_table_rom[9]  = 32'h00000C31;
    chroma_table_rom[10] = 32'h000009D9; chroma_table_rom[11] = 32'h000003E1;
    chroma_table_rom[12] = 32'h00000296; chroma_table_rom[13] = 32'h00000296;
    chroma_table_rom[14] = 32'h00000296; chroma_table_rom[15] = 32'h00000296;
    chroma_table_rom[16] = 32'h00000AAB; chroma_table_rom[17] = 32'h000009D9;
    chroma_table_rom[18] = 32'h00000492; chroma_table_rom[19] = 32'h00000296;
    chroma_table_rom[20] = 32'h00000296; chroma_table_rom[21] = 32'h00000296;
    chroma_table_rom[22] = 32'h00000296; chroma_table_rom[23] = 32'h00000296;
    chroma_table_rom[24] = 32'h00000572; chroma_table_rom[25] = 32'h000003E1;
    chroma_table_rom[26] = 32'h00000296; chroma_table_rom[27] = 32'h00000296;
    chroma_table_rom[28] = 32'h00000296; chroma_table_rom[29] = 32'h00000296;
    chroma_table_rom[30] = 32'h00000296; chroma_table_rom[31] = 32'h00000296;
    chroma_table_rom[32] = 32'h00000296; chroma_table_rom[33] = 32'h00000296;
    chroma_table_rom[34] = 32'h00000296; chroma_table_rom[35] = 32'h00000296;
    chroma_table_rom[36] = 32'h00000296; chroma_table_rom[37] = 32'h00000296;
    chroma_table_rom[38] = 32'h00000296; chroma_table_rom[39] = 32'h00000296;
    chroma_table_rom[40] = 32'h00000296; chroma_table_rom[41] = 32'h00000296;
    chroma_table_rom[42] = 32'h00000296; chroma_table_rom[43] = 32'h00000296;
    chroma_table_rom[44] = 32'h00000296; chroma_table_rom[45] = 32'h00000296;
    chroma_table_rom[46] = 32'h00000296; chroma_table_rom[47] = 32'h00000296;
    chroma_table_rom[48] = 32'h00000296; chroma_table_rom[49] = 32'h00000296;
    chroma_table_rom[50] = 32'h00000296; chroma_table_rom[51] = 32'h00000296;
    chroma_table_rom[52] = 32'h00000296; chroma_table_rom[53] = 32'h00000296;
    chroma_table_rom[54] = 32'h00000296; chroma_table_rom[55] = 32'h00000296;
    chroma_table_rom[56] = 32'h00000296; chroma_table_rom[57] = 32'h00000296;
    chroma_table_rom[58] = 32'h00000296; chroma_table_rom[59] = 32'h00000296;
    chroma_table_rom[60] = 32'h00000296; chroma_table_rom[61] = 32'h00000296;
    chroma_table_rom[62] = 32'h00000296; chroma_table_rom[63] = 32'h00000296;
    end

    // 根据参数选择使用哪个量化表的值
    function [31:0] get_qtable_value;
        input [5:0] index;
        begin
            get_qtable_value = USE_LUMA ? luma_table_rom[index] : chroma_table_rom[index];
        end
    endfunction
    
    
    // 临时结果存储
    reg [15:0] result_buffer [0:63];
    
    // 创建8个乘法器输入和输出
    reg [31:0] pixel_in [0:7];
    reg [31:0] qtable_in [0:7];  // 修改为16位宽
    wire [31:0] mul_out [0:7];

    // 实例化8个乘法器 - 使用无DSP的LUT乘法器
    genvar i;
    generate
        for (i = 0; i < 8; i = i + 1) begin : GEN_MULTS
            // 实例化提供的乘法器
            lut_multiplier_no_dsp_quantization #(
                .IN_W(32)     // 输入数据位宽
            ) u_mul (
                .a(pixel_in[i]),
                .b(qtable_in[i]),  // 16位量化表值
                .result(mul_out[i])
            );
        end
    endgenerate

    
    // 将结果缓冲区连接到输出
    integer j;
    always @(*) begin
        for (j = 0; j < 64; j = j + 1) begin
            q_result[16*j +: 16] = result_buffer[j];
        end
    end
    
    // 状态机逻辑
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
        end else begin
            state <= next_state;
        end
    end
    
    // 状态转换逻辑
    always @(*) begin
        case (state)
            IDLE: next_state = (start) ? PROCESSING : IDLE;
            PROCESSING: next_state = (cycle_cnt == 3'd7) ? DONE : PROCESSING;
            DONE: next_state = IDLE;
            default: next_state = IDLE;
        endcase
    end
    
    // 处理逻辑
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            cycle_cnt <= 3'd0;
            addr <= 6'd0;
            done <= 1'b0;
            
            // 初始化结果缓冲区
            for (j = 0; j < 64; j = j + 1) begin
                result_buffer[j] <= 16'd0;
            end
        end else begin
            case (state)
                IDLE: begin
                    cycle_cnt <= 3'd0;
                    addr <= 6'd0;
                    done <= 1'b0;
                end
                
                PROCESSING: begin
                    // 更新周期计数器
                    cycle_cnt <= cycle_cnt + 1'b1;
                    
                    // 加载新的输入数据到乘法器
                    for (j = 0; j < 8; j = j + 1) begin
                        pixel_in[j] <= pixels[32*(addr+j) +: 32];
                        // 使用函数获取适当的量化表值
                        qtable_in[j] <= get_qtable_value(addr+j);
                    end
                    
                    // 保存上一个周期的乘法结果（如果不是第一个周期）
                    if (cycle_cnt > 0) begin
                        for (j = 0; j < 8; j = j + 1) begin
                            // 仅保存乘法结果的高16位
                            result_buffer[addr-8+j] <= mul_out[j][31:16];
                        end
                    end
                    
                    // 更新地址
                    addr <= addr + 8;
                end
                
                DONE: begin
                    // 保存最后一批乘法结果
                    for (j = 0; j < 8; j = j + 1) begin
                        result_buffer[addr-8+j] <= mul_out[j][31:16];
                    end
                    done <= 1'b1;
                end
            endcase
        end
    end

endmodule