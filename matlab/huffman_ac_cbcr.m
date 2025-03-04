function code_ac_cbcr = huffman_ac_cbcr(zeroes,coef)
    size = floor(log2(abs(coef))) + 1;
    code_ac_cbcr="";
    switch zeroes
        case 0
            switch size
                case 1
                   code_ac_cbcr=code_ac_cbcr+"01";
                case 2
                   code_ac_cbcr=code_ac_cbcr+"100";
                case 3
                   code_ac_cbcr=code_ac_cbcr+"1010";
                case 4
                   code_ac_cbcr=code_ac_cbcr+"11000";
                case 5
                   code_ac_cbcr=code_ac_cbcr+"11001";
                case 6
                   code_ac_cbcr=code_ac_cbcr+"111000";
                case 7
                   code_ac_cbcr=code_ac_cbcr+"1111000";
                case 8
                   code_ac_cbcr=code_ac_cbcr+"111110100";
                case 9
                   code_ac_cbcr=code_ac_cbcr+"1111110110";
            end
        case 1
            switch size
                case 1
                   code_ac_cbcr=code_ac_cbcr+"1011";
                case 2
                   code_ac_cbcr=code_ac_cbcr+"111001";
                case 3
                   code_ac_cbcr=code_ac_cbcr+"11110110";
                case 4
                   code_ac_cbcr=code_ac_cbcr+"111110101";
                case 5
                   code_ac_cbcr=code_ac_cbcr+"11111110110";
                case 6
                   code_ac_cbcr=code_ac_cbcr+"111111110101";
                case 7
                   code_ac_cbcr=code_ac_cbcr+"1111111110001000";
                case 8
                   code_ac_cbcr=code_ac_cbcr+"1111111110001001";
                case 9
                   code_ac_cbcr=code_ac_cbcr+"1111111110001010";
            end
        case 2
            switch size
                case 1
                   code_ac_cbcr=code_ac_cbcr+"11010";
                case 2
                   code_ac_cbcr=code_ac_cbcr+"11110111";
                case 3
                   code_ac_cbcr=code_ac_cbcr+"1111110111";
                case 4
                   code_ac_cbcr=code_ac_cbcr+"111111110110";
                case 5
                   code_ac_cbcr=code_ac_cbcr+"111111111000010";
                case 6
                   code_ac_cbcr=code_ac_cbcr+"1111111110001100";
                case 7
                   code_ac_cbcr=code_ac_cbcr+"1111111110001101";
                case 8
                   code_ac_cbcr=code_ac_cbcr+"1111111110001110";
                case 9
                   code_ac_cbcr=code_ac_cbcr+"1111111110001111";
            end
        case 3
            switch size
                case 1
                   code_ac_cbcr=code_ac_cbcr+"11011";
                case 2
                   code_ac_cbcr=code_ac_cbcr+"11111000";
                case 3
                   code_ac_cbcr=code_ac_cbcr+"1111111000";
                case 4
                   code_ac_cbcr=code_ac_cbcr+"111111110111";
                case 5
                   code_ac_cbcr=code_ac_cbcr+"1111111110010001";
                case 6
                   code_ac_cbcr=code_ac_cbcr+"1111111110010010";
                case 7
                   code_ac_cbcr=code_ac_cbcr+"1111111110010011";
                case 8
                   code_ac_cbcr=code_ac_cbcr+"1111111110010100";
                case 9
                   code_ac_cbcr=code_ac_cbcr+"1111111110010101";
            end 
        case 4
            switch size
                case 1
                   code_ac_cbcr=code_ac_cbcr+"111010";
                case 2
                   code_ac_cbcr=code_ac_cbcr+"111110110";
                case 3
                   code_ac_cbcr=code_ac_cbcr+"1111111110010111";
                case 4
                   code_ac_cbcr=code_ac_cbcr+"1111111110011000";
                case 5
                   code_ac_cbcr=code_ac_cbcr+"1111111110011001";
                case 6
                   code_ac_cbcr=code_ac_cbcr+"1111111110011010";
                case 7
                   code_ac_cbcr=code_ac_cbcr+"1111111110011011";
                case 8
                   code_ac_cbcr=code_ac_cbcr+"1111111110011100";
                case 9
                   code_ac_cbcr=code_ac_cbcr+"1111111110011101";
            end 
        case 5
            switch size
                case 1
                   code_ac_cbcr=code_ac_cbcr+"111011";
                case 2
                   code_ac_cbcr=code_ac_cbcr+"1111111001";
                case 3
                   code_ac_cbcr=code_ac_cbcr+"1111111110011111";
                case 4
                   code_ac_cbcr=code_ac_cbcr+"1111111110100000";
                case 5
                   code_ac_cbcr=code_ac_cbcr+"1111111110100001";
                case 6
                   code_ac_cbcr=code_ac_cbcr+"1111111110100010";
                case 7
                   code_ac_cbcr=code_ac_cbcr+"1111111110100011";
                case 8
                   code_ac_cbcr=code_ac_cbcr+"1111111110100100";
                case 9
                   code_ac_cbcr=code_ac_cbcr+"1111111110100101";
            end  
        case 6
            switch size
                case 1
                   code_ac_cbcr=code_ac_cbcr+"1111001";
                case 2
                   code_ac_cbcr=code_ac_cbcr+"11111110111";
                case 3
                   code_ac_cbcr=code_ac_cbcr+"1111111110100111";
                case 4
                   code_ac_cbcr=code_ac_cbcr+"1111111110101000";
                case 5
                   code_ac_cbcr=code_ac_cbcr+"1111111110101001";
                case 6
                   code_ac_cbcr=code_ac_cbcr+"1111111110101010";
                case 7
                   code_ac_cbcr=code_ac_cbcr+"1111111110101011";
                case 8
                   code_ac_cbcr=code_ac_cbcr+"1111111110101100";
                case 9
                   code_ac_cbcr=code_ac_cbcr+"1111111110101101";
            end 
        case 7
            switch size
                case 1
                   code_ac_cbcr=code_ac_cbcr+"1111010";
                case 2
                   code_ac_cbcr=code_ac_cbcr+"11111111000";
                case 3
                   code_ac_cbcr=code_ac_cbcr+"1111111110101111";
                case 4
                   code_ac_cbcr=code_ac_cbcr+"1111111110110000";
                case 5
                   code_ac_cbcr=code_ac_cbcr+"1111111110110001";
                case 6
                   code_ac_cbcr=code_ac_cbcr+"1111111110110010";
                case 7
                   code_ac_cbcr=code_ac_cbcr+"1111111110110011";
                case 8
                   code_ac_cbcr=code_ac_cbcr+"1111111110110100";
                case 9
                   code_ac_cbcr=code_ac_cbcr+"1111111110110101";
            end 
        case 8
            switch size
                case 1
                   code_ac_cbcr=code_ac_cbcr+"11111001";
                case 2
                   code_ac_cbcr=code_ac_cbcr+"1111111110110111";
                case 3
                   code_ac_cbcr=code_ac_cbcr+"1111111110111000";
                case 4
                   code_ac_cbcr=code_ac_cbcr+"1111111110111001";
                case 5
                   code_ac_cbcr=code_ac_cbcr+"1111111110111010";
                case 6
                   code_ac_cbcr=code_ac_cbcr+"1111111110111011";
                case 7
                   code_ac_cbcr=code_ac_cbcr+"1111111110111100";
                case 8
                   code_ac_cbcr=code_ac_cbcr+"1111111110111101";
                case 9
                   code_ac_cbcr=code_ac_cbcr+"1111111110111110";
            end  
        case 9
            switch size
                case 1
                   code_ac_cbcr=code_ac_cbcr+"111110111";
                case 2
                   code_ac_cbcr=code_ac_cbcr+"1111111111000000";
                case 3
                   code_ac_cbcr=code_ac_cbcr+"1111111111000001";
                case 4
                   code_ac_cbcr=code_ac_cbcr+"1111111111000010";
                case 5
                   code_ac_cbcr=code_ac_cbcr+"1111111111000011";
                case 6
                   code_ac_cbcr=code_ac_cbcr+"1111111111000100";
                case 7
                   code_ac_cbcr=code_ac_cbcr+"1111111111000101";
                case 8
                   code_ac_cbcr=code_ac_cbcr+"1111111111000110";
                case 9
                   code_ac_cbcr=code_ac_cbcr+"1111111111000111";
            end  
        case 10
            switch size
                case 1
                   code_ac_cbcr=code_ac_cbcr+"111111000";
                case 2
                   code_ac_cbcr=code_ac_cbcr+"1111111111001001";
                case 3
                   code_ac_cbcr=code_ac_cbcr+"1111111111001010";
                case 4
                   code_ac_cbcr=code_ac_cbcr+"1111111111001011";
                case 5
                   code_ac_cbcr=code_ac_cbcr+"1111111111001100";
                case 6
                   code_ac_cbcr=code_ac_cbcr+"1111111111001101";
                case 7
                   code_ac_cbcr=code_ac_cbcr+"1111111111001110";
                case 8
                   code_ac_cbcr=code_ac_cbcr+"1111111111001111";
                case 9
                   code_ac_cbcr=code_ac_cbcr+"1111111111010000";
            end 
        case 11
            switch size
                case 1
                   code_ac_cbcr=code_ac_cbcr+"111111001";
                case 2
                   code_ac_cbcr=code_ac_cbcr+"1111111111010010";
                case 3
                   code_ac_cbcr=code_ac_cbcr+"1111111111010011";
                case 4
                   code_ac_cbcr=code_ac_cbcr+"1111111111010100";
                case 5
                   code_ac_cbcr=code_ac_cbcr+"1111111111010101";
                case 6
                   code_ac_cbcr=code_ac_cbcr+"1111111111010110";
                case 7
                   code_ac_cbcr=code_ac_cbcr+"1111111111010111";
                case 8
                   code_ac_cbcr=code_ac_cbcr+"1111111111011000";
                case 9
                   code_ac_cbcr=code_ac_cbcr+"1111111111011001";
            end  
        case 12
            switch size
                case 1
                   code_ac_cbcr=code_ac_cbcr+"111111010";
                case 2
                   code_ac_cbcr=code_ac_cbcr+"1111111111011011";
                case 3
                   code_ac_cbcr=code_ac_cbcr+"1111111111011100";
                case 4
                   code_ac_cbcr=code_ac_cbcr+"1111111111011101";
                case 5
                   code_ac_cbcr=code_ac_cbcr+"1111111111011110";
                case 6
                   code_ac_cbcr=code_ac_cbcr+"1111111111011111";
                case 7
                   code_ac_cbcr=code_ac_cbcr+"1111111111100000";
                case 8
                   code_ac_cbcr=code_ac_cbcr+"1111111111100001";
                case 9
                   code_ac_cbcr=code_ac_cbcr+"1111111111100010";
            end  
        case 13
            switch size
                case 1
                   code_ac_cbcr=code_ac_cbcr+"11111111001";
                case 2
                   code_ac_cbcr=code_ac_cbcr+"1111111111100100";
                case 3
                   code_ac_cbcr=code_ac_cbcr+"1111111111100101";
                case 4
                   code_ac_cbcr=code_ac_cbcr+"1111111111100110";
                case 5
                   code_ac_cbcr=code_ac_cbcr+"1111111111100111";
                case 6
                   code_ac_cbcr=code_ac_cbcr+"1111111111101000";
                case 7
                   code_ac_cbcr=code_ac_cbcr+"1111111111101001";
                case 8
                   code_ac_cbcr=code_ac_cbcr+"1111111111101010";
                case 9
                   code_ac_cbcr=code_ac_cbcr+"1111111111101011";
            end  
        case 14
            switch size
                case 1
                   code_ac_cbcr=code_ac_cbcr+"11111111100000";
                case 2
                   code_ac_cbcr=code_ac_cbcr+"1111111111101101";
                case 3
                   code_ac_cbcr=code_ac_cbcr+"1111111111101110";
                case 4
                   code_ac_cbcr=code_ac_cbcr+"1111111111101111";
                case 5
                   code_ac_cbcr=code_ac_cbcr+"1111111111110000";
                case 6
                   code_ac_cbcr=code_ac_cbcr+"1111111111110001";
                case 7
                   code_ac_cbcr=code_ac_cbcr+"1111111111110010";
                case 8
                   code_ac_cbcr=code_ac_cbcr+"1111111111110011";
                case 9
                   code_ac_cbcr=code_ac_cbcr+"1111111111110100";
            end
        case 15
            switch size
                case 1
                   code_ac_cbcr=code_ac_cbcr+"111111111000011";
                case 2
                   code_ac_cbcr=code_ac_cbcr+"1111111111110110";
                case 3
                   code_ac_cbcr=code_ac_cbcr+"1111111111110111";
                case 4
                   code_ac_cbcr=code_ac_cbcr+"1111111111111000";
                case 5
                   code_ac_cbcr=code_ac_cbcr+"1111111111111001";
                case 6
                   code_ac_cbcr=code_ac_cbcr+"1111111111111010";
                case 7
                   code_ac_cbcr=code_ac_cbcr+"1111111111111011";
                case 8
                   code_ac_cbcr=code_ac_cbcr+"1111111111111100";
                case 9
                   code_ac_cbcr=code_ac_cbcr+"1111111111111101";
            end 
    end

    if(coef<0)%After the code, the binary representation of the number itself is concatenated to the code; for negative numbers, one's complement is used
        value=dec2bin(-coef,size);
        temp=value;
        temp(value == '0') = '1';
        temp(value == '1') = '0';
        value=temp;
    else
        value=dec2bin(coef,size);
    end
    code_ac_cbcr = code_ac_cbcr + string(value);
    
end

