library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use IEEE.MATH_REAL.ALL;
use work.FixedPoint_Types.ALL;  -- Import fixed_array type

entity quantization is
    Port (
        clk    : in std_logic;
        Y   : in  fixed_array; -- Input: 64-element array of Q16.16
        Cb  : in  fixed_array;
        Cr  : in  fixed_array;
        Y_out  : out fixed_array; -- Output: Quantized 64-element array
        Cb_out : out fixed_array;
        Cr_out : out fixed_array
    );
end quantization;

architecture Behavioral of quantization is
    -- Quantization tables in Q16.16 format (scaled by 65536)
    constant TY : fixed_array := (
        x"00100000", x"000B0000", x"000A0000", x"00100000", x"00180000", x"00280000", x"00330000", x"003D0000",
        x"000C0000", x"000C0000", x"000E0000", x"00130000", x"001A0000", x"003A0000", x"003C0000", x"00370000",
        x"000E0000", x"000D0000", x"00100000", x"00180000", x"00280000", x"00390000", x"00450000", x"00380000",
        x"000E0000", x"00110000", x"00160000", x"001D0000", x"00330000", x"00570000", x"00500000", x"003E0000",
        x"00120000", x"00160000", x"00250000", x"00380000", x"00440000", x"006D0000", x"00670000", x"004D0000",
        x"00180000", x"00230000", x"00370000", x"00400000", x"00510000", x"00680000", x"00710000", x"005C0000",
        x"00310000", x"00400000", x"004E0000", x"00570000", x"00670000", x"00790000", x"00780000", x"00650000",
        x"00480000", x"005C0000", x"005F0000", x"00620000", x"00700000", x"00640000", x"00670000", x"00630000"
    );  -- luminance table

    constant TC : fixed_array := (
        x"00110000", x"00120000", x"00180000", x"002F0000", x"00630000", x"00630000", x"00630000", x"00630000",
        x"00120000", x"00150000", x"001A0000", x"00420000", x"00630000", x"00630000", x"00630000", x"00630000",
        x"00180000", x"001A0000", x"00380000", x"00630000", x"00630000", x"00630000", x"00630000", x"00630000",
        x"002F0000", x"00420000", x"00630000", x"00630000", x"00630000", x"00630000", x"00630000", x"00630000",
        x"00630000", x"00630000", x"00630000", x"00630000", x"00630000", x"00630000", x"00630000", x"00630000",
        x"00630000", x"00630000", x"00630000", x"00630000", x"00630000", x"00630000", x"00630000", x"00630000",
        x"00630000", x"00630000", x"00630000", x"00630000", x"00630000", x"00630000", x"00630000", x"00630000",
        x"00630000", x"00630000", x"00630000", x"00630000", x"00630000", x"00630000", x"00630000", x"00630000"
    );  -- chrominance table

begin
    process (clk)
        -- extended lenth for division
        variable Y_extended : signed(47 downto 0);
        variable Cb_extended : signed(47 downto 0);
        variable Cr_extended : signed(47 downto 0);
        -- quantization table in signed format
        variable TY_signed : signed(31 downto 0);
        variable TC_signed : signed(31 downto 0);
        -- intermediate values for each i. not yet rounded
        variable temp_Y : signed(31 downto 0);
        variable temp_Cb : signed(31 downto 0);
        variable temp_Cr : signed(31 downto 0);
        -- store values after rounded
        variable round_Y : signed(31 downto 0);
        variable round_Cb : signed(31 downto 0);
        variable round_Cr : signed(31 downto 0);
        -- add 0.5 to and truncate the last 16 bits (all decimal is set to 0)
        constant rounding_factor : signed(31 downto 0) := X"00008000"; -- 2^15 -> 0.5

    begin
        if rising_edge(clk) then
            -- Perform element-wise fixed-point division
            for i in 0 to 63 loop
                -- Fixed-Point Division: (A * 65536) / B
                Y_extended := resize(signed(Y(i)) & to_signed(0, 16), 48);
                Cb_extended := resize(signed(Cb(i)) & to_signed(0, 16), 48);
                Cr_extended := resize(signed(Cr(i)) & to_signed(0, 16), 48);

                TY_signed := signed(TY(i));
                TC_signed := signed(TC(i));

                temp_Y := resize (Y_extended / TY_signed, 32);
                temp_Cb := resize (Cb_extended / TC_signed, 32);
                temp_Cr := resize (Cr_extended / TC_signed, 32);
                -- add rounding factor
                round_Y := temp_Y + rounding_factor;
                round_Cb := temp_Cb + rounding_factor;
                round_Cr := temp_Cr + rounding_factor;
                -- decimal part set to 0
                round_Y(15 downto 0) := (others => '0');
                round_Cb(15 downto 0) := (others => '0');
                round_Cr(15 downto 0) := (others => '0');

                Y_out(i) <= std_logic_vector(round_Y);
                Cb_out(i) <= std_logic_vector(round_Cb);
                Cr_out(i) <= std_logic_vector(round_Cr);
            end loop;
        end if;
    end process;

end Behavioral;
