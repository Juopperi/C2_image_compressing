%Source: https://www.youtube.com/watch?v=kqR8wvMwc5o
function [Cb2,Cr2,hc,wc] = chromasub(Cb,Cr,mode,height,width)
  switch mode
    case 1
        %4:2:2
        hc=height;
        wc=width/2;
        Cb2=zeros(hc,wc);
        Cr2=zeros(hc,wc);
        for i=1:1:hc
           for j=1:1:wc
               Cb2(i,j)=(Cb(i,2*j-1)+Cb(i,2*j))/2;
               Cr2(i,j)=(Cr(i,2*j-1)+Cr(i,2*j))/2;
           end
        end  
    case 2
        %4:2:0
        hc=height/2;
        wc=width/2;
        Cb2=zeros(hc,wc);
        Cr2=zeros(hc,wc);
        for i=1:1:hc
           for j=1:1:wc
               Cb2(i,j)=(Cb(2*i-1,2*j-1)+Cb(2*i-1,2*j)+Cb(2*i,2*j-1)+Cb(2*i,2*j))/4;
               Cr2(i,j)=(Cr(2*i-1,2*j-1)+Cr(2*i-1,2*j)+Cr(2*i,2*j-1)+Cr(2*i,2*j))/4;
           end
        end      
    case 3
        %4:1:1
        hc=height;
        wc=width/4;
        Cb2=zeros(hc,wc);
        Cr2=zeros(hc,wc);
        for i=1:1:hc
            for j=1:1:wc
                Cb2(i,j)=(Cb(i,4*j-3)+Cb(i,4*j-2)+Cb(i,4*j-1)+Cb(i,4*j))/4;
                Cr2(i,j)=(Cr(i,4*j-3)+Cr(i,4*j-2)+Cr(i,4*j-1)+Cr(i,4*j))/4;
            end
        end
    otherwise
        disp('other value');
  end
end 