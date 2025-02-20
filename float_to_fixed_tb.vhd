library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use std.textio.all; 
-- after typing simulation, type in command:
-- restart -f nowave
-- add wave float_in
-- add wave fixed_out
-- run (a period of time) eg. 3000 ns

entity tb_float_to_fixed is
end tb_float_to_fixed;

architecture test of tb_float_to_fixed is
  -- Component Declaration
  component float_to_fixed
    port (
      float_in  : in  integer;
      fixed_out : out std_logic_vector(31 downto 0)
    );
  end component;

  -- Signals for testbench
  signal float_in  : integer := 0;
  signal fixed_out : std_logic_vector(31 downto 0);
  signal clk       : std_logic;
  constant clk_period : time := 20 ns;

begin
  -- Instantiate the Unit Under Test (UUT)
  uut: float_to_fixed
    port map (
      float_in  => float_in,
      fixed_out => fixed_out
    );

  -- clock generation
  clk_gen : process
    begin
    while now < 5000 ns loop  -- change here will result in the increase of input value, i.e. more value will be tested
      clk <= '0';
      wait for clk_period / 2;
      clk <= '1';
      wait for clk_period / 2;
    end loop;
    wait;
  end process clk_gen;



  -- Test process
  stimulus: process (clk)
  begin
    float_in <= float_in +1; -- +1 to the input every time clk changes as to automatically test all the available value
  end process stimulus;
end test;

