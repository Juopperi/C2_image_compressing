function  matrix_writing(A,B,C,file)

        % Open a text file for writing
        fileID = fopen(file, 'w');
        
        % Write matrix A to the file
        matrixName = inputname(1);
        fprintf(fileID, 'Matrix %s:\n',matrixName);
        [m, n] = size(A);
        for i = 1:m
            fprintf(fileID, '%f\t', A(i, 1:n-1)); % Write all elements except the last one
            fprintf(fileID, '%f\n', A(i, n));     % Write the last element with a newline
        end
        
        % Write matrix B to the file
        matrixName = inputname(2);
        fprintf(fileID, 'Matrix %s:\n',matrixName);
        [m, n] = size(B);
        for i = 1:m
            fprintf(fileID, '%f\t', B(i, 1:n-1));
            fprintf(fileID, '%f\n', B(i, n));
        end
        
        % Write matrix C to the file
        matrixName = inputname(3);
        fprintf(fileID, 'Matrix %s:\n',matrixName);
        [m, n] = size(C);
        for i = 1:m
            fprintf(fileID, '%f\t', C(i, 1:n-1));
            fprintf(fileID, '%f\n', C(i, n));
        end
        
        % Close the file
        fclose(fileID);
end

