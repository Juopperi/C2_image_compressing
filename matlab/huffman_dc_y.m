function code_dc_y = huffman_dc_y(previous,current)
    diff=current-previous;
    if (diff~=0)
        size = floor(log2(abs(diff))) + 1;
    else
        size=0;
    end
    code_dc_y="";

    switch size
        case 0
            code_dc_y=code_dc_y+"00";
        case 1
            code_dc_y=code_dc_y+"010";
        case 2
            code_dc_y=code_dc_y+"011";
        case 3
            code_dc_y=code_dc_y+"100";
        case 4
            code_dc_y=code_dc_y+"101";
        case 5
            code_dc_y=code_dc_y+"110";
        case 6
            code_dc_y=code_dc_y+"1110";
        case 7
            code_dc_y=code_dc_y+"11110";
        case 8
            code_dc_y=code_dc_y+"111110";
        case 9
            code_dc_y=code_dc_y+"1111110";
        case 10
            code_dc_y=code_dc_y+"11111110";
    end

    if(diff<0)
        value=dec2bin(-diff,size);
        temp=value;
        temp(value == '0') = '1';
        temp(value == '1') = '0';
        value=temp;
    elseif(diff==0)
        value='';
    else
        value=dec2bin(diff,size);
    end
    code_dc_y = code_dc_y + string(value);
end

