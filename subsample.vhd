library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use IEEE.MATH_REAL.ALL;
use work.FixedPoint_Types.ALL;


entity subsample is
    port (
        clk     : in  std_logic;
        Cb_in   : in  fixed_array;
        Cr_in   : in  fixed_array;
        Cb_out  : out fixed_array;
        Cr_out  : out fixed_array
    );
end entity;

architecture Behavioral of subsample is
    
    constant div4 : signed (31 downto 0) := x"00004000";
begin
    process(clk)
        variable Cb_sub : fixed_array_sub;
        variable Cr_sub : fixed_array_sub;
        variable idx0, idx1, idx2, idx3 : integer;
        variable out_idx : integer;
        variable avg_cb, avg_cr : signed (63 downto 0);
    begin
        if rising_edge(clk) then

            -- Step 1: Subsample (4x4 block of averages from 2x2)
            for row in 0 to 3 loop
                for col in 0 to 3 loop
                    idx0 := (2*row)*8 + (2*col);
                    idx1 := idx0 + 1;
                    idx2 := idx0 + 8;
                    idx3 := idx0 + 9;
                    out_idx := row*4 + col;

                    avg_cb := (signed(Cb_in(idx0)) + signed(Cb_in(idx1)) + signed(Cb_in(idx2)) + signed(Cb_in(idx3))) * div4;
                    avg_cr := (signed(Cr_in(idx0)) + signed(Cr_in(idx1)) + signed(Cr_in(idx2)) + signed(Cr_in(idx3))) * div4;
                    Cb_sub(out_idx) := std_logic_vector(avg_cb(47 downto 16));
                    Cr_sub(out_idx) := std_logic_vector(avg_cr(47 downto 16));
                end loop;
            end loop;

            -- Step 2: Nearest-neighbor Upsample (4x4 ? 8x8)
            for row in 0 to 3 loop
                for col in 0 to 3 loop
                    out_idx := row*4 + col;
                    idx0 := (2*row)*8 + (2*col);

                    Cb_out(idx0)     <= Cb_sub(out_idx);
                    Cb_out(idx0+1)   <= Cb_sub(out_idx);
                    Cb_out(idx0+8)   <= Cb_sub(out_idx);
                    Cb_out(idx0+9)   <= Cb_sub(out_idx);

                    Cr_out(idx0)     <= Cr_sub(out_idx);
                    Cr_out(idx0+1)   <= Cr_sub(out_idx);
                    Cr_out(idx0+8)   <= Cr_sub(out_idx);
                    Cr_out(idx0+9)   <= Cr_sub(out_idx);
                end loop;
            end loop;

        end if;
    end process;
end architecture;

