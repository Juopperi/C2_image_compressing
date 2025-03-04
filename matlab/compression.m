%Extract RGB values from the image, the output is a height X width X 3 array
    RGB = imread("Source pictures/8.jpeg");
    %Each individual component is extracted
    r=double(RGB(:,:,1));
    g=double(RGB(:,:,2));
    b=double(RGB(:,:,3));
    image_dim=size(r);
    height=image_dim(1);
    width=image_dim(2);
        matrix_writing(r,g,b,'rgb.txt');

%Obtain Y, Cb and Cr values by matrix multiplication
    %Y, Cb and Cr are defined as empty matrices
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
        matrix_writing(Y,Cb,Cr,'rgb2ycbcr.txt');

%Chroma subsampling (specified in file, the commented function below explains the concept, although only no subsampling works as of now)
    sub_mode=0;
    % if (sub_mode~=0)
    %     [Cb,Cr]=chromasub(Cb,Cr,sub_mode,height,width);
    % end

%Extract 128 to center around zero
    Y=Y-128;
    Cb=Cb-128;
    Cr=Cr-128;
        matrix_writing(Y,Cb,Cr,'levelshift.txt');

%DCT transform
    for i=1:8:height-7
        for j=1:8:width-7
            Y(i:i+7,j:j+7) =dct_tr(Y(i:i+7,j:j+7));
            Cb(i:i+7,j:j+7)=dct_tr(Cb(i:i+7,j:j+7));
            Cr(i:i+7,j:j+7)=dct_tr(Cr(i:i+7,j:j+7));
        end
    end
        matrix_writing(Y,Cb,Cr,'dct.txt');

%Quantization (between 0 and 100)
    [Y, Cb, Cr, TableY, TableC]=quant(Y,Cb,Cr,50,height,width);
        matrix_writing(Y,Cb,Cr,'quant.txt');

%Encoding
    bx=1;
    by=1;
    Y_prev_dc=0;
    Cb_prev_dc=0;
    Cr_prev_dc=0;
    %A string is defined for each component at each block, one for DC and
    %one for AC
    Y_code=strings(height/8,width/8);
    Cb_code=strings(height/8,width/8);
    Cr_code=strings(height/8,width/8);
    Y_dc=strings(height/8,width/8);
    Cb_dc=strings(height/8,width/8);
    Cr_dc=strings(height/8,width/8);
    %Define row and column vectors in zigzag order
    VecI=[1 1 2 3 2 1 1 2 3 4 5 4 3 2 1 1 2 3 4 5 6 7 6 5 4 3 2 1 1 2 3 4 5 6 7 8 8 7 6 5 4 3 2 3 4 5 6 7 8 8 7 6 5 4 5 6 7 8 8 7 6 7 8 8];
    VecJ=[1 2 1 1 2 3 4 3 2 1 1 2 3 4 5 6 5 4 3 2 1 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 8 7 6 5 4 3 4 5 6 7 8 8 7 6 5 6 7 8 8 7 8];
    for i=1:8:height-7
        for j=1:8:width-7
            %AC
            Y_code(bx,by)=encoding(Y(i:i+7,j:j+7),VecI,VecJ,'y');    
            Cb_code(bx,by)=encoding(Cb(i:i+7,j:j+7),VecI,VecJ,'cbcr');
            Cr_code(bx,by)=encoding(Cr(i:i+7,j:j+7),VecI,VecJ,'cbcr');
           
            %DC code (first element of each 8x8 block) is coded
            %differentially (each cofficient is the difference between
            %current block's 1st element and previous block's 1st element)
            Y_dc(bx,by)=huffman_dc_y(Y_prev_dc,Y(i,j));
            Y_prev_dc=Y(i,j);
            Cb_dc(bx,by)=huffman_dc_cbcr(Cb_prev_dc,Cb(i,j));
            Cb_prev_dc=Cb(i,j);
            Cr_dc(bx,by)=huffman_dc_cbcr(Cr_prev_dc,Cr(i,j));
            Cr_prev_dc=Cr(i,j);
            %Writing this data to a .txt file would not be convenient, it's
            %better to view the results in Matlab workspace
            by=by+1;
            if (by>width/8)
                by=1;
            end
        end
        bx=bx+1;
    end

%File writing (specify desired compressed image file name as the last argument of this function)
    [img_code, img_data]=file_writing(Y_dc,Cb_dc,Cr_dc,Y_code,Cb_code,Cr_code,VecI,VecJ,TableY,TableC,height,width,sub_mode,"photo.jpeg");

%Reconstructing image from Y,Cb,Cr matrices
    % [Rdec,Gdec,Bdec]=reconstruct(Y,Cb,Cr,TableY,TableC,height,width);
    % dec_matrix=uint8(cat(3, Rdec, Gdec, Bdec));
    % imshow(dec_matrix);
    % title('Decoded image');
