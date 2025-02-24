function code = encoding(BlockIn,VecI,VecJ,tables)
    %Zigzag encoding
    for a=1:1:64
        VecOut(a)=BlockIn(VecI(a),VecJ(a));
    end
    %Run-length encoding and Huffmann encoding
    code="";
    zeroes=0;
    for b=2:1:64
       if (VecOut(b)~=0)
           if zeroes>15
                for i=1:1:floor(zeroes/16)
                    if tables=='y'
                        code=code+"11111111001";
                    else
                        code=code+"1111111010";
                    end
                    zeroes=zeroes-16;
                end
           end    
           if tables=='y'
               code=code+huffman_ac_y(zeroes,VecOut(b));
           else
               code=code+huffman_ac_cbcr(zeroes,VecOut(b));
           end
       else
           zeroes=zeroes+1;
       end
    end
    if tables=='y'
        code=code+"1010";%End of block
    else
        code=code+"00";%End of block
    end 
end
