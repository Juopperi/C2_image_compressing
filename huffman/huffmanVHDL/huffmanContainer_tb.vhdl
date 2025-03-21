library ieee;
use ieee.std_logic_1164.all;

entity huffmanContainer_tb is
end entity huffmanContainer_tb;

architecture arch of huffmanContainer_tb is 
    component huff_container is
        port(   
            clk : in std_logic;
            reset : in std_logic;
            test1 : in std_logic_vector(511 downto 0);
            test2 : out std_logic_vector(31 downto 0)
        );
    end component huff_container;
    
        signal clk : std_logic := '0';
        signal reset : std_logic := '1';
        signal test1 : std_logic_vector(511 downto 0);
        signal test2 : std_logic_vector(31 downto 0);
        signal done : std_logic;
    
    begin
        
        clk <= not clk after 1 ns;
        reset <= '1', '0' after 5 ns;

        dut: component huff_container
            port map(
                clk => clk,
                reset => reset, 
                test1 => test1,
                test2 => test2
            );

        proc : process
        begin
            test1 <= (others => '0'); -- 1 
            test1(15 downto 8)  <= "00000000"; -- 2
            test1(23 downto 16) <= "00000000"; -- 3 
            test1(31 downto 24) <= "00000000"; -- 4 
            test1(39 downto 32) <= "00000010";
            test1(47 downto 40) <= "00000000"; -- 1
            test1(55 downto 48) <= "00000000"; -- 2
            test1(63 downto 56) <= "00000000"; -- 3
            test1(71 downto 64) <= "00000000"; -- 4
            test1(79 downto 72) <= "00000011";
            wait until (reset = '0');

        end process proc;

        


end architecture arch;