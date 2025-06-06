library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use IEEE.MATH_REAL.ALL;

entity quantization is
    Port (
        clk    : in std_logic;
        Y   : in  std_logic_vector (1023 downto 0); 
        Cb  : in  std_logic_vector (1023 downto 0);
        Cr  : in  std_logic_vector (1023 downto 0);
        Y_out  : out std_logic_vector (1023 downto 0); 
        Cb_out : out std_logic_vector (1023 downto 0);
        Cr_out : out std_logic_vector (1023 downto 0)
    );
end quantization;

architecture Behavioral of quantization is
    -- Quantization inverted tables in Q8.8 format
    constant TY : std_logic_vector (1023 downto 0) := 
    "0000000000010000" & "0000000000010111" & "0000000000011010" & "0000000000010000" &
    "0000000000001011" & "0000000000000110" & "0000000000000101" & "0000000000000100" &
    "0000000000010101" & "0000000000010101" & "0000000000010010" & "0000000000001101" &
    "0000000000001001" & "0000000000000100" & "0000000000000100" & "0000000000000100" &
    "0000000000010010" & "0000000000010100" & "0000000000010000" & "0000000000001011" &
    "0000000000000110" & "0000000000000100" & "0000000000000011" & "0000000000000100" &
    "0000000000010010" & "0000000000001111" & "0000000000001011" & "0000000000001000" &
    "0000000000000101" & "0000000000000011" & "0000000000000011" & "0000000000000100" &
    "0000000000001110" & "0000000000001011" & "0000000000000110" & "0000000000000100" &
    "0000000000000011" & "0000000000000010" & "0000000000000010" & "0000000000000011" &
    "0000000000001011" & "0000000000000111" & "0000000000000100" & "0000000000000100" &
    "0000000000000011" & "0000000000000010" & "0000000000000010" & "0000000000000010" &
    "0000000000000101" & "0000000000000100" & "0000000000000011" & "0000000000000011" &
    "0000000000000010" & "0000000000000010" & "0000000000000010" & "0000000000000010" &
    "0000000000000011" & "0000000000000010" & "0000000000000010" & "0000000000000010" &
    "0000000000000010" & "0000000000000010" & "0000000000000010" & "0000000000000010";
    -- luminance table

    constant TC : std_logic_vector (1023 downto 0) := 
    "0000000000001111" & "0000000000001110" & "0000000000001011" & "0000000000000101" &
    "0000000000000011" & "0000000000000011" & "0000000000000011" & "0000000000000011" &
    "0000000000001110" & "0000000000001100" & "0000000000001001" & "0000000000000100" &
    "0000000000000011" & "0000000000000011" & "0000000000000011" & "0000000000000011" &
    "0000000000001011" & "0000000000001001" & "0000000000000100" & "0000000000000011" &
    "0000000000000011" & "0000000000000011" & "0000000000000011" & "0000000000000011" &
    "0000000000000101" & "0000000000000100" & "0000000000000011" & "0000000000000011" &
    "0000000000000011" & "0000000000000011" & "0000000000000011" & "0000000000000011" &
    "0000000000000011" & "0000000000000011" & "0000000000000011" & "0000000000000011" &
    "0000000000000011" & "0000000000000011" & "0000000000000011" & "0000000000000011" &
    "0000000000000011" & "0000000000000011" & "0000000000000011" & "0000000000000011" &
    "0000000000000011" & "0000000000000011" & "0000000000000011" & "0000000000000011" &
    "0000000000000011" & "0000000000000011" & "0000000000000011" & "0000000000000011" &
    "0000000000000011" & "0000000000000011" & "0000000000000011" & "0000000000000011" &
    "0000000000000011" & "0000000000000011" & "0000000000000011" & "0000000000000011" &
    "0000000000000011" & "0000000000000011" & "0000000000000011" & "0000000000000011";
     -- chrominance table
           constant rounding_factor : signed(15 downto 0) := x"0080"; -- 2^15 = 0.5
           signal i : integer range 0 to 63;
begin
        process (clk)
            variable Y_temp : signed(31 downto 0);
            variable Cb_temp : signed(31 downto 0);
            variable Cr_temp : signed(31 downto 0);
            variable round_Y : signed(15 downto 0);
            variable round_Cb : signed(15 downto 0);
            variable round_Cr : signed(15 downto 0);
        begin
            if rising_edge(clk) then
                -- Fixed-point multiplication
                Y_temp := signed(Y(16*(i+1)-1 downto 16*i)) * signed(TY(16*(i+1)-1 downto 16*i));
                Cb_temp := signed(Cb(16*(i+1)-1 downto 16*i)) * signed(TC(16*(i+1)-1 downto 16*i));
                Cr_temp := signed(Cr(16*(i+1)-1 downto 16*i)) * signed(TC(16*(i+1)-1 downto 16*i));

                -- Add rounding
                round_Y := Y_temp(23 downto 8) + rounding_factor;
                round_Cb := Cb_temp(23 downto 8) + rounding_factor;
                round_Cr := Cr_temp(23 downto 8) + rounding_factor;

                -- Truncate the fractional bits
                round_Y(7 downto 0) := (others => '0');
                round_Cb(7 downto 0) := (others => '0');
                round_Cr(7 downto 0) := (others => '0');

                -- Assign output
                Y_out(16*(i+1)-1 downto 16*i) <= std_logic_vector(round_Y(15 downto 0));
                Cb_out(16*(i+1)-1 downto 16*i) <= std_logic_vector(round_Cb(15 downto 0));
                Cr_out(16*(i+1)-1 downto 16*i) <= std_logic_vector(round_Cr(15 downto 0));
              
                if i = 63 then
		   i <= 0;
                else 
                   i <= i + 1;
                end if;
            end if;
        end process;
end Behavioral;
