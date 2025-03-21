library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity huffman_AC_Y is 
    port(   
        input_integer : in std_logic_vector(7 downto 0);
        zeros : in integer;
        output_integer: out std_logic_vector(15 downto 0);
        length : out integer;
        ready_next: out std_logic
    );
end huffman_AC_Y;

architecture arch of huffman_AC_Y is 
begin

code_proc : process (input_integer)    
    variable input_reg : std_logic_vector(7 downto 0);
    variable output_reg : std_logic_vector(15 downto 0);
    variable test : integer range 0 to 170 := 0;
begin                 
    
    test := to_integer(unsigned(input_integer));
    case zeros is
        when 0 =>
            case test is 
                when 1 => 
                    output_reg := "XXXXXXXXXXXXXX00";
                    length <= 2;
                when 2 => 
                    output_reg := "XXXXXXXXXXXXXX01";
                    length <= 2;
                when 3 =>
                    output_reg := "XXXXXXXXXXXXX100";
                    length <= 3;
                when 4 => 
                    output_reg := "XXXXXXXXXXXX1011";
                    length <= 4;
                when 5 => 
                    output_reg := "XXXXXXXXXXX11010";
                    length <= 5;
                when 6 =>
                    output_reg := "XXXXXXXXX1111000";
                    length <= 7;
                when 7 =>
                    output_reg := "XXXXXXXX11111000";
                    length <= 8;
                when 8 =>
                    output_reg := "XXXXXX1111110110";
                    length <= 10;
                when 9 => 
                    output_reg := "1111111110000010";
                    length <= 16;
                when others =>
                    output_reg := (others => '0');
            end case;
        when 1 =>
            case test is 
                when 1 => 
                    output_reg := "XXXXXXXXXXXX1100";
                    length <= 4;
                when 2 => 
                    output_reg := "XXXXXXXXXXX11011";
                    length <= 5;
                when 3 =>
                    output_reg := "XXXXXXXXX1111001";
                    length <= 7;
                when 4 => 
                    output_reg := "XXXXXXX111110110";
                    length <= 9;
                when 5 => 
                    output_reg := "XXXXX11111110110";
                    length <= 11;
                when 6 =>
                    output_reg := "1111111110000100";
                    length <= 16;
                when 7 =>
                    output_reg := "1111111110000101";
                    length <= 16;
                when 8 =>
                    output_reg := "1111111110000110";
                    length <= 16;
                when 9 => 
                    output_reg := "1111111110000111";
                    length <= 16;
                when others =>
                    output_reg := (others => '0');
            end case;
        when 2 =>
            case test is 
                when 1 => 
                    output_reg := "XXXXXXXXXXX11100";
                    length <= 5;
                when 2 => 
                    output_reg := "XXXXXXXX11111001";
                    length <= 8;
                when 3 =>
                    output_reg := "XXXXXX1111110111";
                    length <= 10;
                when 4 => 
                    output_reg := "XXXX111111110100";
                    length <= 12;
                when 5 => 
                    output_reg := "1111111110001001";
                    length <= 16;
                when 6 =>
                    output_reg := "1111111110001010";
                    length <= 16;
                when 7 =>
                    output_reg := "1111111110001011";
                    length <= 16;
                when 8 =>
                    output_reg := "1111111110001100";
                    length <= 16;
                when 9 => 
                    output_reg := "1111111110001101";
                    length <= 16;
                when others =>
                    output_reg := (others => '0');
            end case;       
        when 3 =>
            case test is 
                when 1 => 
                    output_reg := "XXXXXXXXXX111010";
                    length <= 6;
                when 2 => 
                    output_reg := "XXXXXXX111110111";
                    length <= 9;
                when 3 =>
                    output_reg := "XXXX111111110101";
                    length <= 12;
                when 4 => 
                    output_reg := "1111111110001111";
                    length <= 16;
                when 5 => 
                    output_reg := "1111111110010000";
                    length <= 16;
                when 6 =>
                    output_reg := "1111111110010001";
                    length <= 16;
                when 7 =>
                    output_reg := "1111111110010010";
                    length <= 16;
                when 8 =>
                    output_reg := "1111111110010011";
                    length <= 16;
                when 9 => 
                    output_reg := "1111111110010100";
                    length <= 16;
                when others =>
                    output_reg := (others => '0');
            end case;      
        when 4 =>
            case test is 
                when 1 => 
                    output_reg := "XXXXXXXXXX111011";
                    length <= 6;
                when 2 => 
                    output_reg := "XXXXXX1111111000";
                    length <= 10;
                when 3 =>
                    output_reg := "1111111110010110";
                    length <= 16;
                when 4 => 
                    output_reg := "1111111110010111";
                    length <= 16;
                when 5 => 
                    output_reg := "1111111110011000";
                    length <= 16;
                when 6 =>
                    output_reg := "1111111110011001";
                    length <= 16;
                when 7 =>
                    output_reg := "1111111110011010";
                    length <= 16;
                when 8 =>
                    output_reg := "1111111110011011";
                    length <= 16;
                when 9 => 
                    output_reg := "1111111110011100";
                    length <= 16;
                when others =>
                    output_reg := (others => '0');
            end case;      
        when 5 =>
            case test is 
                when 1 => 
                    output_reg := "XXXXXXXXX1111010";
                    length <= 7;
                when 2 => 
                    output_reg := "XXXXXX1111111011";
                    length <= 10;
                when 3 =>
                    output_reg := "1111111110011110";
                    length <= 16;
                when 4 => 
                    output_reg := "1111111110011111";
                    length <= 16;
                when 5 => 
                    output_reg := "1111111110100000";
                    length <= 16;
                when 6 =>
                    output_reg := "1111111110100001";
                    length <= 16;
                when 7 =>
                    output_reg := "1111111110100010";
                    length <= 16;
                when 8 =>
                    output_reg := "1111111110100011";
                    length <= 16;
                when 9 => 
                    output_reg := "1111111110100100";
                    length <= 16;
                when others =>
                    output_reg := (others => '0');
            end case;         
        when 6 =>
            case test is 
                when 1 => 
                    output_reg := "XXXXXXXXX1111011";
                    length <= 7;
                when 2 => 
                    output_reg := "XXXX111111110110";
                    length <= 12;
                when 3 =>
                    output_reg := "1111111110100110";
                    length <= 16;
                when 4 => 
                    output_reg := "1111111110100111";
                    length <= 16;
                when 5 => 
                    output_reg := "1111111110101000";
                    length <= 16;
                when 6 =>
                    output_reg := "1111111110101001";
                    length <= 16;
                when 7 =>
                    output_reg := "1111111110101010";
                    length <= 16;
                when 8 =>
                    output_reg := "1111111110101011";
                    length <= 16;
                when 9 => 
                    output_reg := "1111111110101100";
                    length <= 16;
                when others =>
                    output_reg := (others => '0');
            end case;     
        when 7 =>
            case test is 
                when 1 => 
                    output_reg := "XXXXXXXX11111010";
                    length <= 8;
                when 2 => 
                    output_reg := "XXXX111111110111";
                    length <= 12;
                when 3 =>
                    output_reg := "1111111110101110";
                    length <= 16;
                when 4 => 
                    output_reg := "1111111110101111";
                    length <= 16;
                when 5 => 
                    output_reg := "1111111110110000";
                    length <= 16;
                when 6 =>
                    output_reg := "1111111110110001";
                    length <= 16;
                when 7 =>
                    output_reg := "1111111110110010";
                    length <= 16;
                when 8 =>
                    output_reg := "1111111110110011";
                    length <= 16;
                when 9 => 
                    output_reg := "1111111110110100";
                    length <= 16;
                when others =>
                    output_reg := (others => '0');
            end case;
        when 8 =>
            case test is 
                when 1 => 
                    output_reg := "XXXXXXX111111000";
                    length <= 9;
                when 2 => 
                    output_reg := "X111111111000000";
                    length <= 15;
                when 3 =>
                    output_reg := "1111111110110110";
                    length <= 16;
                when 4 => 
                    output_reg := "1111111110110111";
                    length <= 16;
                when 5 => 
                    output_reg := "1111111110111000";
                    length <= 16;
                when 6 =>
                    output_reg := "1111111110111001";
                    length <= 16;
                when 7 =>
                    output_reg := "1111111110111010";
                    length <= 16;
                when 8 =>
                    output_reg := "1111111110111011";
                    length <= 16;
                when 9 => 
                    output_reg := "1111111110111100";
                    length <= 16;
                when others =>
                    output_reg := (others => '0');
            end case;  
        when 9 =>
            case test is 
                when 1 => 
                    output_reg := "XXXXXXX111111001";
                    length <= 9;
                when 2 => 
                    output_reg := "1111111110111110";
                    length <= 16;
                when 3 =>
                    output_reg := "1111111110111111";
                    length <= 16;
                when 4 => 
                    output_reg := "1111111111000000";
                    length <= 16;
                when 5 => 
                    output_reg := "1111111111000001";
                    length <= 16;
                when 6 =>
                    output_reg := "1111111111000010";
                    length <= 16;
                when 7 =>
                    output_reg := "1111111111000011";
                    length <= 16;
                when 8 =>
                    output_reg := "1111111111000100";
                    length <= 16;
                when 9 => 
                    output_reg := "1111111111000101";
                    length <= 16;
                when others =>
                    output_reg := (others => '0');
            end case;         
        when 10 =>
            case test is 
                when 1 => 
                    output_reg := "XXXXXXX111111010";
                    length <= 9;
                when 2 => 
                    output_reg := "1111111111000111";
                    length <= 16;
                when 3 =>
                    output_reg := "1111111111001000";
                    length <= 16;
                when 4 => 
                    output_reg := "1111111111001001";
                    length <= 16;
                when 5 => 
                    output_reg := "1111111111001010";
                    length <= 16;
                when 6 =>
                    output_reg := "1111111111001011";
                    length <= 16;
                when 7 =>
                    output_reg := "1111111111001100";
                    length <= 16;
                when 8 =>
                    output_reg := "1111111111001101";
                    length <= 16;
                when 9 => 
                    output_reg := "1111111111001110";
                    length <= 16;
                when others =>
                    output_reg := (others => '0');
            end case;    
        when 11 =>
            case test is 
                when 1 => 
                    output_reg := "XXXXXX1111111001";
                    length <= 10;
                when 2 => 
                    output_reg := "1111111111010000";
                    length <= 16;
                when 3 =>
                    output_reg := "1111111111010001";
                    length <= 16;
                when 4 => 
                    output_reg := "1111111111010010";
                    length <= 16;
                when 5 => 
                    output_reg := "1111111111010011";
                    length <= 16;
                when 6 =>
                    output_reg := "1111111111010100";
                    length <= 16;
                when 7 =>
                    output_reg := "1111111111010101";
                    length <= 16;
                when 8 =>
                    output_reg := "1111111111010110";
                    length <= 16;
                when 9 => 
                    output_reg := "1111111111010111";
                    length <= 16;
                when others =>
                    output_reg := (others => '0');
            end case;   
        when 12 =>
            case test is 
                when 1 => 
                    output_reg := "XXXXXX1111111010";
                    length <= 10;
                when 2 => 
                    output_reg := "1111111111011001";
                    length <= 16;
                when 3 =>
                    output_reg := "1111111111011010";
                    length <= 16;
                when 4 => 
                    output_reg := "1111111111011011";
                    length <= 16;
                when 5 => 
                    output_reg := "1111111111011100";
                    length <= 16;
                when 6 =>
                    output_reg := "1111111111011101";
                    length <= 16;
                when 7 =>
                    output_reg := "1111111111011110";
                    length <= 16;
                when 8 =>
                    output_reg := "1111111111011111";
                    length <= 16;
                when 9 => 
                    output_reg := "1111111111100000";
                    length <= 16;
                when others =>
                    output_reg := (others => '0');
            end case;   
        when 13 =>
            case test is 
                when 1 => 
                    output_reg := "XXXXX11111111000";
                    length <= 11;
                when 2 => 
                    output_reg := "1111111111100010";
                    length <= 16;
                when 3 =>
                    output_reg := "1111111111100011";
                    length <= 16;
                when 4 => 
                    output_reg := "1111111111100100";
                    length <= 16;
                when 5 => 
                    output_reg := "1111111111100101";
                    length <= 16;
                when 6 =>
                    output_reg := "1111111111100110";
                    length <= 16;
                when 7 =>
                    output_reg := "1111111111100111";
                    length <= 16;
                when 8 =>
                    output_reg := "1111111111101000";
                    length <= 16;
                when 9 => 
                    output_reg := "1111111111101001";
                    length <= 16;
                when others =>
                    output_reg := (others => '0');
            end case;    
        when 14 =>
            case test is 
                when 1 => 
                    output_reg := "1111111111101011";
                    length <= 16;
                when 2 => 
                    output_reg := "1111111111101100";
                    length <= 16;
                when 3 =>
                    output_reg := "1111111111101101";
                    length <= 16;
                when 4 => 
                    output_reg := "1111111111101110";
                    length <= 16;
                when 5 => 
                    output_reg := "1111111111101111";
                    length <= 16;
                when 6 =>
                    output_reg := "1111111111110000";
                    length <= 16;
                when 7 =>
                    output_reg := "1111111111110001";
                    length <= 16;
                when 8 =>
                    output_reg := "1111111111110010";
                    length <= 16;
                when 9 => 
                    output_reg := "1111111111110011";
                    length <= 16;
                when others =>
                    output_reg := (others => '0');
            end case;        
        when 15 =>
            case test is 
                when 1 => 
                    output_reg := "1111111111110101";
                    length <= 16;
                when 2 => 
                    output_reg := "1111111111110110";
                    length <= 16;
                when 3 =>
                    output_reg := "1111111111110111";
                    length <= 16;
                when 4 => 
                    output_reg := "1111111111111000";
                    length <= 16;
                when 5 => 
                    output_reg := "1111111111111001";
                    length <= 16;
                when 6 =>
                    output_reg := "1111111111111010";
                    length <= 16;
                when 7 =>
                    output_reg := "1111111111111011";
                    length <= 16;
                when 8 =>
                    output_reg := "1111111111111100";
                    length <= 16;
                when 9 => 
                    output_reg := "1111111111111101";
                    length <= 16;
                when others =>
                    output_reg := (others => '0');
            end case;                                                                    
                                                                                                                                    
        when others =>
            output_reg := (others => '1');                              
    end case;
    
    output_integer <= output_reg;
    end process code_proc;
end arch;




