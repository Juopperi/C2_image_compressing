%Source: https://www.youtube.com/watch?v=kqR8wvMwc5o
function [Cb2,Cr2] = chromasub(Cb,Cr,mode,height,width)
 Cb2=Cb;
 Cr2=Cr;
  switch mode
    case 1
        %4:2:2
        for i=1:1:height
            if mod(i,2)==1
               for j=1:2:width-1
                   Cb2(i,j+1)=Cb2(i,j);
                   Cb2(i,j+1)=Cb2(i,j);

                   Cr2(i,j+1)=Cr2(i,j);
                   Cr2(i,j+1)=Cr2(i,j);
               end
            else
               for j=2:2:width
                   Cb2(i,j-1)=Cb2(i,j);
                   Cb2(i,j-1)=Cb2(i,j);

                   Cr2(i,j-1)=Cr2(i,j);
                   Cr2(i,j-1)=Cr2(i,j);
               end
            end
        end  
    case 2
        %4:2:0
        for i=1:2:height-1
           for j=1:2:width-1
               Cb2(i,j+1)=Cb2(i,j);
               Cb2(i+1,j)=Cb2(i,j);
               Cb2(i+1,j+1)=Cb2(i,j);

               Cr2(i,j+1)=Cr2(i,j);
               Cr2(i+1,j)=Cr2(i,j);
               Cr2(i+1,j+1)=Cr2(i,j);
           end
        end      
    case 3
        %4:1:1
        for i=1:1:height
            for j=1:4:width-3
                Cb2(i,j+1)=Cb2(i,j);
                Cb2(i,j+2)=Cb2(i,j);
                Cb2(i,j+3)=Cb2(i,j);

                Cr2(i,j+1)=Cr2(i,j);
                Cr2(i,j+2)=Cr2(i,j);
                Cr2(i,j+3)=Cr2(i,j);
            end
        end
    otherwise
        disp('other value')
  end
end 