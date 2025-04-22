`timescale 1 ns / 1 ps

module inverse #
(
    parameter integer C_S00_AXIS_TDATA_WIDTH = 32,
    parameter integer C_M00_AXIS_TDATA_WIDTH = 32,
    parameter integer C_M00_AXIS_START_COUNT = 32
)
(
    // 端口保持不变
    input wire  s00_axis_aclk,
    input wire  s00_axis_aresetn,
    output wire  s00_axis_tready,
    input wire [C_S00_AXIS_TDATA_WIDTH-1 : 0] s00_axis_tdata,
    input wire [(C_S00_AXIS_TDATA_WIDTH/8)-1 : 0] s00_axis_tstrb,
    input wire  s00_axis_tlast,
    input wire  s00_axis_tvalid,
    
    input wire  m00_axis_aclk,
    input wire  m00_axis_aresetn,
    output wire  m00_axis_tvalid,
    output wire [C_M00_AXIS_TDATA_WIDTH-1 : 0] m00_axis_tdata,
    output wire [(C_M00_AXIS_TDATA_WIDTH/8)-1 : 0] m00_axis_tstrb,
    output wire  m00_axis_tlast,
    input wire  m00_axis_tready
);

    // 内部连接信号
    wire [C_S00_AXIS_TDATA_WIDTH-1:0] inverted_data;
    wire inverted_valid;
    wire inverted_ready;
    wire inverted_last;
    wire [(C_S00_AXIS_TDATA_WIDTH/8)-1:0] inverted_strb;
    
    // 01翻转处理 - 直接处理输入
    bit_inverter #(
        .DATA_WIDTH(C_S00_AXIS_TDATA_WIDTH)
    ) bit_inverter_inst (
        .clk(s00_axis_aclk),
        .resetn(s00_axis_aresetn),
        // 输入接口
        .s_tdata(s00_axis_tdata),
        .s_tvalid(s00_axis_tvalid),
        .s_tready(s00_axis_tready),  // 直接控制顶层输出
        .s_tlast(s00_axis_tlast),
        .s_tstrb(s00_axis_tstrb),
        // 输出接口
        .m_tdata(inverted_data),
        .m_tvalid(inverted_valid),
        .m_tready(inverted_ready),
        .m_tlast(inverted_last),
        .m_tstrb(inverted_strb)
    );
    
    // 自定义输出控制模块
    custom_master_stream #( 
        .C_M_AXIS_TDATA_WIDTH(C_M00_AXIS_TDATA_WIDTH),
        .C_M_START_COUNT(C_M00_AXIS_START_COUNT)
    ) custom_master_stream_inst (
        .M_AXIS_ACLK(m00_axis_aclk),
        .M_AXIS_ARESETN(m00_axis_aresetn),
        .M_AXIS_TVALID(m00_axis_tvalid),
        .M_AXIS_TDATA(m00_axis_tdata),
        .M_AXIS_TSTRB(m00_axis_tstrb),
        .M_AXIS_TLAST(m00_axis_tlast),
        .M_AXIS_TREADY(m00_axis_tready),
        
        // 连接到翻转模块的输出
        .S_AXIS_TDATA(inverted_data),
        .S_AXIS_TVALID(inverted_valid),
        .S_AXIS_TREADY(inverted_ready),
        .S_AXIS_TLAST(inverted_last),
        .S_AXIS_TSTRB(inverted_strb)
    );

endmodule

// 位翻转模块
module bit_inverter #(
    parameter DATA_WIDTH = 32
)(
    input wire clk,
    input wire resetn,
    
    // 输入接口
    input wire [DATA_WIDTH-1:0] s_tdata,
    input wire s_tvalid,
    output wire s_tready,
    input wire s_tlast,
    input wire [(DATA_WIDTH/8)-1:0] s_tstrb,
    
    // 输出接口
    output reg [DATA_WIDTH-1:0] m_tdata,
    output reg m_tvalid,
    input wire m_tready,
    output reg m_tlast,
    output reg [(DATA_WIDTH/8)-1:0] m_tstrb
);

    // 始终就绪接收数据
    assign s_tready = resetn & (m_tready | ~m_tvalid);
    
    // 数据处理 - 01位翻转
    always @(posedge clk)
    begin
        if (!resetn)
        begin
            m_tvalid <= 1'b0;
            m_tlast <= 1'b0;
            m_tdata <= 0;
            m_tstrb <= 0;
        end
        else
        begin
            if (s_tvalid && s_tready)
            begin
                // 翻转每一位
                m_tdata <= ~s_tdata;
                m_tvalid <= 1'b1;
                m_tlast <= s_tlast;
                m_tstrb <= s_tstrb;
            end
            else if (m_tready && m_tvalid)
            begin
                // 数据被接收了，清除有效标志
                m_tvalid <= 1'b0;
            end
        end
    end

endmodule

// 自定义主机流模块
module custom_master_stream #
(
    parameter integer C_M_AXIS_TDATA_WIDTH = 32,
    parameter integer C_M_START_COUNT = 32
)
(
    // 主机接口
    input wire  M_AXIS_ACLK,
    input wire  M_AXIS_ARESETN,
    output reg  M_AXIS_TVALID,
    output reg [C_M_AXIS_TDATA_WIDTH-1 : 0] M_AXIS_TDATA,
    output reg [(C_M_AXIS_TDATA_WIDTH/8)-1 : 0] M_AXIS_TSTRB,
    output reg  M_AXIS_TLAST,
    input wire  M_AXIS_TREADY,
    
    // 从机接口 - 从bit_inverter接收数据
    input wire [C_M_AXIS_TDATA_WIDTH-1 : 0] S_AXIS_TDATA,
    input wire S_AXIS_TVALID,
    output wire S_AXIS_TREADY,
    input wire S_AXIS_TLAST,
    input wire [(C_M_AXIS_TDATA_WIDTH/8)-1 : 0] S_AXIS_TSTRB
);

    // 延迟计数器
    reg [clogb2(C_M_START_COUNT-1)-1 : 0] count;
    reg [2:0] state;
    
    // 状态定义
    localparam [2:0] IDLE = 3'b000,
                    INIT_COUNTER = 3'b001,
                    SEND_STREAM = 3'b010,
                    WAIT_READY = 3'b011;
    
    // 返回大于等于位深度的最小整数
    function integer clogb2 (input integer bit_depth);
        integer depth;
    begin
        depth = bit_depth;
        for(clogb2=0; depth>0; clogb2=clogb2+1)
            depth = depth >> 1;
    end
    endfunction
    
    // 信号分配
    assign S_AXIS_TREADY = (state == SEND_STREAM) && M_AXIS_ARESETN;
    
    // 状态机实现
    always @(posedge M_AXIS_ACLK)
    begin
        if (!M_AXIS_ARESETN)
        begin
            state <= IDLE;
            count <= 0;
            M_AXIS_TVALID <= 1'b0;
            M_AXIS_TDATA <= 0;
            M_AXIS_TLAST <= 1'b0;
            M_AXIS_TSTRB <= 0;
        end
        else
        begin
            case (state)
                IDLE:
                    begin
                        state <= INIT_COUNTER;
                    end
                    
                INIT_COUNTER:
                    begin
                        if (count == C_M_START_COUNT - 1)
                        begin
                            state <= SEND_STREAM;
                            count <= 0;
                        end
                        else
                        begin
                            count <= count + 1;
                        end
                    end
                    
                SEND_STREAM:
                    begin
                        if (S_AXIS_TVALID)
                        begin
                            M_AXIS_TDATA <= S_AXIS_TDATA;
                            M_AXIS_TVALID <= 1'b1;
                            M_AXIS_TLAST <= S_AXIS_TLAST;
                            M_AXIS_TSTRB <= S_AXIS_TSTRB;
                            state <= WAIT_READY;
                        end
                    end
                    
                WAIT_READY:
                    begin
                        if (M_AXIS_TREADY)
                        begin
                            M_AXIS_TVALID <= 1'b0;
                            state <= SEND_STREAM;
                        end
                    end
                    
                default:
                    state <= IDLE;
            endcase
        end
    end

endmodule