function code = encoding(BlockIn,VecI,VecJ,tables)
    %Zigzag encoding, 8x8 block is transformed into a 64 element array
    %following zigzag order
    VecOut=zeros(1,64);
    for a=1:1:64
        VecOut(a)=BlockIn(VecI(a),VecJ(a));
    end
    %Huffman encoding
    code="";
    zeroes=0;
    for b=2:1:64
       if (VecOut(b)~=0)
           %If there are more than 15 zeroes between coefficients, a
           %special code is introduced
           while zeroes>15
                if tables=='y'%codes change depending on whether it's luminance or chrominance
                    code=code+"11111111001";
                else
                    code=code+"1111111010";
                end
                zeroes=zeroes-16;
           end
           %When a non-zero coefficient is met, a code is assigned to it depending on
           %the number of zeros before it and the bits needed to represent it
           if tables=='y'
               code=code+huffman_ac_y(zeroes,VecOut(b));
               zeroes=0;
           else
               code=code+huffman_ac_cbcr(zeroes,VecOut(b));
               zeroes=0;
           end
       else
           zeroes=zeroes+1;
       end
    end
    %If there are no more coefficients in that block, an end of block code
    %is introduced
    if tables=='y'
        code=code+"1010";%End of block
    else
        code=code+"00";%End of block
    end 
end
