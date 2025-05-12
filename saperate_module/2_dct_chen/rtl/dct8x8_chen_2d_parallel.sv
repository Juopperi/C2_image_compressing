// ============================================================================
// 8×8 2‑D DCT (全并行实现，基于dct8_chen_ts)
//   • 外部接口: 展平为单个大位宽的64点并行输入/输出
//   • 内部资源: 16 × dct8_chen_ts (8个用于行处理，8个用于列处理)
//   • 特点: 无状态机，所有行列并行处理，吞吐量最大化
// ============================================================================
`timescale 1ns/1ps
module dct8x8_chen_2d_parallel #(
    parameter int IN_W = 32,
    parameter int FRAC = 15
)(
    input  logic                      clk,
    input  logic                      rst_n,

    // ---------- 展平的64点输入接口 (8×8 像素) ----------
    input  logic                      in_valid,
    output logic                      in_ready,
    input  logic signed [64*IN_W-1:0] in_data,  // 64个输入点展平为一个大端口

    // ---------- 展平的64点输出接口 (8×8 DCT) ----------
    output logic                      out_valid,
    input  logic                      out_ready,
    output logic signed [64*IN_W-1:0] out_data  // 64个输出点展平为一个大端口
);

    // --------------------------------------------------------------------
    // 输入数据解析 - 将展平的in_data转换为8×8像素矩阵
    // --------------------------------------------------------------------
    logic signed [IN_W-1:0] input_matrix [0:7][0:7];
    
    // 将输入数据分解为8x8矩阵
    genvar i, j;
    generate
        for (i = 0; i < 8; i++) begin : g_row_input
            for (j = 0; j < 8; j++) begin : g_col_input
                assign input_matrix[i][j] = in_data[(i*8+j)*IN_W +: IN_W];
            end
        end
    endgenerate

    // --------------------------------------------------------------------
    // 行处理 (8个并行的1D DCT核心)
    // --------------------------------------------------------------------
    logic row_valid;
    logic [7:0] row_ready;
    logic [7:0] row_out_valid;
    logic signed [IN_W-1:0] row_in [0:7][0:7];  // 每行8个输入点
    logic signed [IN_W-1:0] row_out [0:7][0:7]; // 每行8个输出点

    // 行处理输入连接
    assign row_valid = in_valid;
    assign in_ready = &row_ready;  // 所有行处理器都ready时，整体才ready

    // 连接输入数据到行处理器
    generate
        for (i = 0; i < 8; i++) begin : g_row_connect
            for (j = 0; j < 8; j++) begin : g_row_data
                assign row_in[i][j] = input_matrix[i][j];
            end
        end
    endgenerate

    // 8个并行的行DCT处理器
    generate
        for (i = 0; i < 8; i++) begin : g_row_dct
            dct8_chen_ts #(
                .IN_W  (IN_W),
                .FRAC  (FRAC)
            ) u_row_dct (
                .clk       (clk),
                .rst_n     (rst_n),
                
                .in_valid  (row_valid),
                .in_ready  (row_ready[i]),
                .in0       (row_in[i][0]),
                .in1       (row_in[i][1]),
                .in2       (row_in[i][2]),
                .in3       (row_in[i][3]),
                .in4       (row_in[i][4]),
                .in5       (row_in[i][5]),
                .in6       (row_in[i][6]),
                .in7       (row_in[i][7]),
                
                .out_valid (row_out_valid[i]),
                .out_ready (1'b1),  // 总是准备好接收
                .out0      (row_out[i][0]),
                .out1      (row_out[i][1]),
                .out2      (row_out[i][2]),
                .out3      (row_out[i][3]),
                .out4      (row_out[i][4]),
                .out5      (row_out[i][5]),
                .out6      (row_out[i][6]),
                .out7      (row_out[i][7])
            );
        end
    endgenerate

    // --------------------------------------------------------------------
    // 转置矩阵 - 将行处理后的结果转置供列处理使用
    // --------------------------------------------------------------------
    logic signed [IN_W-1:0] transposed [0:7][0:7];

    // 简单的转置，从行主序到列主序
    generate
        for (i = 0; i < 8; i++) begin : g_transpose_row
            for (j = 0; j < 8; j++) begin : g_transpose_col
                assign transposed[j][i] = row_out[i][j];
            end
        end
    endgenerate

    // --------------------------------------------------------------------
    // 列处理 (8个并行的1D DCT核心)
    // --------------------------------------------------------------------
    logic col_valid;
    logic [7:0] col_out_valid;
    logic signed [IN_W-1:0] col_out [0:7][0:7]; // 每列8个输出点

    // 列处理的有效信号 - 所有行处理完成时有效
    assign col_valid = &row_out_valid;

    // 8个并行的列DCT处理器
    generate
        for (i = 0; i < 8; i++) begin : g_col_dct
            dct8_chen_ts #(
                .IN_W  (IN_W),
                .FRAC  (FRAC)
            ) u_col_dct (
                .clk       (clk),
                .rst_n     (rst_n),
                
                .in_valid  (col_valid),
                .in_ready  (),  // 未使用
                .in0       (transposed[i][0]),
                .in1       (transposed[i][1]),
                .in2       (transposed[i][2]),
                .in3       (transposed[i][3]),
                .in4       (transposed[i][4]),
                .in5       (transposed[i][5]),
                .in6       (transposed[i][6]),
                .in7       (transposed[i][7]),
                
                .out_valid (col_out_valid[i]),
                .out_ready (out_ready),  // 外部接收准备
                .out0      (col_out[i][0]),
                .out1      (col_out[i][1]),
                .out2      (col_out[i][2]),
                .out3      (col_out[i][3]),
                .out4      (col_out[i][4]),
                .out5      (col_out[i][5]),
                .out6      (col_out[i][6]),
                .out7      (col_out[i][7])
            );
        end
    endgenerate

    // --------------------------------------------------------------------
    // 输出矩阵重排 - 将列处理结果重新整理为行主序输出
    // --------------------------------------------------------------------
    logic signed [IN_W-1:0] output_matrix [0:7][0:7];

    // 将列处理后的结果重新转置回行主序
    generate
        for (i = 0; i < 8; i++) begin : g_output_row
            for (j = 0; j < 8; j++) begin : g_output_col
                assign output_matrix[i][j] = col_out[j][i];
            end
        end
    endgenerate

    // 输出拼接 - 将输出矩阵展平到out_data
    generate
        for (i = 0; i < 8; i++) begin : g_out_row
            for (j = 0; j < 8; j++) begin : g_out_col
                assign out_data[(i*8+j)*IN_W +: IN_W] = output_matrix[i][j];
            end
        end
    endgenerate

    // 输出有效信号 - 所有列处理完成时有效
    assign out_valid = &col_out_valid;

    // 注册输出以提高时序性能（可选）
    /* 
    logic signed [64*IN_W-1:0] out_data_reg;
    logic                      out_valid_reg;
    
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            out_valid_reg <= 1'b0;
        end else begin
            out_valid_reg <= &col_out_valid;
            
            if (&col_out_valid) begin
                for (int r = 0; r < 8; r++) begin
                    for (int c = 0; c < 8; c++) begin
                        out_data_reg[(r*8+c)*IN_W +: IN_W] <= output_matrix[r][c];
                    end
                end
            end
        end
    end
    
    assign out_data = out_data_reg;
    assign out_valid = out_valid_reg;
    */

endmodule 