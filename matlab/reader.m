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
    % disp(hex_data);
    % for k=1:1:length(jpeg_data)
    %     jpeg_binary = pad(string(dec2bin(jpeg_data(k))),8,"left","0");
    %     image_data(k,2) = jpeg_binary; % Force correct bit width
    % end

%Convert all data to a single string
    % jpeg_char = '';
    % for k=1:1:length(jpeg_data)
    %     jpeg_char = strcat(jpeg_char, char(image_data(k,2)));
    % end

%Rewriting data to get a correct JPEG file
    % filename = 'written_image.jpeg';
    % fid = fopen(filename, 'w');
    % if fid == -1
    %     error('Error opening file.');
    % end
    % 
    % for j=1:8:length(jpeg_char)-7
    %     fwrite(fid,bin2dec(jpeg_char(j:j+7)),'uint8');
    % end
    % fclose(fid);
