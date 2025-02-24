% MATLAB script to read raw byte-level data from a JPEG file

% Specify the JPEG file
    filename = 'photo.jpeg';

% Open the file in binary mode
    fid = fopen(filename, 'rb');
    if fid == -1
        error('Error opening file.');
    end

% Read the entire file as uint8 data
    jpeg_data = fread(fid, inf, 'uint8');
    fclose(fid);

% Identify JPEG markers
    fprintf('\nJPEG Markers Found:\n');
    i = 1;
    while i < length(jpeg_data) - 1
        if jpeg_data(i) == 255  % JPEG markers start with 0xFF
            marker = jpeg_data(i+1);
            fprintf('Marker: 0xFF%02X at position %d\n', marker, i);
            i = i + 2;
        else
            i = i + 1;
        end
    end

% Display all bytes in other formats
    %hex_data = reshape(dec2hex(jpeg_data), 2, [])';
    hex_data = dec2hex(jpeg_data);
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
