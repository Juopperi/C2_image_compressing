library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity fixed_multiplier is
  port (
    a        : in  std_logic_vector(31 downto 0);
    b        : in  std_logic_vector(31 downto 0);
    mul_res  : out std_logic_vector(31 downto 0)
  );
end entity;

architecture behavioral of fixed_multiplier is
  signal temp_mul : signed(63 downto 0);
begin
  process(a, b)
  begin
    temp_mul := signed(a) * signed(b);
    mul_res <= std_logic_vector(temp_mul(47 downto 16)); 
  end process;
end architecture;
