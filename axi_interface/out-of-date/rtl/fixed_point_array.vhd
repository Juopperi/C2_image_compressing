library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

package FixedPoint_Types is
    -- Define a 64-element array of Q16.16 fixed-point numbers
    type fixed_array is array (0 to 63) of std_logic_vector(31 downto 0);
    type integer_array is array (0 to 63) of integer;
end package FixedPoint_Types;
