library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use work.FixedPoint_Types.ALL;

entity zigzag_reorder is
    port (
        clk : in std_logic;
        input_matrix : in  fixed_array;
        zigzag_out   : out fixed_array   
    );
end entity;

architecture rtl of zigzag_reorder is

    -- Internal signals for the input and output arrays
    signal input_arr  : fixed_array;
    signal output_arr : fixed_array;

    -- Zigzag order (8x8)
    constant zigzag_order : integer_array := (
         0,  1,  5,  6, 14, 15, 27, 28,
         2,  4,  7, 13, 16, 26, 29, 42,
         3,  8, 12, 17, 25, 30, 41, 43,
         9, 11, 18, 24, 31, 40, 44, 53,
        10, 19, 23, 32, 39, 45, 52, 54,
        20, 22, 33, 38, 46, 51, 55, 60,
        21, 34, 37, 47, 50, 56, 59, 61,
        35, 36, 48, 49, 57, 58, 62, 63
    );

begin

    input_arr <= input_matrix;

    -- Perform zigzag reorder
    process(clk)
    begin
      if rising_edge(clk) then
        for i in 0 to 63 loop
            output_arr(i) <= input_arr(zigzag_order(i));
        end loop;
      end if;
    end process;

    zigzag_out <= output_arr;


end architecture;

