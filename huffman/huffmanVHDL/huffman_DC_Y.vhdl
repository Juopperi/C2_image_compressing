library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity huffman_DC_Y is 
    port(   
        clk : in std_logic;
        input_integer : in std_logic_vector(7 downto 0);
        output_bit: out std_logic;
        done: out std_logic
    );
end huffman_DC_Y;

architecture arch of huffman_DC_Y is 
    type t_state is (count_req_bits,encode,outputting_bits);
    signal state : t_state := count_req_bits;
begin

code_proc : process (clk)    
    variable output_reg : std_logic_vector(7 downto 0);
    variable size : integer range 0 to 10 := 0;
    variable length : integer range -1 to 11 := 0; 
begin                 
    if rising_edge(clk) then
        case state is
            when count_req_bits =>
                output_bit <= 'U';
                done <= '0';
                for i in input_integer'length-1 downto 0 loop
                    if input_integer(i) = '1' then
                        size := i+1;
                        exit;
                    end if;
                end loop;
                state <= encode;
            
            when encode =>
                case size is 
                    when 0 =>
                        output_reg := "XXXXXX00";
                        length := 2;
                        size := 1;
                    when 1 => 
                        output_reg := "XXXXX010";
                        length := 3;
                    when 2 => 
                        output_reg := "XXXXX011";
                        length := 3;
                    when 3 =>
                        output_reg := "XXXXX100";
                        length := 3;
                    when 4 => 
                        output_reg := "XXXXX101";
                        length := 3;
                    when 5 => 
                        output_reg := "XXXXX110";
                        length := 3;
                    when 6 =>
                        output_reg := "XXXX1110";
                        length := 4;
                    when 7 =>
                        output_reg := "XXX11110";
                        length := 5;
                    when 8 =>
                        output_reg := "XX111110";
                        length := 6;
                    when 9 => 
                        output_reg := "11111110";
                        length := 8;
                    when others =>
                        output_reg := (others => '0');
                end case;
                state <= outputting_bits;
            
            when outputting_bits =>         
                if length > 0 then
                    output_bit <= output_reg(length-1);
                    length := length - 1;
                elsif size > 0 then
                    output_bit <= input_integer(size-1);
                    size := size - 1;
                end if;
                if size = 0 then
                    done <= '1';
                    state <= count_req_bits;
                end if;
        end case;
    end if;
    end process code_proc;
end arch;




