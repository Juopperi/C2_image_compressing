function [Rdec,Gdec,Bdec] = reconstruct(Y,Cb,Cr,TableY,TableC,height,width,height_cb,width_cb)
    % If chroma channel dimensions not provided, use luminance dimensions
    if nargin < 8
        height_cb = height;
        width_cb = width;
    end
    
    %Dequantization
    for i=1:8:height-7
        for j=1:8:width-7
           Y(i:i+7,j:j+7)=Y(i:i+7,j:j+7).*TableY;
        end
    end
    
    for i=1:8:height_cb-7
        for j=1:8:width_cb-7
           Cb(i:i+7,j:j+7)=Cb(i:i+7,j:j+7).*TableC;
           Cr(i:i+7,j:j+7)=(Cr(i:i+7,j:j+7).*TableC);
        end
    end
    
    %Inverse DCT
    for i=1:8:height-7
        for j=1:8:width-7
            Y(i:i+7,j:j+7)=dct_inv(Y(i:i+7,j:j+7));
        end
    end
    
    for i=1:8:height_cb-7
        for j=1:8:width_cb-7
            Cb(i:i+7,j:j+7)=dct_inv(Cb(i:i+7,j:j+7));
            Cr(i:i+7,j:j+7)=dct_inv(Cr(i:i+7,j:j+7));
        end
    end
    
    %Adding 128
    Y=Y+128;
    Cb=Cb+128;
    Cr=Cr+128;
    
    % If chroma channels were subsampled, upsample back to original dimensions
    if height_cb ~= height || width_cb ~= width
        % Create temporary chroma channels with same dimensions as luminance
        Cb_full = zeros(height, width);
        Cr_full = zeros(height, width);
        
        % Simple nearest-neighbor interpolation upsampling
        scale_h = height / height_cb;
        scale_w = width / width_cb;
        
        for i=1:height
            for j=1:width
                i_cb = max(1, min(height_cb, ceil(i/scale_h)));
                j_cb = max(1, min(width_cb, ceil(j/scale_w)));
                Cb_full(i,j) = Cb(i_cb,j_cb);
                Cr_full(i,j) = Cr(i_cb,j_cb);
            end
        end
        
        Cb = Cb_full;
        Cr = Cr_full;
    end
    
    %Converting to RGB
    Rdec = Y + 1.402*(Cr - 128);
    Gdec = Y - 0.344136*(Cb - 128) - 0.714136*(Cr - 128);
    Bdec = Y + 1.772*(Cb - 128);
end