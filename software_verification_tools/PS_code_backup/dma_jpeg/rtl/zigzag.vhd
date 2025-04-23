library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity zigzag_reorder is
    port (
        clk : in std_logic;
        input_matrix : in  std_logic_vector(2047 downto 0); -- 64 x 32-bit flattened input
        zigzag_out   : out std_logic_vector(2047 downto 0)  -- 64 x 32-bit flattened output
    );
end entity;

architecture rtl of zigzag_reorder is

    -- Zigzag order mapping for 8x8 matrix
    type integer_array is array (0 to 63) of integer;
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

    signal internal_out : std_logic_vector(2047 downto 0);

begin

    process(clk)
    begin
        if rising_edge(clk) then
            for i in 0 to 63 loop
                internal_out(32*i + 31 downto 32*i) <=
                    input_matrix(32*zigzag_order(i) + 31 downto 32*zigzag_order(i));
            end loop;
        end if;
    end process;

    zigzag_out <= internal_out;

end architecture;
