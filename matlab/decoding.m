function [Rdec,Gdec,Bdec] = decoding(Y,Cb,Cr,Q)
    %Dequantization
    for i=1:8:505
        for j=1:8:505
           Y(i:i+7,j:j+7)=Y(i:i+7,j:j+7).*Q;
           Cb(i:i+7,j:j+7)=Cb(i:i+7,j:j+7).*Q;
           Cr(i:i+7,j:j+7)=(Cr(i:i+7,j:j+7).*Q);
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
    %Converting to RGB
    Rdec = Y + 1.402*(Cr - 128);
    Gdec = Y - 0.344136*(Cb - 128) - 0.714136*(Cr - 128);
    Bdec = Y + 1.772*(Cb - 128);
end