library ieee;
use ieee.std_logic_1164.all;

entity huff_tb is
end entity huff_tb;

architecture huff_tb_arch of huff_tb is 
    component huffman_DC_Y is
        port(   
            clk : in std_logic;
            input_integer : in std_logic_vector(7 downto 0);
            output_bit : out std_logic;
            done : out std_logic
        );
    end component huffman_DC_Y;
    
        signal clk : std_logic := '0';
        signal input_integer : std_logic_vector(7 downto 0);
        signal output_bit : std_logic;
        signal done : std_logic;
    
    begin
        
        dut: component huffman_DC_Y
            port map(
                clk => clk,
                input_integer => input_integer,
                output_bit => output_bit,
                done => done
            );
    
        clock : process 
        begin 
            clk <= '1';
             wait for 10 ns;
             clk <= '0';
             wait for 10 ns;
        end process;
        
        proc : process
        begin
            input_integer <= "00000000";

            wait until (done = '1');
            input_integer <= "00000001";

            wait until (done = '1');
            input_integer <= "00000010";

            wait until (done = '1');
            input_integer <= "00000011";

            wait until (done = '1');
            input_integer <= "00000100";

            wait until (done = '1');
            input_integer <= "00000101";

            wait until (done = '1');
            input_integer <= "00000110";
            wait;

        end process proc;

        


end architecture huff_tb_arch;