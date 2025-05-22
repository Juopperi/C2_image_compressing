library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity zigzag_reorder is
    generic (
        vector_length : integer := 16
    );
    port (
        clk : in std_logic;
        input_matrix : in  std_logic_vector(64*vector_length-1 downto 0); -- 64 x vector_length flattened input
        zigzag_out   : out std_logic_vector(64*vector_length-1 downto 0)  -- 64 x vector_length flattened output
    );
end entity;

architecture rtl of zigzag_reorder is

    -- Zigzag order mapping for 8x8 matrix
    type integer_array is array (0 to 63) of integer;
    --constant zigzag_order : integer_array := (
    --     0,  1,  5,  6, 14, 15, 27, 28,
    --     2,  4,  7, 13, 16, 26, 29, 42,
    --     3,  8, 12, 17, 25, 30, 41, 43,
    --     9, 11, 18, 24, 31, 40, 44, 53,
    --    10, 19, 23, 32, 39, 45, 52, 54,
    --    20, 22, 33, 38, 46, 51, 55, 60,
    --    21, 34, 37, 47, 50, 56, 59, 61,
    --    35, 36, 48, 49, 57, 58, 62, 63
    --);
    constant zigzag_order : integer_array := (
        0,  1,  8, 16,  9,  2,  3, 10,
        17, 24, 32, 25, 18, 11,  4,  5,
        12, 19, 26, 33, 40, 48, 41, 34,
        27, 20, 13,  6,  7, 14, 21, 28,
        35, 42, 49, 56, 57, 50, 43, 36,
        29, 22, 15, 23, 30, 37, 44, 51,
        58, 59, 52, 45, 38, 31, 39, 46,
        53, 60, 61, 54, 47, 55, 62, 63 );


    signal internal_out : std_logic_vector(64*vector_length-1 downto 0);

begin

    process(clk)
    begin
        if rising_edge(clk) then
            for i in 0 to 63 loop
                internal_out((vector_length*i) +  vector_length-1 downto vector_length*i) <= input_matrix((vector_length*zigzag_order(i)) +  vector_length-1 downto vector_length*zigzag_order(i));
            end loop;
        end if;
    end process;

    zigzag_out <= internal_out;

end architecture;
