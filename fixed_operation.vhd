library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use IEEE.MATH_REAL.ALL;

entity fixed_operation is
  port (
    a       : in  std_logic_vector (31 downto 0);
    b       : in  std_logic_vector (31 downto 0);
    add_res : out std_logic_vector (31 downto 0);
    sub_res : out std_logic_vector (31 downto 0);
    mul_res : out std_logic_vector (31 downto 0);
    div_res : out std_logic_vector (31 downto 0)
  );
end entity;

architecture behavioral of fixed_operation is

  signal zero_result : std_logic_vector(31 downto 0) := (others => 'U');
begin
  process(a, b)
  -- multiplication variable
    variable temp_mul   : signed(63 downto 0); -- multiplication: 2 * (integer_bits + fractional_bits)
  -- division variable
    variable a_extended : signed(47 downto 0); --integer_bits + 2 * fractional_bits
    variable b_signed   : signed(31 downto 0);
    variable temp_div   : signed(31 downto 0);
  begin
  -- addition
    add_res <= std_logic_vector(signed(a) + signed(b));

  -- subtraction
    sub_res <= std_logic_vector(signed(a) - signed(b));

  -- multiplication
    temp_mul := signed(a) * signed(b);
    mul_res <= std_logic_vector(temp_mul(47 downto 16)); 

  -- division
      -- Compare b to a vector of zeros of the same length
    if b /= zero_result then
      -- Extend 'a' to include fractional bits for division
      a_extended := resize(signed(a) & to_signed(0, 16), 48);
      b_signed := signed(b);

      -- Perform the division
      temp_div := resize(a_extended / b_signed, 32);

      -- Assign the result to the output
      div_res <= std_logic_vector(temp_div);
    else
      -- Handle division by zero by assigning the pre-defined zero_result
      div_res <= zero_result;
    end if;

  end process;
end architecture;