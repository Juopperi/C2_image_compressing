function [Rdec,Gdec,Bdec] = decoding(Y,Cb,Cr,Q,height,width,height_cb,width_cb)
    % 如果没有提供色度通道尺寸，使用亮度通道尺寸
    if nargin < 7
        height_cb = height;
        width_cb = width;
    end
    
    %Dequantization
    for i=1:8:height-7
        for j=1:8:width-7
           Y(i:i+7,j:j+7)=Y(i:i+7,j:j+7).*Q;
        end
    end
    
    for i=1:8:height_cb-7
        for j=1:8:width_cb-7
           Cb(i:i+7,j:j+7)=Cb(i:i+7,j:j+7).*Q;
           Cr(i:i+7,j:j+7)=(Cr(i:i+7,j:j+7).*Q);
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
    
    % 如果色度通道已下采样，需要上采样回原始尺寸
    if height_cb ~= height || width_cb ~= width
        % 创建与亮度通道同尺寸的临时色度通道
        Cb_full = zeros(height, width);
        Cr_full = zeros(height, width);
        
        % 简单的最近邻插值上采样
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