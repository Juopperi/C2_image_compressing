function [img_code, img_data] = file_writing(dc_y,dc_cb,dc_cr,ac_y,ac_cb,ac_cr,VecI,VecJ,TableY,TableC,height,width,hc,wc,sub_mode,filename)
    %Open file
        fid = fopen(filename,'wb');
        if fid == -1
            error('Error opening file.');
        end

    %Start of image
        fwrite(fid,hex2dec('FF'),'uint8');
        fwrite(fid,hex2dec('D8'),'uint8');
    %APP0(header)
        fwrite(fid,hex2dec('FF'),'uint8');%APP0 marker
        fwrite(fid,hex2dec('E0'),'uint8');
        fwrite(fid,hex2dec('00'),'uint8');%Segment length
        fwrite(fid,hex2dec('10'),'uint8');
        fwrite(fid,hex2dec('4A'),'uint8');%J
        fwrite(fid,hex2dec('46'),'uint8');%F
        fwrite(fid,hex2dec('49'),'uint8');%I
        fwrite(fid,hex2dec('46'),'uint8');%F
        fwrite(fid,hex2dec('00'),'uint8');%\0
        fwrite(fid,hex2dec('01'),'uint8');%JPEG version:
        fwrite(fid,hex2dec('01'),'uint8');%Here, 1.01
        fwrite(fid,hex2dec('00'),'uint8');%No pixel density units
        fwrite(fid,hex2dec('00'),'uint8');%1 pixel in horizontal
        fwrite(fid,hex2dec('01'),'uint8');
        fwrite(fid,hex2dec('00'),'uint8');%1 pixel invertical
        fwrite(fid,hex2dec('01'),'uint8');
        fwrite(fid,hex2dec('00'),'uint8');%Horizontal pixel count of the following embedded RGB thumbnail
        fwrite(fid,hex2dec('00'),'uint8');%Vertical pixel count of the following embedded RGB thumbnail
    %Quantization table (luminance)
        fwrite(fid,hex2dec('FF'),'uint8');%Quantization table marker
        fwrite(fid,hex2dec('DB'),'uint8');
        fwrite(fid,hex2dec('00'),'uint8');%Segment length
        fwrite(fid,hex2dec('43'),'uint8');
        fwrite(fid,hex2dec('00'),'uint8');%8-bit precision; destiniation: luminance
        coef_y=zeros(1,64);
        for a=1:1:64
            coef_y(a)=TableY(VecI(a),VecJ(a));
            fwrite(fid,coef_y(a),'uint8');%Quant table coefficients
        end
    %Quantization table (chrominance)
        fwrite(fid,hex2dec('FF'),'uint8');%Quantization table marker
        fwrite(fid,hex2dec('DB'),'uint8');
        fwrite(fid,hex2dec('00'),'uint8');%Segment length
        fwrite(fid,hex2dec('43'),'uint8');
        fwrite(fid,hex2dec('01'),'uint8');%8-bit precision; destiniation: chrominance
        coef_c=zeros(1,64);
        for b=1:1:64
            coef_c(b)=TableC(VecI(b),VecJ(b));
            fwrite(fid,coef_c(b),'uint8');%Quant table coefficients
        end
    %Start Of Frame (SOF)
        fwrite(fid,hex2dec('FF'),'uint8');%SOF marker
        fwrite(fid,hex2dec('C0'),'uint8');
        fwrite(fid,hex2dec('00'),'uint8');%Segment length
        fwrite(fid,hex2dec('11'),'uint8');
        fwrite(fid,hex2dec('08'),'uint8');%precision (bits per sample)
        height_hex=dec2hex(height,4);
        fwrite(fid,hex2dec(height_hex(1:2)),'uint8');%Image height
        fwrite(fid,hex2dec(height_hex(3:4)),'uint8');
        width_hex=dec2hex(width,4);
        fwrite(fid,hex2dec(width_hex(1:2)),'uint8');%Image width
        fwrite(fid,hex2dec(width_hex(3:4)),'uint8');
        fwrite(fid,hex2dec('03'),'uint8');%Number of components (here, 3: Y, Cb, Cr)
        fwrite(fid,hex2dec('01'),'uint8');%Component 1: luminance
        %Subsampling
        switch sub_mode
            case 1
                fwrite(fid,hex2dec('21'),'uint8');%4:2:2
            case 2
                fwrite(fid,hex2dec('22'),'uint8');%4:2:0
            case 3
                fwrite(fid,hex2dec('41'),'uint8');%4:1:1
            otherwise
                fwrite(fid,hex2dec('11'),'uint8');%4:4:4 (no subsampling)
        end
        fwrite(fid,hex2dec('00'),'uint8');%First quantization table
        fwrite(fid,hex2dec('02'),'uint8');%Component 2: Cb (chrominance blue)
        fwrite(fid,hex2dec('11'),'uint8');%no subsampling
        fwrite(fid,hex2dec('01'),'uint8');%Second quantization table
        fwrite(fid,hex2dec('03'),'uint8');%Component 3: Cb (chrominance red)
        fwrite(fid,hex2dec('11'),'uint8');%no subsampling
        fwrite(fid,hex2dec('01'),'uint8');%Second quantization table
    
    %Huffman table (luminance DC)
        fwrite(fid,hex2dec('FF'),'uint8');%Huffman table marker
        fwrite(fid,hex2dec('C4'),'uint8');
        fwrite(fid,hex2dec('00'),'uint8');%Table length
        fwrite(fid,hex2dec('1F'),'uint8');
        fwrite(fid,hex2dec('00'),'uint8');%DC, table 0
            dc_y_symbols=[0 1 5 1 1 1 1 1 1 0 0 0 0 0 0 0];
            for c=1:1:length(dc_y_symbols)
                fwrite(fid,dc_y_symbols(c),'uint8');%Number of symbols encoded with c bits
            end
            dc_y_values=[0 1 2 3 4 5 6 7 8 9 10 11];
            for d=1:1:length(dc_y_values)
                fwrite(fid,dc_y_values(d),'uint8');%Table values
            end

    %Huffman table (luminance AC)
        fwrite(fid,hex2dec('FF'),'uint8');%Huffman table marker
        fwrite(fid,hex2dec('C4'),'uint8');
        fwrite(fid,hex2dec('00'),'uint8');%Table length
        fwrite(fid,hex2dec('B5'),'uint8');
        fwrite(fid,hex2dec('10'),'uint8');%AC, table 0
            ac_y_symbols=[0 2 1 3 3 2 4 3 5 5 4 4 0 0 1 125];
            for e=1:1:length(ac_y_symbols)
                fwrite(fid,ac_y_symbols(e),'uint8');%Number of symbols encoded with e bits
            end
            ac_y_values = [
                1, 2, 3, 0, 4, 17, 5, 18, 33, 49, 65, 6, 19, 81, 97, 7, ...
                34, 113, 20, 50, 129, 145, 161, 8, 35, 66, 177, 193, 21, 82, 209, 240, ...
                36, 51, 98, 114, 130, 9, 10, 22, 23, 24, 25, 26, 37, 38, 39, 40, ...
                41, 42, 52, 53, 54, 55, 56, 57, 58, 67, 68, 69, 70, 71, 72, 73, ...
                74, 83, 84, 85, 86, 87, 88, 89, 90, 99, 100, 101, 102, 103, 104, 105, ...
                106, 115, 116, 117, 118, 119, 120, 121, 122, 131, 132, 133, 134, 135, 136, 137, ...
                138, 146, 147, 148, 149, 150, 151, 152, 153, 154, 162, 163, 164, 165, 166, 167, ...
                168, 169, 170, 178, 179, 180, 181, 182, 183, 184, 185, 186, 194, 195, 196, 197, ...
                198, 199, 200, 201, 202, 210, 211, 212, 213, 214, 215, 216, 217, 218, 225, 226, ...
                227, 228, 229, 230, 231, 232, 233, 234, 241, 242, 243, 244, 245, 246, 247, 248, ...
                249, 250];
            for f=1:1:length(ac_y_values)
                fwrite(fid,ac_y_values(f),'uint8');%Table values
            end

    %Huffman table (chrominance DC)
        fwrite(fid,hex2dec('FF'),'uint8');%Huffman table marker
        fwrite(fid,hex2dec('C4'),'uint8');
        fwrite(fid,hex2dec('00'),'uint8');%Table length
        fwrite(fid,hex2dec('1F'),'uint8');
        fwrite(fid,hex2dec('01'),'uint8');%DC, table 1
            dc_cbcr_symbols=[0 3 1 1 1 1 1 1 1 1 1 0 0 0 0 0];
            for g=1:1:length(dc_cbcr_symbols)
                fwrite(fid,dc_cbcr_symbols(g),'uint8');%Number of symbols encoded with g bits
            end
            dc_cbcr_values=[0 1 2 3 4 5 6 7 8 9 10 11];
            for h=1:1:length(dc_cbcr_values)
                fwrite(fid,dc_cbcr_values(h),'uint8');%Table values
            end

    %Huffman table (chrominance AC)
        fwrite(fid,hex2dec('FF'),'uint8');%Huffman table marker
        fwrite(fid,hex2dec('C4'),'uint8');
        fwrite(fid,hex2dec('00'),'uint8');%Table length
        fwrite(fid,hex2dec('B5'),'uint8');
        fwrite(fid,hex2dec('11'),'uint8');%AC, table 1
            ac_cbcr_symbols=[0 2 1 2 4 4 3 4 7 5 4 4 0 1 2 119];
            for i=1:1:length(ac_cbcr_symbols)
                fwrite(fid,ac_cbcr_symbols(i),'uint8');%Number of symbols encoded with i bits
            end
            ac_cbcr_values = [
                0, 1, 2, 3, 17, 4, 5, 33, 49, 6, 18, 65, 81, 7, 97, 113, ...
                19, 34, 50, 129, 8, 20, 66, 145, 161, 177, 193, 9, 35, 51, 82, 240, ...
                21, 98, 114, 209, 10, 22, 36, 52, 225, 37, 241, 23, 24, 25, 26, 38, ...
                39, 40, 41, 42, 53, 54, 55, 56, 57, 58, 67, 68, 69, 70, 71, 72, ...
                73, 74, 83, 84, 85, 86, 87, 88, 89, 90, 99, 100, 101, 102, 103, 104, ...
                105, 106, 115, 116, 117, 118, 119, 120, 121, 122, 130, 131, 132, 133, 134, 135, ...
                136, 137, 138, 146, 147, 148, 149, 150, 151, 152, 153, 154, 162, 163, 164, 165, ...
                166, 167, 168, 169, 170, 178, 179, 180, 181, 182, 183, 184, 185, 186, 194, 195, ...
                196, 197, 198, 199, 200, 201, 202, 210, 211, 212, 213, 214, 215, 216, 217, 218, ...
                226, 227, 228, 229, 230, 231, 232, 233, 234, 242, 243, 244, 245, 246, 247, 248, ...
                249, 250];
            for j=1:1:length(ac_cbcr_values)
                fwrite(fid,ac_cbcr_values(j),'uint8');%Table values
            end
     
    %Start of scan (SOS)
        fwrite(fid,hex2dec('FF'),'uint8');%SOS marker
        fwrite(fid,hex2dec('DA'),'uint8');
        fwrite(fid,hex2dec('00'),'uint8');%Segment length
        fwrite(fid,hex2dec('0C'),'uint8');
        fwrite(fid,hex2dec('03'),'uint8');%Number of components
        fwrite(fid,hex2dec('01'),'uint8');%Component 1 (Y) will use:
        fwrite(fid,hex2dec('00'),'uint8');%Table 0 DC and 0 AC
        fwrite(fid,hex2dec('02'),'uint8');%Component 2 (Cb) will use:
        fwrite(fid,hex2dec('11'),'uint8');%Table 1 DC and 1 AC
        fwrite(fid,hex2dec('03'),'uint8');%Component 3 (Cr) will use:
        fwrite(fid,hex2dec('11'),'uint8');%Table 1 DC and 1 AC
        fwrite(fid,hex2dec('00'),'uint8');%Start of spectral selection (frequency 0, DC component)
        fwrite(fid,hex2dec('3F'),'uint8');%End of spectral selection (frequency 63, all AC components)
        fwrite(fid,hex2dec('00'),'uint8');%No succesive approximation will be used (single scan)
        %Image data
            %This code is only for no subsampling
            img_data="";
            switch sub_mode
                case 1%4:2:2
                    for o=1:1:hc/8
                       for p=1:1:wc/8
                           img_data=img_data+dc_y(o,2*p-1)+ac_y(o,2*p-1)+dc_y(o,2*p)+ac_y(o,2*p);
                           img_data=img_data+dc_cb(o,p)+ac_cb(o,p)+dc_cr(o,p)+ac_cr(o,p);
                       end
                    end
                case 2%4:2:0
                    for q=1:1:hc/8
                       for r=1:1:wc/8
                           img_data=img_data+dc_y(2*q-1,2*r-1)+ac_y(2*q-1,2*r-1)+dc_y(2*q-1,2*r)+ac_y(2*q-1,2*r)+dc_y(2*q,2*r-1)+ac_y(2*q,2*r-1)+dc_y(2*q,2*r)+ac_y(2*q,2*r);
                           img_data=img_data+dc_cb(q,r)+ac_cb(q,r)+dc_cr(q,r)+ac_cr(q,r);
                       end
                    end      
                case 3%4:1:1
                    for s=1:1:hc/8
                        for t=1:1:wc/8
                            img_data=img_data+dc_y(s,4*t-3)+ac_y(s,4*t-3)+dc_y(s,4*t-2)+ac_y(s,4*t-2)+dc_y(s,4*t-1)+ac_y(s,4*t-1)+dc_y(s,4*t)+ac_y(s,4*t);
                            img_data=img_data+dc_cb(s,t)+ac_cb(s,t)+dc_cr(s,t)+ac_cr(s,t);
                        end
                    end
                otherwise
                    for k=1:1:height/8
                        for l=1:1:width/8
                            img_data=img_data+dc_y(k,l)+ac_y(k,l)+dc_cb(k,l)+ac_cb(k,l)+dc_cr(k,l)+ac_cr(k,l);
                        end
                    end
            end
            img_data=char(img_data);

            %Padding
            if mod(length(img_data),8)~=0
                padded_length = length(img_data)+8-mod(length(img_data),8);
                img_data = pad(img_data,padded_length,'right','1');
            end
            %Checking for FF bytes and inserting a 00 byte after each of those to prevent them from being mistaken for a marker
            sb=0;
            m=1;
            while m <= length(img_data)-7
                byte_val = bin2dec(img_data(m:m+7));
                fwrite(fid, byte_val, 'uint8');
                if byte_val == 255
                    fprintf("FF data at byte %d\n", (m-1)/8 + 1 + sb);
                    fwrite(fid, 0, 'uint8');  % Write the stuffed 0x00
                    sb = sb + 1;  % Track added bytes
                end
                m = m + 8;  % Move to the next byte
            end
            fprintf("Stuffed %d bytes\n", sb);
    %End of image
        fwrite(fid,hex2dec('FF'),'uint8');
        fwrite(fid,hex2dec('D9'),'uint8');

    %Close file
        fclose(fid);

    %Reading file data
        fid = fopen(filename, 'rb');
        if fid == -1
            error('Error opening file.');
        end
        uint8_code = fread(fid, inf, 'uint8');
        fclose(fid);
        img_code = char(zeros(length(uint8_code), 18));
        o=0;
        for n=1:1:length(uint8_code)-2
            img_code(n,1:2) = dec2hex(uint8_code(n),2);
            img_code(n,4:9) = pad(num2str(n-623),6,'left','0');
            if (n>623)
                if(uint8_code(n)==0 && uint8_code(n-1)==255)
                    %skip byte, it's a stuffed byte
                else
                    img_code(n,11:18) = img_data(o*8+1:o*8+8);
                    o=o+1;
                end
            end
        end
        img_code(end-1,1:2)='FF';
        img_code(end,1:2)='D9';
end

