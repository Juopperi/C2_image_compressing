%% Changes made to the image compression code:
%
% 1. Added timing functionality to measure execution time of each processing step
% 2. Fixed chroma subsampling processing to handle different channel dimensions
% 3. Added support for proper DCT processing with subsampled chroma channels
% 4. Enhanced encoding to handle different dimensions of Y and Cb/Cr channels
% 5. Added upsampling in decoding process to restore full resolution
% 6. Added percentage calculations for execution time of each stage

%Start recording total execution time
total_time_start = tic;

%Extract RGB values from the image, the output is a height X width X 3 array
    time_read_start = tic;
    RGB = imread("Source pictures/BigBen.jpeg");
    %Each individual component is extracted
    r=double(RGB(:,:,1));
    g=double(RGB(:,:,2));
    b=double(RGB(:,:,3));
    image_dim=size(r);
    height=image_dim(1);
    width=image_dim(2);
    time_read = toc(time_read_start);
    fprintf('Image loading time: %.4f seconds\n', time_read);
        %matrix_writing(r,g,b,'rgb.txt');

%Obtain Y, Cb and Cr values by matrix multiplication
    %Y, Cb and Cr are defined as empty matrices
    time_rgb2ycbcr_start = tic;
    Y =zeros(image_dim);
    Cb=zeros(image_dim);
    Cr=zeros(image_dim);
    %RGB to YCbCr conversion
    for i=1:1:height
        for j=1:1:width
            Y(i,j) =0.299*r(i,j)+0.587*g(i,j)+0.114*b(i,j);
            Cb(i,j)=-0.1687*r(i,j)-0.3313*g(i,j)+0.5*b(i,j)+128;
            Cr(i,j)=0.5*r(i,j)-0.4187*g(i,j)-0.0813*b(i,j)+128;
        end
    end
    time_rgb2ycbcr = toc(time_rgb2ycbcr_start);
    fprintf('RGB to YCbCr conversion time: %.4f seconds\n', time_rgb2ycbcr);
        %matrix_writing(Y,Cb,Cr,'rgb2ycbcr.txt');

%Chroma subsampling
%For subsampling, height must be multiple of 16 and width must be multiple of 32
    time_subsampling_start = tic;
    sub_mode=1;
     if (sub_mode~=0)
         [Cb,Cr]=chromasub(Cb,Cr,sub_mode,height,width);
         % Get new dimensions after subsampling
         cb_size = size(Cb);
         height_cb = cb_size(1);
         width_cb = cb_size(2);
     else
         height_cb = height;
         width_cb = width;
     end
    time_subsampling = toc(time_subsampling_start);
    fprintf('Chroma subsampling time: %.4f seconds\n', time_subsampling);
    fprintf('Subsampled chroma dimensions: %d x %d\n', height_cb, width_cb);

%Extract 128 to center around zero
    time_levelshift_start = tic;
    Y=Y-128;
    Cb=Cb-128;
    Cr=Cr-128;
    time_levelshift = toc(time_levelshift_start);
    fprintf('Level shift time: %.4f seconds\n', time_levelshift);
        %matrix_writing(Y,Cb,Cr,'levelshift.txt');

%DCT transform
    time_dct_start = tic;
    % Luminance channel Y uses original dimensions
    for i=1:8:height-7
        for j=1:8:width-7
            Y(i:i+7,j:j+7) =dct_tr(Y(i:i+7,j:j+7));
        end
    end
    
    % Chroma channels Cb and Cr use subsampled dimensions
    for i=1:8:height_cb-7
        for j=1:8:width_cb-7
            Cb(i:i+7,j:j+7)=dct_tr(Cb(i:i+7,j:j+7));
            Cr(i:i+7,j:j+7)=dct_tr(Cr(i:i+7,j:j+7));
        end
    end
    time_dct = toc(time_dct_start);
    fprintf('DCT transform time: %.4f seconds\n', time_dct);
        %matrix_writing(Y,Cb,Cr,'dct.txt');

%Quantization (specify a level between 1 and 100)
    time_quant_start = tic;
    [Y, Cb, Cr, TableY, TableC]=quant(Y,Cb,Cr,50,height,width,height_cb,width_cb);
    time_quant = toc(time_quant_start);
    fprintf('Quantization time: %.4f seconds\n', time_quant);
        %matrix_writing(Y,Cb,Cr,'quant.txt');

%Encoding
    time_encoding_start = tic;
    % For luminance channel
    bx=1;
    by=1;
    Y_prev_dc=0;
    %A string is defined for each component at each block, one for DC and one for AC
    Y_code=strings(height/8,width/8);
    Y_dc=strings(height/8,width/8);
    
    % For chroma channels
    Cb_code=strings(height_cb/8,width_cb/8);
    Cr_code=strings(height_cb/8,width_cb/8);
    Cb_dc=strings(height_cb/8,width_cb/8);
    Cr_dc=strings(height_cb/8,width_cb/8);
    Cb_prev_dc=0;
    Cr_prev_dc=0;
    
    %Define row and column vectors in zigzag order
    VecI=[1 1 2 3 2 1 1 2 3 4 5 4 3 2 1 1 2 3 4 5 6 7 6 5 4 3 2 1 1 2 3 4 5 6 7 8 8 7 6 5 4 3 2 3 4 5 6 7 8 8 7 6 5 4 5 6 7 8 8 7 6 7 8 8];
    VecJ=[1 2 1 1 2 3 4 3 2 1 1 2 3 4 5 6 5 4 3 2 1 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 8 7 6 5 4 3 4 5 6 7 8 8 7 6 5 6 7 8 8 7 8];
    
    % Process luminance channel
    for i=1:8:height-7
        for j=1:8:width-7
            %AC
            Y_code(bx,by)=encoding(Y(i:i+7,j:j+7),VecI,VecJ,'y');    
           
            %DC code (first element of each 8x8 block) is coded
            %differentially (each cofficient is the difference between
            %current block's 1st element and previous block's 1st element)
            Y_dc(bx,by)=huffman_dc_y(Y_prev_dc,Y(i,j));
            Y_prev_dc=Y(i,j);
            
            by=by+1;
            if (by>width/8)
                by=1;
                bx=bx+1;
            end
        end
    end
    
    % Reset indices for chroma channels
    bx=1;
    by=1;
    % Process chroma channels
    for i=1:8:height_cb-7
        for j=1:8:width_cb-7
            %AC
            Cb_code(bx,by)=encoding(Cb(i:i+7,j:j+7),VecI,VecJ,'cbcr');
            Cr_code(bx,by)=encoding(Cr(i:i+7,j:j+7),VecI,VecJ,'cbcr');
           
            %DC code
            Cb_dc(bx,by)=huffman_dc_cbcr(Cb_prev_dc,Cb(i,j));
            Cb_prev_dc=Cb(i,j);
            Cr_dc(bx,by)=huffman_dc_cbcr(Cr_prev_dc,Cr(i,j));
            Cr_prev_dc=Cr(i,j);
            
            by=by+1;
            if (by>width_cb/8)
                by=1;
                bx=bx+1;
            end
        end
    end
    
    time_encoding = toc(time_encoding_start);
    fprintf('Encoding time: %.4f seconds\n', time_encoding);

%File writing (specify desired compressed image file name as the last argument of this function)
    time_filewriting_start = tic;
    [img_code, img_data]=file_writing(Y_dc,Cb_dc,Cr_dc,Y_code,Cb_code,Cr_code,VecI,VecJ,TableY,TableC,height,width,height_cb,width_cb,sub_mode,"photo.jpeg");
    time_filewriting = toc(time_filewriting_start);
    fprintf('File writing time: %.4f seconds\n', time_filewriting);

%End recording total execution time
total_time = toc(total_time_start);
fprintf('Total execution time: %.4f seconds\n', total_time);

%Display percentage of total time for each stage
fprintf('\nExecution time breakdown:\n');
fprintf('Image loading: %.2f%%\n', time_read/total_time*100);
fprintf('RGB to YCbCr conversion: %.2f%%\n', time_rgb2ycbcr/total_time*100);
fprintf('Chroma subsampling: %.2f%%\n', time_subsampling/total_time*100);
fprintf('Level shift: %.2f%%\n', time_levelshift/total_time*100);
fprintf('DCT transform: %.2f%%\n', time_dct/total_time*100);
fprintf('Quantization: %.2f%%\n', time_quant/total_time*100);
fprintf('Encoding: %.2f%%\n', time_encoding/total_time*100);
fprintf('File writing: %.2f%%\n', time_filewriting/total_time*100);

%Reconstructing image from Y,Cb,Cr matrices
    % [Rdec,Gdec,Bdec]=reconstruct(Y,Cb,Cr,TableY,TableC,height,width,height_cb,width_cb);
    % dec_matrix=uint8(cat(3, Rdec, Gdec, Bdec));
    % imshow(dec_matrix);
    % title('Decoded image');
