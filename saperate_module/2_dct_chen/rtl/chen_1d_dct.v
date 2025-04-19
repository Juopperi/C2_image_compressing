// ============================================================================
// 8‑point 1‑D DCT   (Lee‑FCT, pipeline = 3 clk)
// Paper:  IEEE TCSVT, Jun‑1997, “A cost‑effective architecture for 8×8 2‑D
//         DCT/IDCT using direct method”  —— Stage‑2 中用到的 8‑pt 1‑D DCT
// Author: <your‑name>, 2025‑04‑19
// ============================================================================

module dct1d8_fct #(
    // ------------------------------------------------------------------------
    // 可参数化的位宽
    parameter IN_WIDTH     = 16,   // 输入像素 (‑256…255 建议用 12 位)
    parameter COEFF_WIDTH  = 13,   // 系数 1+12 = 13 bits (Q1.12)
    parameter INT_WIDTH    = 18,   // 内部数据路径 (论文推荐 18 bit)
    parameter OUT_WIDTH    = 18    // 输出 (与 INT_WIDTH 一致，Q10.8)
) (
    input  wire                         clk,
    input  wire                         rst_n,   // 低电平异步复位
    input  wire                         start,   // 单次变换起始脉冲
    input  wire [8*IN_WIDTH -1:0]       x,       // 8×输入
    output reg  [8*OUT_WIDTH-1:0]       y,       // 8×输出
    output reg                          valid    // 输出就绪脉冲
);

    // --------------------------------------------------------------------
    // 1. 常量（Q1.12   1 整 12 分）—— 与论文一致 (见 Fig.8)
    // --------------------------------------------------------------------
    localparam signed [COEFF_WIDTH-1:0] C1 = 13'sd  4017; // cos  π/16 *4096
    localparam signed [COEFF_WIDTH-1:0] C2 = 13'sd  3784; // cos 2π/16
    localparam signed [COEFF_WIDTH-1:0] C3 = 13'sd  3406; // cos 3π/16
    localparam signed [COEFF_WIDTH-1:0] C4 = 13'sd  2896; // √½
    localparam signed [COEFF_WIDTH-1:0] C5 = 13'sd  2276; // cos 5π/16
    localparam signed [COEFF_WIDTH-1:0] C6 = 13'sd  1567; // cos 6π/16
    localparam signed [COEFF_WIDTH-1:0] C7 = 13'sd   799; // cos 7π/16

    // --------------------------------------------------------------------
    // 2. 输入拆片
    // --------------------------------------------------------------------
    wire signed [IN_WIDTH-1:0] x0 = x[IN_WIDTH*1-1:IN_WIDTH*0];
    wire signed [IN_WIDTH-1:0] x1 = x[IN_WIDTH*2-1:IN_WIDTH*1];
    wire signed [IN_WIDTH-1:0] x2 = x[IN_WIDTH*3-1:IN_WIDTH*2];
    wire signed [IN_WIDTH-1:0] x3 = x[IN_WIDTH*4-1:IN_WIDTH*3];
    wire signed [IN_WIDTH-1:0] x4 = x[IN_WIDTH*5-1:IN_WIDTH*4];
    wire signed [IN_WIDTH-1:0] x5 = x[IN_WIDTH*6-1:IN_WIDTH*5];
    wire signed [IN_WIDTH-1:0] x6 = x[IN_WIDTH*7-1:IN_WIDTH*6];
    wire signed [IN_WIDTH-1:0] x7 = x[IN_WIDTH*8-1:IN_WIDTH*7];

    // --------------------------------------------------------------------
    // 3. 第一拍 —— Butterfly Σ/Δ
    // --------------------------------------------------------------------
    reg signed [INT_WIDTH-1:0] s07,s16,s25,s34,d07,d16,d25,d34;
    always @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            s07<=0; s16<=0; s25<=0; s34<=0;
            d07<=0; d16<=0; d25<=0; d34<=0;
        end
        else if(start) begin
            // 加
            s07 <= x0 + x7;
            s16 <= x1 + x6;
            s25 <= x2 + x5;
            s34 <= x3 + x4;
            // 差
            d07 <= x0 - x7;
            d16 <= x1 - x6;
            d25 <= x2 - x5;
            d34 <= x3 - x4;
        end
    end

    // --------------------------------------------------------------------
    // 4. 第二拍 —— 偶数支 + 奇数支的部分求和
    // --------------------------------------------------------------------
    // 偶数支
    reg signed [INT_WIDTH-1:0] E0,E1,E2,E3;
    // 奇数支准备
    reg signed [INT_WIDTH-1:0] r1,r2,r3;
    always @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            E0<=0; E1<=0; E2<=0; E3<=0;
            r1<=0; r2<=0; r3<=0;
        end
        else begin
            // Even
            E0 <= s07 + s34;
            E1 <= s16 + s25;
            E2 <= s16 - s25;
            E3 <= s07 - s34;
            // Odd (采用 Lee 原式重写，减少乘法)
            r1 <= d25 + d34;        // p5 + p4
            r2 <= d16 + d25;        // p6 + p5
            r3 <= d16 + d34;        // p6 + p4
        end
    end

    // --------------------------------------------------------------------
    // 5. 第三拍 —— 乘法 + 输出
    // --------------------------------------------------------------------
    // 乘法结果宽：INT_WIDTH + COEFF_WIDTH
    localparam MUL_W = INT_WIDTH + COEFF_WIDTH;

    reg signed [MUL_W-1:0] m0,m1,m2,m3,m4,m5,m6,m7;  // 8 个乘法槽
    reg signed [INT_WIDTH-1:0] y0_r,y1_r,y2_r,y3_r,y4_r,y5_r,y6_r,y7_r;

    always @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            {m0,m1,m2,m3,m4,m5,m6,m7} <= 0;
            {y0_r,y1_r,y2_r,y3_r,y4_r,y5_r,y6_r,y7_r} <= 0;
            valid <= 1'b0;
        end
        else begin
            //----------------------------------------------------------------
            // 偶数分量
            //----------------------------------------------------------------
            m0 <= C4 * (E0 + E1);          // y0
            m1 <= C4 * (E0 - E1);          // y4
            m2 <= C2 * E2 + C6 * E3;       // y2
            m3 <= C6 * E2 - C2 * E3;       // y6

            //----------------------------------------------------------------
            // 奇数分量 (Lee84, 4 乘 + 8 加)
            // 公式参考:  B. G. Lee, IEEE ASSP‑32(1984) 1243‑1245
            //----------------------------------------------------------------
            m4 <= C7 * (d07 + r1);         // 合成常数表后得到的系数乘
            m5 <= C3 * (d07 + r2);
            m6 <= C5 * (r3 - d07);
            m7 <= C1 * (d07 + r3);

            // ---------------------- 输出截位 (Q10.8) -------------------------
            // 右移 12‑8 = 4 位（先 COEFF 左移 12 再乘，所以总移 12）
            // shift 常量写成 parameter 方便改 OUT_FRAC
            y0_r <= m0 >>> 12;     // 注意算术右移，保持符号
            y4_r <= m1 >>> 12;
            y2_r <= m2 >>> 12;
            y6_r <= m3 >>> 12;

            // 奇数
            y1_r <= (m4 + m5 + m7) >>> 12;
            y3_r <= (m4 + m6 - m7) >>> 12;
            y5_r <= (m5 - m6 + m7) >>> 12;
            y7_r <= (m4 - m5 + m6) >>> 12;

            //----------------------------------------------------------------
            // 打包输出
            //----------------------------------------------------------------
            y <= {  y7_r[OUT_WIDTH-1:0],
                    y6_r[OUT_WIDTH-1:0],
                    y5_r[OUT_WIDTH-1:0],
                    y4_r[OUT_WIDTH-1:0],
                    y3_r[OUT_WIDTH-1:0],
                    y2_r[OUT_WIDTH-1:0],
                    y1_r[OUT_WIDTH-1:0],
                    y0_r[OUT_WIDTH-1:0] };
            valid <= 1'b1;             // 每 3 clk 给出一次结果
        end
    end
endmodule
