% 读取 bin 文件（uint8 单通道灰度）
fileID = fopen('input.bin', 'rb');
raw_data = fread(fileID, 'uint8');
fclose(fileID);

% 设定图像尺寸
height = 4032; % 替换为实际值
width = 6040;  % 替换为实际值

% 重新排列为 2D 灰度图像
raw_data = reshape(raw_data, [width, height])';

% 转换为 double 以进行计算
gray_data = double(raw_data);

% 复制到 3 通道（兼容 YCbCr 转换）
r = gray_data;
g = gray_data;
b = gray_data;

% RGB → YCbCr 颜色转换
Y = 0.299 * r + 0.587 * g + 0.114 * b;
Cb = -0.1687 * r - 0.3313 * g + 0.5 * b + 128;
Cr = 0.5 * r - 0.4187 * g - 0.0813 * b + 128;

% 色度下采样
[Cb, Cr] = chromasub(Cb, Cr, 2, height, width);

% 归一化
Y = Y - 128;
Cb = Cb - 128;
Cr = Cr - 128;

% DCT 变换（8×8 块）
for i = 1:8:height-7
    for j = 1:8:width-7
        Y(i:i+7, j:j+7) = dct_tr(Y(i:i+7, j:j+7));
        Cb(i:i+7, j:j+7) = dct_tr(Cb(i:i+7, j:j+7));
        Cr(i:i+7, j:j+7) = dct_tr(Cr(i:i+7, j:j+7));
    end
end

% 量化
[Y, Cb, Cr, Q] = quant(Y, Cb, Cr, 100, height, width);

% 熵编码（修正 `entropy` 参数问题）
bx = 1;
by = 1;
Y_prev_dc = 0;
Cb_prev_dc = 0;
Cr_prev_dc = 0;

% 确保 VecI 和 VecJ 适用于 8x8 块
VecI=[1 1 2 3 2 1 1 2 3 4 5 4 3 2 1 1 2 3 4 5 6 7 6 5 4 3 2 1 1 2 3 4 5 6 7 8 8 7 6 5 4 3 2 3 4 5 6 7 8 8 7 6 5 4 5 6 7 8 8 7 6 7 8 8];
VecJ=[1 2 1 1 2 3 4 3 2 1 1 2 3 4 5 6 5 4 3 2 1 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 8 7 6 5 4 3 4 5 6 7 8 8 7 6 5 6 7 8 8 7 8];


for i = 1:8:height-1
    for j = 1:8:width-1
        BlockY = Y(i:i+7, j:j+7);
        BlockCb = Cb(i:i+7, j:j+7);
        BlockCr = Cr(i:i+7, j:j+7);

        % 确保 `entropy()` 接收正确参数
        Y_code(bx, by) = entropy(BlockY, VecI, VecJ);
        Cb_code(bx, by) = entropy(BlockCb, VecI, VecJ);
        Cr_code(bx, by) = entropy(BlockCr, VecI, VecJ);

        % DC 差分编码
        Y_dc(bx, by) = Y(i, j) - Y_prev_dc;
        Y_prev_dc = Y(i, j);

        Cb_dc(bx, by) = Cb(i, j) - Cb_prev_dc;
        Cb_prev_dc = Cb(i, j);

        Cr_dc(bx, by) = Cr(i, j) - Cr_prev_dc;
        Cr_prev_dc = Cr(i, j);

        by = by + 1;
        if (by > width / 8)
            by = 1;
        end
    end
    bx = bx + 1;
end

% 解码并恢复图像
[Rdec, Gdec, Bdec] = decoding(Y, Cb, Cr, Q, height, width);
dec_matrix = uint8(cat(3, Rdec, Gdec, Bdec));

% 保存解码后的图像
imwrite(dec_matrix, 'Decoded_image.png');
imshow(dec_matrix);
title('Decoded image');
