function file_text = file_writing(dc_y,dc_cb,dc_cr,ac_y,ac_cb,ac_cr,VecI,VecJ,TableY,TableC)
    %Open file
        filename= 'photo.txt';
        fid = fopen(filename,'w');

    %Start of image
        fwrite(fid,hex2dec('FF','uint8'));
        fwrite(fid,hex2dec('D8','uint8'));
    %APP0(header)
        fwrite(fid,hex2dec('FF','uint8'));%APP0 marker
        fwrite(fid,hex2dec('E0','uint8'));
        fwrite(fid,hex2dec('00','uint8'));%Segment length
        fwrite(fid,hex2dec('10','uint8'));
        fwrite(fid,hex2dec('4A','uint8'));%J
        fwrite(fid,hex2dec('46','uint8'));%F
        fwrite(fid,hex2dec('49','uint8'));%I
        fwrite(fid,hex2dec('46','uint8'));%F
        fwrite(fid,hex2dec('00','uint8'));%\0
        fwrite(fid,hex2dec('01','uint8'));%JPEG version:
        fwrite(fid,hex2dec('01','uint8'));%Here, 1.01
        fwrite(fid,hex2dec('00','uint8'));%No pixel density units
        fwrite(fid,hex2dec('00','uint8'));%1 pixel in horizontal
        fwrite(fid,hex2dec('01','uint8'));
        fwrite(fid,hex2dec('00','uint8'));%1 pixel invertical
        fwrite(fid,hex2dec('01','uint8'));
        fwrite(fid,hex2dec('00','uint8'));%Horizontal pixel count of the following embedded RGB thumbnail
        fwrite(fid,hex2dec('00','uint8'));%Vertical pixel count of the following embedded RGB thumbnail
    %Quantization table (luminance)
        fwrite(fid,hex2dec('FF','uint8'));%Quantization table marker
        fwrite(fid,hex2dec('DB','uint8'));
        fwrite(fid,hex2dec('00','uint8'));%Segment length
        fwrite(fid,hex2dec('43','uint8'));
        fwrite(fid,hex2dec('00','uint8'));%Destiniation: luminance
        for a=1:1:64
            coef_y=TableY(VecI(a),VecJ(a));
            fwrite(fid,hex2dec(coef_y,'uint8'));%Quant table coefficients
        end
    %Quantization table (chrominance)
        fwrite(fid,hex2dec('FF','uint8'));%Quantization table marker
        fwrite(fid,hex2dec('DB','uint8'));
        fwrite(fid,hex2dec('00','uint8'));%Segment length
        fwrite(fid,hex2dec('43','uint8'));
        fwrite(fid,hex2dec('01','uint8'));%Destiniation: chrominance
        for b=1:1:64
            coef_c=TableC(VecI(b),VecJ(b));
            fwrite(fid,hex2dec(coef_c,'uint8'));%Quant table coefficients
        end
    %Start Of Frame
        fwrite(fid,hex2dec('FF','uint8'));%Start of frame marker
        fwrite(fid,hex2dec('C0','uint8'));
    
    %End of image
        fwrite(fid,hex2dec('FF','uint8'));
        fwrite(fid,hex2dec('D9','uint8'));

    %Close file
    fclose(fid);
end

