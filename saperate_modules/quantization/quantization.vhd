library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use IEEE.MATH_REAL.ALL;
use work.FixedPoint_Types.ALL;  -- Import fixed_array type

entity quantization is
    Port (
        clk    : in std_logic;
        Y   : in  fixed_array; 
        Cb  : in  fixed_array;
        Cr  : in  fixed_array;
        Y_out  : out fixed_array_16; -- Output: Quantized 64-element array
        Cb_out : out fixed_array_16;
        Cr_out : out fixed_array_16
    );
end quantization;

architecture Behavioral of quantization is
    -- Quantization tables in Q16.16 format (scaled by 65536)
    constant TY : fixed_array := (
        x"00001000", x"00001746", x"0000199A", x"00001000",
        x"00000AAB", x"00000666", x"00000505", x"00000432",
        x"00001555", x"00001555", x"00001249", x"00000D79",
        x"000009D9", x"0000046A", x"00000444", x"000004A8",
        x"00001249", x"000013B1", x"00001000", x"00000AAB",
        x"00000666", x"0000047E", x"000003B6", x"00000492",
        x"00001249", x"00000F0F", x"00000BA3", x"000008D4",
        x"00000505", x"000002F1", x"00000333", x"00000421",
        x"00000E39", x"00000BA3", x"000006EB", x"00000492",
        x"000003C4", x"00000259", x"0000027C", x"00000353",
        x"00000AAB", x"00000750", x"000004A8", x"00000400",
        x"00000329", x"00000276", x"00000244", x"000002C8",
        x"00000539", x"00000400", x"00000348", x"000002F1",
        x"0000027C", x"0000021E", x"00000222", x"00000289",
        x"0000038E", x"000002C8", x"000002B2", x"0000029D",
        x"00000249", x"0000028F", x"0000027C", x"00000296"
    );  -- luminance table

    constant TC : fixed_array := (
        x"00000F0F", x"00000E39", x"00000AAB", x"00000572",
        x"00000296", x"00000296", x"00000296", x"00000296",
        x"00000E39", x"00000C31", x"000009D9", x"000003E1",
        x"00000296", x"00000296", x"00000296", x"00000296",
        x"00000AAB", x"000009D9", x"00000492", x"00000296",
        x"00000296", x"00000296", x"00000296", x"00000296",
        x"00000572", x"000003E1", x"00000296", x"00000296",
        x"00000296", x"00000296", x"00000296", x"00000296",
        x"00000296", x"00000296", x"00000296", x"00000296",
        x"00000296", x"00000296", x"00000296", x"00000296",
        x"00000296", x"00000296", x"00000296", x"00000296",
        x"00000296", x"00000296", x"00000296", x"00000296",
        x"00000296", x"00000296", x"00000296", x"00000296",
        x"00000296", x"00000296", x"00000296", x"00000296",
        x"00000296", x"00000296", x"00000296", x"00000296",
        x"00000296", x"00000296", x"00000296", x"00000296"
    );  -- chrominance table
           constant rounding_factor : signed(31 downto 0) := x"00008000"; -- 2^15 = 0.5
           signal i : integer range 0 to 63;
begin
        process (clk)
            variable Y_temp : signed(63 downto 0);
            variable Cb_temp : signed(63 downto 0);
            variable Cr_temp : signed(63 downto 0);
            variable round_Y : signed(31 downto 0);
            variable round_Cb : signed(31 downto 0);
            variable round_Cr : signed(31 downto 0);
        begin
            if rising_edge(clk) then
                -- Fixed-point multiplication
                Y_temp := signed(Y(i)) * signed(TY(i));
                Cb_temp := signed(Cb(i)) * signed(TC(i));
                Cr_temp := signed(Cr(i)) * signed(TC(i));

                -- Add rounding
                round_Y := Y_temp(47 downto 16) + rounding_factor;
                round_Cb := Cb_temp(47 downto 16) + rounding_factor;
                round_Cr := Cr_temp(47 downto 16) + rounding_factor;

                -- Truncate the fractional bits
                round_Y(15 downto 0) := (others => '0');
                round_Cb(15 downto 0) := (others => '0');
                round_Cr(15 downto 0) := (others => '0');

                -- Assign output
                Y_out(i) <= std_logic_vector(round_Y(31 downto 16));
                Cb_out(i) <= std_logic_vector(round_Cb(31 downto 16));
                Cr_out(i) <= std_logic_vector(round_Cr(31 downto 16));
              
                if i = 63 then
		   i <= 0;
                else 
                   i <= i + 1;
                end if;
            end if;
        end process;
end Behavioral;
