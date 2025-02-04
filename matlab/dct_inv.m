%Source: https://en.wikipedia.org/wiki/JPEG#Discrete_cosine_transform

%Not working properly, fix
function BlockOut = dct_inv(BlockIn)
    BlockOut=zeros(8);
    for u=0:1:7
        for v=0:1:7
            %Selection of alpha(u) and alpha(v) terms
            if u==0
                alphau=1/sqrt(2);
            else
                alphau=1;
            end
            if v==0
                alphav=1/sqrt(2);
            else
                alphav=1;
            end
            
            %Sum term calculation
            sumterm=0;
            for x=0:1:7
                for y=0:1:7
                    sumterm=sumterm+alphau*alphav*BlockIn(x+1,y+1)*cos((2*x+1)*u*pi/16)*cos((2*y+1)*v*pi/16);
                end
            end

            %Final calculation
            BlockOut(u+1,v+1)=0.25*sumterm;
        end
    end
end

