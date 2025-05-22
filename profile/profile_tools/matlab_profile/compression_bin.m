%% Changes made to the binary image compression code:
%
% 1. Added timing functionality to measure execution time of each processing step
% 2. Fixed chroma subsampling processing to handle different channel dimensions
% 3. Added support for proper DCT processing with subsampled chroma channels
% 4. Enhanced encoding to handle different dimensions of Y and Cb/Cr channels
% 5. Added upsampling in decoding process to restore full resolution
% 6. Added percentage calculations for execution time of each stage
% 7. Converted all Chinese text to English for better international collaboration

% Start recording total execution time
total_time_start = tic;

% Read binary file (uint8 single-channel grayscale)
time_read_start = tic;
fileID = fopen('input.bin', 'rb');
raw_data = fread(fileID, 'uint8');
fclose(fileID);

% Set image dimensions
height = 4032; % Replace with actual value
width = 6040;  % Replace with actual value

% Reshape to 2D grayscale image
raw_data = reshape(raw_data, [width, height])';

% Convert to double for processing
gray_data = double(raw_data);

% Copy to 3 channels (compatible with YCbCr conversion)
r = gray_data;
g = gray_data;
b = gray_data;
time_read = toc(time_read_start);
fprintf('Image loading and preprocessing time: %.4f seconds\n', time_read);

% RGB to YCbCr color conversion
time_rgb2ycbcr_start = tic;
Y = 0.299 * r + 0.587 * g + 0.114 * b;
Cb = -0.1687 * r - 0.3313 * g + 0.5 * b + 128;
Cr = 0.5 * r - 0.4187 * g - 0.0813 * b + 128;
time_rgb2ycbcr = toc(time_rgb2ycbcr_start);
fprintf('RGB to YCbCr conversion time: %.4f seconds\n', time_rgb2ycbcr);

% Chroma subsampling
time_subsampling_start = tic;
[Cb, Cr] = chromasub(Cb, Cr, 2, height, width);
% Get new dimensions after subsampling
cb_size = size(Cb);
height_cb = cb_size(1);
width_cb = cb_size(2);
time_subsampling = toc(time_subsampling_start);
fprintf('Chroma subsampling time: %.4f seconds\n', time_subsampling);
fprintf('Subsampled chroma dimensions: %d x %d\n', height_cb, width_cb);

% Level shift (normalize around zero)
time_levelshift_start = tic;
Y = Y - 128;
Cb = Cb - 128;
Cr = Cr - 128;
time_levelshift = toc(time_levelshift_start);
fprintf('Level shift time: %.4f seconds\n', time_levelshift);

% DCT transform (8×8 blocks)
time_dct_start = tic;
% Luminance channel Y uses original dimensions
for i = 1:8:height-7
    for j = 1:8:width-7
        Y(i:i+7, j:j+7) = dct_tr(Y(i:i+7, j:j+7));
    end
end

% Chroma channels Cb and Cr use subsampled dimensions
for i = 1:8:height_cb-7
    for j = 1:8:width_cb-7
        Cb(i:i+7, j:j+7) = dct_tr(Cb(i:i+7, j:j+7));
        Cr(i:i+7, j:j+7) = dct_tr(Cr(i:i+7, j:j+7));
    end
end
time_dct = toc(time_dct_start);
fprintf('DCT transform time: %.4f seconds\n', time_dct);

% Quantization
time_quant_start = tic;
[Y, Cb, Cr, Q] = quant(Y, Cb, Cr, 100, height, width, height_cb, width_cb);
time_quant = toc(time_quant_start);
fprintf('Quantization time: %.4f seconds\n', time_quant);

% Entropy encoding (fix for entropy parameters)
time_encoding_start = tic;
bx = 1;
by = 1;
Y_prev_dc = 0;
Cb_prev_dc = 0;
Cr_prev_dc = 0;

% Ensure VecI and VecJ are suitable for 8x8 blocks
VecI=[1 1 2 3 2 1 1 2 3 4 5 4 3 2 1 1 2 3 4 5 6 7 6 5 4 3 2 1 1 2 3 4 5 6 7 8 8 7 6 5 4 3 2 3 4 5 6 7 8 8 7 6 5 4 5 6 7 8 8 7 6 7 8 8];
VecJ=[1 2 1 1 2 3 4 3 2 1 1 2 3 4 5 6 5 4 3 2 1 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 8 7 6 5 4 3 4 5 6 7 8 8 7 6 5 6 7 8 8 7 8];

% Process luminance channel
for i = 1:8:height-7
    for j = 1:8:width-7
        BlockY = Y(i:i+7, j:j+7);
        
        % Ensure entropy() receives correct parameters
        Y_code(bx, by) = entropy(BlockY, VecI, VecJ);
        
        % DC differential encoding
        Y_dc(bx, by) = Y(i, j) - Y_prev_dc;
        Y_prev_dc = Y(i, j);
        
        by = by + 1;
        if (by > width / 8)
            by = 1;
            bx = bx + 1;
        end
    end
end

% Reset indices for chroma channels
bx = 1;
by = 1;
% Process chroma channels
for i = 1:8:height_cb-7
    for j = 1:8:width_cb-7
        BlockCb = Cb(i:i+7, j:j+7);
        BlockCr = Cr(i:i+7, j:j+7);
        
        % Ensure entropy() receives correct parameters
        Cb_code(bx, by) = entropy(BlockCb, VecI, VecJ);
        Cr_code(bx, by) = entropy(BlockCr, VecI, VecJ);
        
        % DC differential encoding
        Cb_dc(bx, by) = Cb(i, j) - Cb_prev_dc;
        Cb_prev_dc = Cb(i, j);
        
        Cr_dc(bx, by) = Cr(i, j) - Cr_prev_dc;
        Cr_prev_dc = Cr(i, j);
        
        by = by + 1;
        if (by > width_cb / 8)
            by = 1;
            bx = bx + 1;
        end
    end
end
time_encoding = toc(time_encoding_start);
fprintf('Encoding time: %.4f seconds\n', time_encoding);

% Decode and restore image
time_decoding_start = tic;
[Rdec, Gdec, Bdec] = decoding(Y, Cb, Cr, Q, height, width, height_cb, width_cb);
dec_matrix = uint8(cat(3, Rdec, Gdec, Bdec));
time_decoding = toc(time_decoding_start);
fprintf('Decoding time: %.4f seconds\n', time_decoding);

% Save decoded image
time_save_start = tic;
imwrite(dec_matrix, 'Decoded_image.png');
time_save = toc(time_save_start);
fprintf('Image saving time: %.4f seconds\n', time_save);

% End recording total execution time
total_time = toc(total_time_start);
fprintf('Total execution time: %.4f seconds\n', total_time);

% Display percentage of total time for each stage
fprintf('\nExecution time breakdown:\n');
fprintf('Image loading and preprocessing: %.2f%%\n', time_read/total_time*100);
fprintf('RGB to YCbCr conversion: %.2f%%\n', time_rgb2ycbcr/total_time*100);
fprintf('Chroma subsampling: %.2f%%\n', time_subsampling/total_time*100);
fprintf('Level shift: %.2f%%\n', time_levelshift/total_time*100);
fprintf('DCT transform: %.2f%%\n', time_dct/total_time*100);
fprintf('Quantization: %.2f%%\n', time_quant/total_time*100);
fprintf('Encoding: %.2f%%\n', time_encoding/total_time*100);
fprintf('Decoding: %.2f%%\n', time_decoding/total_time*100);
fprintf('Image saving: %.2f%%\n', time_save/total_time*100);

imshow(dec_matrix);
title('Decoded image');
