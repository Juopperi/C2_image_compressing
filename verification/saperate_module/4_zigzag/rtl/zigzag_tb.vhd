library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use std.textio.all; 
use work.FixedPoint_Types.ALL;

entity zigzag_tb is
end zigzag_tb;

architecture test of zigzag_tb is
  component zigzag
    port (
        clk : in std_logic;
        input_matrix : in  fixed_array;
        zigzag_out   : out fixed_array   
    );
  end component;

        signal clk    : std_logic :='0';
        signal zigzag_out : fixed_array;

        signal input_matrix : fixed_array;

  begin
    uut : zigzag
      port map(
        clk => clk,
        input_matrix => input_matrix,
        zigzag_out => zigzag_out
      );

    process
    begin
      wait for 50 ns;
      clk <= not clk;
      wait;
    end process;

end test;
