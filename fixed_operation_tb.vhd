library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use std.textio.all; 
-- start simulation by typing in command line
-- restart -f no wave
-- add wave a
-- add wave b
-- add wave add_res
-- add wave sub_res
-- add wave mul_res
-- add wave div_res
-- run (a period of time eg. 50 ns)

entity tb_fixed_operation is
end tb_fixed_operation;

architecture test of tb_fixed_operation is
  component fixed_operation
    port (
      a       : in  std_logic_vector (31 downto 0);
      b       : in  std_logic_vector (31 downto 0);
      add_res : out std_logic_vector (31 downto 0);
      sub_res : out std_logic_vector (31 downto 0);
      mul_res : out std_logic_vector (31 downto 0);
      div_res : out std_logic_vector (31 downto 0)
    );
  end component;

    signal a       : std_logic_vector (31 downto 0);
    signal b       : std_logic_vector (31 downto 0);
    signal add_res : std_logic_vector (31 downto 0);
    signal sub_res : std_logic_vector (31 downto 0);
    signal mul_res : std_logic_vector (31 downto 0);
    signal div_res : std_logic_vector (31 downto 0);
  
  begin
    uut : fixed_operation
      port map(
        a => a,
        b => b,
        add_res => add_res,
        sub_res => sub_res,
        mul_res => mul_res,
        div_res => div_res
      );

    operation_test : process (a,b)
      begin
        a <= x"00010000"; -- 1 or type any value 
        b <= x"00020000"; -- 2 or type any value
    end process;
end test;
