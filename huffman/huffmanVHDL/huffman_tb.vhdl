library ieee;
use ieee.std_logic_1164.all;

entity huff_tb is
end entity huff_tb;

architecture huff_tb_arch of huff_tb is 
    component huffman is
        port(   
            clk : in std_logic;
            reset : in std_logic;
            input_integer : in std_logic_vector(7 downto 0);
            output_bit : out std_logic;
            ready_next : out std_logic
        );
    end component huffman;
    
        signal clk : std_logic := '0';
        signal reset : std_logic := '1';
        signal input_integer : std_logic_vector(7 downto 0);
        signal output_bit : std_logic;
        signal ready_next : std_logic;
    
    begin
        
        clk <= not clk after 1 ns;
        reset <= '1', '0' after 5 ns;

        dut: component huffman
            port map(
                clk => clk,
                reset => reset, 
                input_integer => input_integer,
                output_bit => output_bit,
                ready_next => ready_next
            );

        proc : process
        begin
            input_integer <= "00000000";
            wait until (reset = '0');

            wait until (ready_next = '0');
            input_integer <= "00000001";

            wait until (ready_next = '0');
            input_integer <= "00000010";

            wait until (ready_next = '0');
            input_integer <= "00000011";

            wait until (ready_next = '0');
            input_integer <= "00000100";

            wait until (ready_next = '0');
            input_integer <= "00000101";

            wait until (ready_next = '0');
            input_integer <= "00000110";
            wait;
	


--            when "11111101" => -- -2 
--                output_integer <= "XXX000010";
--		length_output <= 5;
--            when "00011011" => -- 27
--                output_integer <= "XX0000011";
--		length_output <= 6;
--            when "11111000" => -- -7
--                output_integer <= "XX0000010";
--		length_output <= 6;
--            when "00000101" => -- 5 
--                output_integer <= "X0000000";
--		length_output <= 0;

        end process proc;

        


end architecture huff_tb_arch;