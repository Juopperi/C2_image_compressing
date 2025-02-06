function [Y, Cb, Cr, Ts] = quant(Y,Cb,Cr,Q,height,width)
    %// Define base quantization matrix
    Tb = [16 11 10 16 24 40 51 61; 12 12 14 19 26 58 60 55; ...
         14 13 16 24 40 57 69 56; 14 17 22 29 51 87 80 62; ...
         18 22 37 56 68 109 103 77; 24 35 55 64 81 104 113 92; ...
         49 64 78 87 103 121 120 101; 72 92 95 98 112 100 103 99];
    %// Determine S
    if (Q < 50)
        S = 5000/Q;
    else
        S = 200 - 2*Q;
    end  
    Ts = floor((S*Tb + 50) / 100);
    Ts(Ts == 0) = 1; % // Prevent divide by 0 error

    for i=1:8:height-7
        for j=1:8:width-7
            Y(i:i+7,j:j+7)=round(Y(i:i+7,j:j+7)./Ts);
            Cb(i:i+7,j:j+7)=round(Cb(i:i+7,j:j+7)./Ts);
            Cr(i:i+7,j:j+7)=round(Cr(i:i+7,j:j+7)./Ts);
        end
    end

end