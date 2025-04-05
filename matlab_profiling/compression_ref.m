%Extract data from image
RGB = imread("Lake landscape.png");
%Change to Y,Cb;Cr space
[YCBCR]=rgb2ycbcr(RGB);
%Chroma subsampling
Y=double(YCBCR(:,:,1));
Cb=double(YCBCR(:,:,2));
Cr=double(YCBCR(:,:,3));

%Extract 128 to center around zero
Y=Y-128;
Cb=Cb-128;
Cr=Cr-128;

for i=1:8:505
    for j=1:8:505
        Y(i:i+7,j:j+7)=dct2(Y(i:i+7,j:j+7));
        Cb(i:i+7,j:j+7)=dct2(Cb(i:i+7,j:j+7));
        Cr(i:i+7,j:j+7)=dct2(Cr(i:i+7,j:j+7));
    end
end

%Quantization
[Y Cb Cr, Q]=quant(50);

%Dequantization
for i=1:8:505
    for j=1:8:505
       Y(i:i+7,j:j+7)=Y(i:i+7,j:j+7).*Q;
       Cb(i:i+7,j:j+7)=Cb(i:i+7,j:j+7).*Q;
       Cr(i:i+7,j:j+7)=Cr(i:i+7,j:j+7).*Q;
    end
end

%Inverse DCT
for i=1:8:505
    for j=1:8:505
        Y(i:i+7,j:j+7)=idct2(Y(i:i+7,j:j+7));
        Cb(i:i+7,j:j+7)=idct2(Cb(i:i+7,j:j+7));
        Cr(i:i+7,j:j+7)=idct2(Cr(i:i+7,j:j+7));
    end
end

%Adding 128
Y=Y+128;
Cb=Cb+128;
Cr=Cr+128;

%Reverting to RGB
YCBCRdec=cat(3,Y,Cb,Cr);
RGBdec=ycbcr2rgb(YCBCRdec);
imshow(uint8(RGBdec));
title('Decoded image');