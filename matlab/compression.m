%Extract RGB values from the image
RGB = imread("Lake landscape.png");
r=double(RGB(:,:,1));
g=double(RGB(:,:,2));
b=double(RGB(:,:,3));

%Obtain Y, Cb and Cr values by matrix multiplication
Y =zeros(512);
Cb=zeros(512);
Cr=zeros(512);
for i=1:1:512
    for j=1:1:512
        Y(i,j) =0.299*r(i,j)+0.587*g(i,j)+0.114*b(i,j);
        Cb(i,j)=-0.1687*r(i,j)-0.3313*g(i,j)+0.5*b(i,j)+128;
        Cr(i,j)=0.5*r(i,j)-0.4187*g(i,j)-0.0813*b(i,j)+128;
    end
end

%Chroma subsampling
[Cb,Cr]=chromasub(Cb,Cr,2);
%Extract 128 to center around zero
Y=Y-128;
Cb=Cb-128;
Cr=Cr-128;

%DCT transform (fix)
for i=1:8:505
    for j=1:8:505
        Y(i:i+7,j:j+7)=dct_tr(Y(i:i+7,j:j+7));
        Cb(i:i+7,j:j+7)=dct_tr(Cb(i:i+7,j:j+7));
        Cr(i:i+7,j:j+7)=dct_tr(Cr(i:i+7,j:j+7));
    end
end

%Quantization
Q=[16 11 10 16 24 40 51 61;
   12 12 14 19 26 58 60 55;
   14 13 16 24 40 57 69 56;
   14 17 22 29 51 87 80 62;
   18 22 37 56 68 109 103 77;
   24 35 55 64 81 104 113 92;
   49 64 78 87 103 121 120 101;
   72 92 95 98 112 100 103 99];
for i=1:8:505
    for j=1:8:505
        Y(i:i+7,j:j+7)=round(Y(i:i+7,j:j+7)./Q);
        Cb(i:i+7,j:j+7)=round(Cb(i:i+7,j:j+7)./Q);
        Cr(i:i+7,j:j+7)=round(Cr(i:i+7,j:j+7)./Q);
    end
end

%Encoding
   %Image is 512x512, there are 4096 8x8 blocks (4096=64x64)
   bx=1;
   by=1;
   Y_prev_dc=0;
   Cb_prev_dc=0;
   Cr_prev_dc=0;
for i=1:8:505
    for j=1:8:505
        %Entropy
        Y_code(bx,by)=entropy(Y(i:i+7,j:j+7));
        Cb_code(bx,by)=entropy(Cb(i:i+7,j:j+7));
        Cr_code(bx,by)=entropy(Cr(i:i+7,j:j+7));
        Y_dc(bx,by)=Y(i,j)-Y_prev_dc;
        Y_prev_dc=Y(i,j);
        Cb_dc(bx,by)=Cb(i,j)-Cb_prev_dc;
        Cb_prev_dc=Cb(i,j);
        Cr_dc(bx,by)=Cr(i,j)-Cr_prev_dc;
        Cr_prev_dc=Cr(i,j);

        by=by+1;
        if (by>64)
            by=1;
        end
    end
    bx=bx+1;
end

%Decoding and comparison with original
[Rdec,Gdec,Bdec]=decoding(Y,Cb,Cr,Q);
dec_matrix=uint8(cat(3, Rdec, Gdec, Bdec));
imshow(dec_matrix);
title('Decoded image');
