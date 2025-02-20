library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use ieee.math_real.all;

entity float_to_fixed is 
  port (
    float_in  : in  integer;  -- if it's a real number (eg. 3.552), it should be converted to integer first.
    fixed_out : out std_logic_vector(31 downto 0) -- std_logic_vector is suitable for hardward implementation
  );						  -- when operation is needed, convert it to signed to represent fixed-point value
end float_to_fixed;

architecture behavioral of float_to_fixed is
  constant scale_factor    : integer := 65536; -- scaling factor = 2^16
  begin
    conversion : process(float_in)
      variable scaled_value : integer;
    begin
      scaled_value := float_in * scale_factor;
      fixed_out    <= std_logic_vector(to_signed(scaled_value, 32)); -- converting into fixed-point and output as std_logic_vector
    end process conversion;					     -- 16 bits for integer and fractional respectively
end behavioral;
