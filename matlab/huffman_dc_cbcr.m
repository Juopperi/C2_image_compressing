function code_dc_cbcr = huffman_dc_cbcr(previous,current)
    diff=current-previous;
    if (diff~=0)
        size = floor(log2(abs(diff))) + 1;
    else
        size=0;
    end
    code_dc_cbcr="";

    switch size
        case 0
            code_dc_cbcr=code_dc_cbcr+"00";
        case 1
            code_dc_cbcr=code_dc_cbcr+"01";
        case 2
            code_dc_cbcr=code_dc_cbcr+"10";
        case 3
            code_dc_cbcr=code_dc_cbcr+"110";
        case 4
            code_dc_cbcr=code_dc_cbcr+"1110";
        case 5
            code_dc_cbcr=code_dc_cbcr+"11110";
        case 6
            code_dc_cbcr=code_dc_cbcr+"111110";
        case 7
            code_dc_cbcr=code_dc_cbcr+"1111110";
        case 8
            code_dc_cbcr=code_dc_cbcr+"11111110";
        case 9
            code_dc_cbcr=code_dc_cbcr+"111111110";
        case 10
            code_dc_cbcr=code_dc_cbcr+"1111111110";
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
    code_dc_cbcr = code_dc_cbcr + string(value);
end

