library ieee;
use ieee.std_logic_1164.all;

package my_pkg is 
    type input_t is array (0 to 7,0 to 7) of std_logic_vector(7 downto 0);
    type output_t is array (0 to 7,0 to 7) of std_logic_vector(15 downto 0);
end package my_pkg;

library ieee;
use ieee.std_logic_1164.all;
use IEEE.std_logic_textio.all;
use ieee.numeric_std.all;
use STD.textio.all;
library workContainer;
use workContainer.my_pkg.all;

entity conversionContainer_tb is
end entity conversionContainer_tb;

architecture arch of conversionContainer_tb is 
    component conversionContainer is
        port(
            clk : in std_logic;
            input_array_R : in input_t;
            input_array_G : in input_t;
            input_array_B : in input_t;
            output_array_Y: out output_t;
            output_array_Cb: out output_t;
            output_array_Cr: out output_t;
            finished_flag: out std_logic    
        );
    end component conversionContainer;
    
        signal clk : std_logic := '0';
        signal input_array_R : input_t;
        signal input_array_G : input_t;
        signal input_array_B : input_t;
        signal output_array_Y: output_t;
        signal output_array_Cr: output_t;
        signal output_array_Cb: output_t;
        signal finished_flag : std_logic := '0';
    
    begin
        
        clk <= not clk after 1 ns;
        dut: component conversionContainer
            port map(
                clk => clk,
                input_array_R => input_array_R,
                input_array_G => input_array_G,
                input_array_B => input_array_B,
                output_array_Y => output_array_Y,
                output_array_Cb => output_array_Cb,
                output_array_Cr => output_array_Cr,
                finished_flag => finished_flag 
            );

        proc : process
            file text_file : text open read_mode is "../matlab/rgb.txt"; --Need to take away the zeros from this file. 
            file output_file : text open write_mode is "output_file.txt";
            
            variable text_line : line;
            variable output_line : line;

            variable row : integer := 0;
            variable col : integer := 0;
            variable state : integer := 0; --0 for R, 1 for G, 2 for B
            variable data : integer;

            variable ok : boolean;

            variable array_R : input_t;
            variable array_G : input_t;
            variable array_B : input_t;
        begin
            while not endfile(text_file) loop
                readline(text_file, text_line);
                report text_line.all;
                
                if text_line.all'length = 9 then
                    row := 0;
                    col := 0;
                    next;
                end if;
                
                case state is 
                    when 0 =>
                        for c in 0 to 7 loop
                            read(text_line,data,ok);
                            assert ok report "Error in read: " & text_line.all severity failure;
                            array_R(row,c) := std_logic_vector(to_unsigned(data,8));
                        end loop;
                    when 1 =>
                        for c in 0 to 7 loop
                            read(text_line,data,ok);
                            assert ok report "Error in read: " & text_line.all severity failure;
                            array_G(row,c) := std_logic_vector(to_unsigned(data,8));
                        end loop;
                    when 2 =>
                        for c in 0 to 7 loop
                            read(text_line,data,ok);
                            assert ok report "Error in read: " & text_line.all severity failure;
                            array_B(row,c) := std_logic_vector(to_unsigned(data,8));
                        end loop;
                    when others =>
                        report "ERROR MAYBE" severity error;
                end case;
                row := row + 1;
                if row = 8 then
                    row := 0;
                    state := state + 1;
                end if;
            end loop;

            input_array_R <= array_R;
            input_array_G <= array_G;
            input_array_B <= array_B;

            wait for 10 ns;
            
            write(output_line,string'("Y:"));
            writeline(output_file,output_line);
            for r in 0 to 7 loop
                for c in 0 to 7 loop
                    write(output_line,output_array_Y(r,c));
                    write(output_line,string'(" "));
                end loop;
                writeline(output_file,output_line);
            end loop;
            
            write(output_line,string'("Cb:"));
            writeline(output_file,output_line);
            for r in 0 to 7 loop
                for c in 0 to 7 loop
                    write(output_line,output_array_Cb(r,c));
                    write(output_line,string'(" "));
                end loop;
                writeline(output_file,output_line);
            end loop;
            
            write(output_line,string'("Cr:"));
            writeline(output_file,output_line);
            for r in 0 to 7 loop
                for c in 0 to 7 loop
                    write(output_line,output_array_Cr(r,c));
                    write(output_line,string'(" "));
                end loop;
                writeline(output_file,output_line);
            end loop;

            wait;
        end process proc;

        


end architecture arch;