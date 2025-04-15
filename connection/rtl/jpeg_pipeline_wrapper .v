`timescale 1ns / 1ps

module jpeg_pipeline_wrapper #(
    parameter DATA_WIDTH = 32,
    parameter INPUT_WIDTH = 8,
    parameter DATA_DEPTH = 8,
    parameter PIXEL_COUNT = DATA_DEPTH * DATA_DEPTH
)(
    input wire clk,
    input wire reset_n,
    input wire start,         // 启动信号（外部拉高1周期即可启动）
    output reg done,          // 完成标志，拉高1周期

    input wire [INPUT_WIDTH*PIXEL_COUNT-1:0] r_all,
    input wire [INPUT_WIDTH*PIXEL_COUNT-1:0] g_all,
    input wire [INPUT_WIDTH*PIXEL_COUNT-1:0] b_all,

    output wire [DATA_WIDTH*PIXEL_COUNT-1:0] y_zigzag,
    output wire [DATA_WIDTH*PIXEL_COUNT-1:0] cb_zigzag,
    output wire [DATA_WIDTH*PIXEL_COUNT-1:0] cr_zigzag,
    output reg valid_out       // 输出数据是否有效
);

    // 状态定义
    localparam STATE_IDLE    = 1'b0;
    localparam STATE_RUNNING = 1'b1;

    reg state;
    reg [2:0] cycle_count;

    // 状态机逻辑
    always @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            state        <= STATE_IDLE;
            cycle_count  <= 3'd0;
            valid_out    <= 1'b0;
            done         <= 1'b0;
        end else begin
            case (state)
                STATE_IDLE: begin
                    done      <= 1'b0;
                    valid_out <= 1'b0;
                    if (start) begin
                        state        <= STATE_RUNNING;
                        cycle_count  <= 3'd1;
                    end
                end

                STATE_RUNNING: begin
                    cycle_count <= cycle_count + 1;
                    done        <= 1'b0;
                    if (cycle_count == 3'd5) begin
                        valid_out <= 1'b1;
                        done      <= 1'b1;  // 可配合中断或握手信号
                        state     <= STATE_IDLE;
                    end
                end

                default: begin
                    state <= STATE_IDLE;
                end
            endcase
        end
    end

    // 内核管线模块实例化
    jpeg_compression_pipeline #(
        .DATA_WIDTH(DATA_WIDTH),
        .INPUT_WIDTH(INPUT_WIDTH),
        .DATA_DEPTH(DATA_DEPTH)
    ) core_pipeline (
        .clk(clk),
        .reset_n(reset_n),
        .r_all(r_all),
        .g_all(g_all),
        .b_all(b_all),
        .y_zigzag(y_zigzag),
        .cb_zigzag(cb_zigzag),
        .cr_zigzag(cr_zigzag)
    );

endmodule
