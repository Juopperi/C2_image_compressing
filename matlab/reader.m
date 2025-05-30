% MATLAB script to read raw byte-level data from a JPEG file

% Open file 1
    filename = 'BigBen.jpeg';
    fid = fopen(filename, 'rb');
    if fid == -1
        error('Error opening file.');
    end
    jpeg_data1 = fread(fid, inf, 'uint8');
   %Open file 2
    filename = 'photo2.jpeg';
    fid = fopen(filename, 'rb');
    if fid == -1
        error('Error opening file.');
    end
    jpeg_data2 = fread(fid, inf, 'uint8');
    fclose(fid);
% Identify JPEG markers
    fprintf('\nJPEG Markers Found:\n');
    i = 1;
    while i < length(jpeg_data1) - 1
        if (jpeg_data1(i) == 255 & jpeg_data1(i+1)>0)   % JPEG markers start with 0xFF
            marker = jpeg_data1(i+1);
            fprintf('Marker: 0xFF%02X at position %d\n', marker, i);
            i = i + 2;
        else
            i = i + 1;
        end
    end

% Display all bytes in other formats
    %hex_data = reshape(dec2hex(jpeg_data), 2, [])';
    hex_data1 = dec2hex(jpeg_data1);
    hex_data2 = dec2hex(jpeg_data2);
    lmax=max(length(hex_data1),length(hex_data2));
    lmin=min(length(hex_data1),length(hex_data2));
    hex_compare=char(zeros(lmax,5));
    for i=1:1:lmin
        hex_compare(i,1:2)=hex_data1(i,:);
        hex_compare(i,4:5)=hex_data2(i,:);
    end