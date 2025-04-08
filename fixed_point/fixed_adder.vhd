library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity fixed_adder is
  port (
    a        : in  std_logic_vector(31 downto 0);
    b        : in  std_logic_vector(31 downto 0);
    sum_out  : out std_logic_vector(31 downto 0)
  );
end entity;

architecture behavioral of fixed_adder is
begin
  process(a, b)
  begin
    sum_out <= std_logic_vector(signed(a) + signed(b));
  end process;
end architecture;
