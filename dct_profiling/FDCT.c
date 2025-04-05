#include <stdio.h>
#include <math.h>

#define PI M_PI

double cos_table[8][8];

// 初始化余弦查找表
void init_cos_table() {
    for (int u = 0; u < 8; u++) {
        for (int x = 0; x < 8; x++) {
            cos_table[u][x] = cos(((2 * x + 1) * u * PI) / 16.0);
        }
    }
}

// 前向 DCT 变换函数
void FDCT(int ImageBlock[8][8], int CoefficientMatrix[8][8]) {
    double FrequencyBlock[8][8] = {0.0};

    for (int u = 0; u < 8; u++) {
        for (int v = 0; v < 8; v++) {

            double cu = (u == 0) ? (1.0 / sqrt(2.0)) : 1.0;
            double cv = (v == 0) ? (1.0 / sqrt(2.0)) : 1.0;
            double sum = 0.0;

            for (int x = 0; x < 8; x++) {
                for (int y = 0; y < 8; y++) {
                    double pixel = ImageBlock[x][y];
                    double cos_x = cos_table[u][x];  // 查表代替计算
                    double cos_y = cos_table[v][y];  // 查表代替计算
                    sum += pixel * cos_x * cos_y;
                }
            }

            FrequencyBlock[u][v] = 0.25 * cu * cv * sum;

            // 四舍五入保存为整数结果
            CoefficientMatrix[u][v] = (int)round(FrequencyBlock[u][v]);
        }
    }
}

int main() {
    init_cos_table();

    int input[8][8] = {
        {52, 55, 61, 66, 70, 61, 64, 73},
        {63, 59, 66, 90, 109, 85, 69, 72},
        {62, 59, 68, 113, 144, 104, 66, 73},
        {63, 58, 71, 122, 154, 106, 70, 69},
        {67, 61, 68, 104, 126, 88, 68, 70},
        {79, 65, 60, 70, 77, 68, 58, 75},
        {85, 71, 64, 59, 55, 61, 65, 83},
        {87, 79, 69, 68, 65, 76, 78, 94}
    };

    int output[8][8];
    FDCT(input, output);

    // 输出 DCT 结果
    printf("DCT Coefficients:\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%4d ", output[i][j]);
        }
        printf("\n");
    }

    return 0;
}
