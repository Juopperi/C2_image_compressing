
for width = 128 : 2 : 4096
    if mod(log2(width), 1) ~= 0
        continue  % 仅保留 128, 256, 512, ..., 4096
    end

    compression
end
