library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
--use std.textio.all;
--use ieee.std_logic_textio.all;

entity fwrit_main_tb is
end fwrit_main_tb;

architecture Behavioral of fwrit_main_tb is
    Component fwrit_main
    port ( huff_code, height,width: in STD_LOGIC_VECTOR (15 downto 0);
           clk, rst, newcode: in STD_LOGIC;
           data_out : out STD_LOGIC_VECTOR (7 downto 0);
           dataready : out STD_LOGIC);
    end component;
    
    signal huff_code, height, width: STD_LOGIC_VECTOR(15 downto 0);
    signal clk,rst,newcode: std_logic :='0';
    signal data_out : STD_LOGIC_VECTOR(7 downto 0);
    signal dataready : STD_LOGIC :='0';
    
     constant clk_period : time := 10 ns;
begin
    uut: fwrit_main port map (
                        huff_code    => huff_code,
                        height       => height,
                        width        => width,
                        clk          => clk,
                        rst          => rst,
                        newcode      => newcode,
                        data_out     => data_out,
                        dataready    => dataready
                        
    );

   clk_process: process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
  
  stim_process: process
  begin
        wait for 50 ns;
        rst <='1';
        wait for 10 ns;
        rst <='0';
        wait for 10 ns;
        newcode <='1';
        wait for 10 ns;
        newcode <='0';
        wait;
   end process;


end Behavioral;
