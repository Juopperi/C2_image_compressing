// ============================================================================
// 8×8 2‑D DCT (基于单实例 dct8_chen_ts)
//   • 外部接口: 展平为单个大位宽的64点并行输入/输出
//   • 内部资源: 1 × dct8_chen_ts + 64 × IN_W RAM
// ============================================================================
`timescale 1ns/1ps
module dct8x8_chen_2d #(
    parameter int IN_W = 32,
    parameter int FRAC = 15,
    parameter int CONST_W = 16
)(
    input  logic                     clk,
    input  logic                     rst_n,

    // ---------- 展平的64点输入接口 (8×8 像素) ----------
    input  logic                     in_valid,
    output logic                     in_ready,
    input  logic signed [64*IN_W-1:0] in_data,  // 64个输入点展平为一个大端口

    // ---------- 展平的64点输出接口 (8×8 DCT) ----------
    output logic                     out_valid,
    input  logic                     out_ready,
    output logic signed [64*IN_W-1:0] out_data  // 64个输出点展平为一个大端口
);

    // --------------------------------------------------------------------
    // 内部状态
    // --------------------------------------------------------------------
    typedef enum logic [2:0] {
        S_IDLE,        // 等待输入
        S_ROW_PROC,    // 处理行
        S_ROW_WAIT,    // 等待行结果
        S_COL_PROC,    // 处理列
        S_COL_WAIT,    // 等待列结果
        S_DONE         // 计算完成，输出就绪
    } state_t;

    state_t state, nstate;

    // 行/列计数
    logic [2:0] row_cnt, col_cnt;
    
    // 输入缓冲区 (64 x IN_W)
    logic signed [IN_W-1:0] input_buffer [0:63];
    
    // 输出缓冲区 (64 x IN_W)
    logic signed [IN_W-1:0] output_buffer [0:63];

    // --------------------------------------------------------------------
    // 行‑>列 转置 RAM  (64 × IN_W)
    // --------------------------------------------------------------------
    (* ram_style="block" *)
    logic signed [IN_W-1:0] trans_buff [0:63];

    // 写控制
    logic we_trans;
    logic signed [IN_W-1:0] wdata_trans [0:7];

    // RAM写控制
    always_ff @(posedge clk) begin
        if(we_trans) begin
            // 写入8个元素
            for(int j=0; j<8; j++) begin
                trans_buff[row_cnt*8 + j] <= wdata_trans[j];
            end
        end
    end

    // 读地址和数据
    logic [5:0] raddr_trans [0:7];
    logic signed [IN_W-1:0] rdata_trans [0:7];

    genvar i;
    generate
        for(i=0;i<8;i++) begin : g_colread
            assign rdata_trans[i] = trans_buff[raddr_trans[i]];
        end
    endgenerate

    // --------------------------------------------------------------------
    // 与 1‑D DCT 核心的连接
    // --------------------------------------------------------------------
    logic core_in_valid, core_in_ready;
    logic core_out_valid;
    logic signed [IN_W-1:0] core_in [0:7];
    logic signed [IN_W-1:0] core_out[0:7];

    dct8_chen_ts #(
        .IN_W   (IN_W),
        .FRAC   (FRAC),
        .CONST_W(CONST_W)
    ) u_dct (
        .clk      (clk),
        .rst_n    (rst_n),

        .in_valid (core_in_valid),
        .in_ready (core_in_ready),
        .in0(core_in[0]),.in1(core_in[1]),.in2(core_in[2]),.in3(core_in[3]),
        .in4(core_in[4]),.in5(core_in[5]),.in6(core_in[6]),.in7(core_in[7]),

        .out_valid(core_out_valid),
        .out_ready(1'b1),                // 内部全速接受
        .out0(core_out[0]),.out1(core_out[1]),.out2(core_out[2]),.out3(core_out[3]),
        .out4(core_out[4]),.out5(core_out[5]),.out6(core_out[6]),.out7(core_out[7])
    );

    // --------------------------------------------------------------------
    // 顶层握手
    // --------------------------------------------------------------------
    assign in_ready = (state == S_IDLE);
    assign out_valid = (state == S_DONE);

    // 输出映射 - 将输出缓冲区内容展平到out_data
    // 按照行优先顺序进行拼接
    always_comb begin
        for (int i = 0; i < 64; i++) begin
            out_data[i*IN_W +: IN_W] = output_buffer[i];
        end
    end

    // --------------------------------------------------------------------
    // 当in_valid有效时，将展平的输入加载到缓冲区
    // --------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if(state == S_IDLE && in_valid) begin
            for (int i = 0; i < 64; i++) begin
                input_buffer[i] <= in_data[i*IN_W +: IN_W];
            end
        end
    end

    // --------------------------------------------------------------------
    // 状态机
    // --------------------------------------------------------------------
    always_ff @(posedge clk or negedge rst_n)
        if(!rst_n) state <= S_IDLE;
        else       state <= nstate;

    always_comb begin
        nstate = state;
        case(state)
            S_IDLE:
                if(in_valid)
                    nstate = S_ROW_PROC;
            
            S_ROW_PROC:
                if(core_in_ready)
                    nstate = S_ROW_WAIT;
            
            S_ROW_WAIT:
                if(core_out_valid) begin
                    if(row_cnt == 3'd7)
                        nstate = S_COL_PROC;
                    else
                        nstate = S_ROW_PROC;
                end
            
            S_COL_PROC:
                if(core_in_ready)
                    nstate = S_COL_WAIT;
            
            S_COL_WAIT:
                if(core_out_valid) begin
                    if(col_cnt == 3'd7)
                        nstate = S_DONE;
                    else
                        nstate = S_COL_PROC;
                end
            
            S_DONE:
                if(out_ready)
                    nstate = S_IDLE;
            
            default:;
        endcase
    end

    // --------------------------------------------------------------------
    // DCT核心输入数据选择
    // --------------------------------------------------------------------
    always_comb begin
        // 默认：处理列（从转置缓冲区读取）
        for(int j=0; j<8; j++) begin
            core_in[j] = rdata_trans[j];
        end
        
        // 行处理阶段：从输入缓冲区选择
        if(state == S_ROW_PROC) begin
            for(int j=0; j<8; j++) begin
                core_in[j] = input_buffer[row_cnt*8 + j];
            end
        end
    end

    assign core_in_valid = (state == S_ROW_PROC) || (state == S_COL_PROC);

    // --------------------------------------------------------------------
    // 行计数
    // --------------------------------------------------------------------
    always_ff @(posedge clk or negedge rst_n)
        if(!rst_n)
            row_cnt <= 3'd0;
        else if(state == S_IDLE)
            row_cnt <= 3'd0;
        else if(state == S_ROW_WAIT && core_out_valid)
            row_cnt <= row_cnt + 3'd1;

    // --------------------------------------------------------------------
    // 行结果写入转置缓冲区
    // --------------------------------------------------------------------
    assign we_trans = (state == S_ROW_WAIT) && core_out_valid;
    
    // 核心输出连接到转置缓冲区写数据端口
    genvar w;
    generate
        for(w=0; w<8; w++) begin : g_wdata
            assign wdata_trans[w] = core_out[w];
        end
    endgenerate

    // --------------------------------------------------------------------
    // 列计数和转置缓冲区读地址生成
    // --------------------------------------------------------------------
    always_ff @(posedge clk or negedge rst_n)
        if(!rst_n)
            col_cnt <= 3'd0;
        else if(state == S_IDLE)
            col_cnt <= 3'd0;
        else if(state == S_COL_WAIT && core_out_valid)
            col_cnt <= col_cnt + 3'd1;

    // 生成列处理的读地址
    integer k;
    always_comb begin
        for(k=0; k<8; k++)
            raddr_trans[k] = k*6'd8 + col_cnt;  // 列固定，行递增
    end

    // --------------------------------------------------------------------
    // 存储列处理结果到最终输出缓冲区
    // --------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if(state == S_COL_WAIT && core_out_valid) begin
            for(int j=0; j<8; j++) begin
                output_buffer[j*8 + col_cnt] <= core_out[j];
            end
        end
    end

endmodule