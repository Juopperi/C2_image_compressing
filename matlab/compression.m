%Extract RGB values from the image
RGB = imread("Flower landscape.jpg");
r=double(RGB(:,:,1));
g=double(RGB(:,:,2));
b=double(RGB(:,:,3));
image_dim=size(r);
height=image_dim(1);
width=image_dim(2);

%Obtain Y, Cb and Cr values by matrix multiplication
Y =zeros(image_dim);
Cb=zeros(image_dim);
Cr=zeros(image_dim);
for i=1:1:height
    for j=1:1:width
        Y(i,j) =0.299*r(i,j)+0.587*g(i,j)+0.114*b(i,j);
        Cb(i,j)=-0.1687*r(i,j)-0.3313*g(i,j)+0.5*b(i,j)+128;
        Cr(i,j)=0.5*r(i,j)-0.4187*g(i,j)-0.0813*b(i,j)+128;
    end
end

%Chroma subsampling
[Cb,Cr]=chromasub(Cb,Cr,2,height,width);
%Extract 128 to center around zero
Y=Y-128;
Cb=Cb-128;
Cr=Cr-128;

%DCT transform
for i=1:8:height-7
    for j=1:8:width-7
        Y(i:i+7,j:j+7)=dct_tr(Y(i:i+7,j:j+7));
        Cb(i:i+7,j:j+7)=dct_tr(Cb(i:i+7,j:j+7));
        Cr(i:i+7,j:j+7)=dct_tr(Cr(i:i+7,j:j+7));
    end
end

%Quantization (between 0 and 100)
[Y, Cb, Cr, Q]=quant(Y,Cb,Cr,100,height,width);

%Encoding
   bx=1;
   by=1;
   Y_prev_dc=0;
   Cb_prev_dc=0;
   Cr_prev_dc=0;
   VecI=[1 1 2 3 2 1 1 2 3 4 5 4 3 2 1 1 2 3 4 5 6 7 6 5 4 3 2 1 1 2 3 4 5 6 7 8 8 7 6 5 4 3 2 3 4 5 6 7 8 8 7 6 5 4 5 6 7 8 8 7 6 7 8 8];
   VecJ=[1 2 1 1 2 3 4 3 2 1 1 2 3 4 5 6 5 4 3 2 1 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 8 7 6 5 4 3 4 5 6 7 8 8 7 6 5 6 7 8 8 7 8];
   fileID = fopen('zigzagOutput.txt','w');
for i=1:8:height-1
    for j=1:8:width-1
        %Entropy
        fprintf(fileID,"\nY: ");
        Y_code(bx,by)=entropy(Y(i:i+7,j:j+7),VecI,VecJ,fileID);
        fprintf(fileID,"\nCb: ");
        Cb_code(bx,by)=entropy(Cb(i:i+7,j:j+7),VecI,VecJ,fileID);
        fprintf(fileID,"\nCr: ");
        Cr_code(bx,by)=entropy(Cr(i:i+7,j:j+7),VecI,VecJ,fileID);
        Y_dc(bx,by)=Y(i,j)-Y_prev_dc;
        Y_prev_dc=Y(i,j);
        Cb_dc(bx,by)=Cb(i,j)-Cb_prev_dc;
        Cb_prev_dc=Cb(i,j);
        Cr_dc(bx,by)=Cr(i,j)-Cr_prev_dc;
        Cr_prev_dc=Cr(i,j);

        by=by+1;
        if (by>width/8)
            by=1;
        end
    end
    bx=bx+1;
end
fclose(fileID);

%Decoding and comparison with original
[Rdec,Gdec,Bdec]=decoding(Y,Cb,Cr,Q,height,width);
dec_matrix=uint8(cat(3, Rdec, Gdec, Bdec));
imshow(dec_matrix);
title('Decoded image');
