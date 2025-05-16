library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity fwrit_main_tb is
end fwrit_main_tb;

architecture Behavioral of fwrit_main_tb is
    Component fwrit_main
    port ( height, width: in std_logic_vector (15 downto 0);
           clk, rst, in_bit, start, datavalid, done: in std_logic;
           dataready: out std_logic;
           axi_valid: out std_logic;
           axi_ready: in std_logic;
           axi_data: out std_logic_vector(31 downto 0));
    end component;
    
    signal height: STD_LOGIC_VECTOR(15 downto 0):= x"123f";
    signal width: STD_LOGIC_VECTOR(15 downto 0):= x"456e";
    signal clk, rst, in_bit, start, datavalid, done, dataready, axi_valid, axi_ready: std_logic;
    signal axi_data : STD_LOGIC_VECTOR(31 downto 0);
    
    constant clk_period : time := 10 ns;
begin
    uut: fwrit_main port map (
                        height       => height,
                        width        => width,
                        clk          => clk,
                        rst          => rst,
                        in_bit       => in_bit,
                        start        => start,
                        datavalid    => datavalid,
                        done         => done,
                        dataready    => dataready,
                        axi_data     => axi_data,
                        axi_valid    => axi_valid,
                        axi_ready    => axi_ready                                        
    );

   clk_process: process
   begin
        clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
   
   in_bit_process: process
   begin
        in_bit <= '0';
		wait for clk_period*0.5;
		in_bit <= '1';
		wait for clk_period;
   end process;
 
   datavalid_process: process
   begin
        datavalid <='1';
        wait for 30 ns;
        datavalid <='0';
        wait for 20 ns;       
   end process;
  
  stim_process: process
  begin
        wait for 50 ns;
        rst <='1';
        wait for 10 ns;
        rst <='0';
        wait for 10 ns;
        start <='1';
        wait for 10 ns;
        start <='0';
        wait for 1995 ns;

        done <='1';
        wait for 10 ns;
        done <='0';
        wait;
   end process;


end Behavioral;
