% compute_2d_dct.m
% 计算 8×8 矩阵 0…63 的 2D DCT

clear; clc;

N = 8;
% 构造输入矩阵 A，按行填充 0 到 63
A = reshape(0:63, N, N);

% 手动生成 DCT 变换矩阵 T
T = zeros(N, N);
for u = 1:N
    if u == 1
        alpha = sqrt(1/2);
    else
        alpha = 1;
    end
    for x = 1:N
        % 注意 MATLAB 下标从 1 开始，所以用 (u-1),(x-1)
        T(u, x) = alpha * cos((2*(x-1)+1)*(u-1)*pi/(2*N));
    end
end

% 计算 2D DCT：C = 1/4 * T * A * T'
C_manual = 0.25 * T * A * T';

% 格式化打印结果
fprintf('手动计算的 2D DCT 系数：\n');
for i = 1:N
    fprintf('%10.6f', C_manual(i, :));
    fprintf('\n');
end

% 如果有 Signal Processing Toolbox，也可以直接调用内置函数：
if exist('dct2','file') == 2
    C_builtin = dct2(A);
    fprintf('\n内置 dct2 函数的结果：\n');
    for i = 1:N
        fprintf('%10.6f', C_builtin(i, :));
        fprintf('\n');
    end
else
    fprintf('\n未检测到 dct2 函数（Signal Processing Toolbox）。\n');
end
