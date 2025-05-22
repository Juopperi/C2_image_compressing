function huff_code = entropy(BlockIn,VecI,VecJ)
    %Zigzag encoding
    for a=1:1:64
        VecOut(a)=BlockIn(VecI(a),VecJ(a));
    end

    %Run-length encoding and Huffmann encoding
    huff_code="";
    zeros=0;
    for b=2:1:64
       if (VecOut(b)~=0)
           huff_code=huff_code+"("+string(zeros)+","+string(strlength(dec2bin(VecOut(b))))+")("+string(VecOut(b))+");";
       else
           zeros=zeros+1;
           if zeros>15
               huff_code=huff_code+"(15,0)(0);";
           end
       end
    end
    huff_code=huff_code+"(0,0);";
end
