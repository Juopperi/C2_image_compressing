library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity huffman is 
    port(   
        clk : in std_logic;
        reset : in std_logic;
        input_integer : in std_logic_vector(7 downto 0);
        output_bit: out std_logic;
        ready_next: out std_logic
    );
end huffman;

architecture arch of huffman is 
    
    type t_State is (load,search,shifting_out);
    signal state : t_State;

begin

    huff_logic_proc : process(clk)
        variable length : natural range 0 to 15 := 0;
        variable index : natural range 0 to 15 := 0;
        variable index_output : natural range 0 to 32 := 0;
        variable input_reg : std_logic_vector(7 downto 0);
        variable output_reg : std_logic_vector(15 downto 0);
        variable test : integer range 0 to 170 := 0;

    begin
        if rising_edge(clk) then
            if reset = '1' then
                state <= load;
                length := 0;
                index := 0;
                ready_next <= '0';
            else 
                case state is
                    when load => 
                        ready_next <= '0';
                        index := 0;
                        output_bit <= 'Z';
                        input_reg := input_integer;
                        state <= search;
                        
                    when search =>
                        test := to_integer(unsigned(input_reg));
                        case test is 
                            when 0 => 
                                output_reg := "XXXXXXXXXXXX1010"; 
                                length := 4;
                            when 1 => 
                                output_reg := "XXXXXXXXXXXXXX00";
                                length := 2;
                            when 2 => 
                                output_reg := "XXXXXXXXXXXXXX00";
                                length := 2;
                            when 3 =>
                                output_reg := "XXXXXXXXXXXXX100";
                                length := 3;
                            when 4 => 
                                output_reg := "XXXXXXXXXXXX1011";
                                length := 4;
                            when 5 => 
                                output_reg := "XXXXXXXXXXX11010";
                                length := 5;
                            when 6 =>
                                output_reg := "XXXXXXXXX1111000";
                                length := 7;
                            when 7 =>
                                output_reg := "XXXXXXXX11111000";
                                length := 8;
                            when 8 =>
                                output_reg := "XXXXXX1111110110";
                                length := 10;
                            when 9 => 
                                output_reg := "1111111110000010";
                                length := 16;
                            when 10 => 
                                output_reg := "1111111110000011";
                                length := 16;
                            when others =>
                                output_reg := (others => '0');
                        end case;
                        state <= shifting_out;

                    when shifting_out =>
                        output_bit <= output_reg(index);
                        index := index + 1;
                        if index = length then
                            ready_next <= '1';
                            state <= load;
                        end if;
                        
                end case;
            end if;
        end if;
    end process huff_logic_proc;

end arch;




