library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use IEEE.MATH_REAL.ALL;

entity quantization is
    Port (
        clk    : in std_logic;
        start : in std_logic;
        Y   : in  std_logic_vector (2047 downto 0); 
        Cb  : in  std_logic_vector (2047 downto 0);
        Cr  : in  std_logic_vector (2047 downto 0);
        Y_out  : out std_logic_vector (1023 downto 0); 
        Cb_out : out std_logic_vector (1023 downto 0);
        Cr_out : out std_logic_vector (1023 downto 0);
        finished : out std_logic
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
    type t_State is (idle,quant,done);
    signal currentState : t_State := idle;

    constant rounding_factor : signed(15 downto 0) := x"0080"; -- 2^15 = 0.5
    signal i : integer range 0 to 63;
    constant ZEROS : std_logic_vector(7 downto 0) := "00000000";
begin
        process (clk)
            variable Y_temp : signed(63 downto 0);
            variable Cb_temp : signed(63 downto 0);
            variable Cr_temp : signed(63 downto 0);
            variable round_Y : signed(15 downto 0);
            variable round_Cb : signed(15 downto 0);
            variable round_Cr : signed(15 downto 0);
        begin
            if rising_edge(clk) then
                case currentState is
                    when idle =>
                        finished <= '0';
                        i <= 0;
                        if start = '1' then
                            currentState <= quant;
                        end if;

                    when quant =>
                        -- Fixed-point multiplication
                        Y_temp := signed(Y(32*(i+1)-1 downto (32*i))) * signed(ZEROS & TY(16*(i+1)-1 downto (16*i)) & ZEROS);
                        Cb_temp := signed(Cb(32*(i+1)-1 downto (32*i))) * signed(ZEROS & TC(16*(i+1)-1 downto (16*i)) & ZEROS);
                        Cr_temp := signed(Cr(32*(i+1)-1 downto (32*i))) * signed(ZEROS & TC(16*(i+1)-1 downto (16*i)) & ZEROS);

                        -- Add rounding
                        round_Y := Y_temp(39 downto 24) + rounding_factor;
                        round_Cb := Cb_temp(39 downto 24) + rounding_factor;
                        round_Cr := Cr_temp(39 downto 24) + rounding_factor;

                        -- Truncate the fractional bits
                        round_Y(7 downto 0) := (others => '0');
                        round_Cb(7 downto 0) := (others => '0');
                        round_Cr(7 downto 0) := (others => '0');

                        -- Assign output
                        Y_out(16*(i+1)-1 downto 16*i) <= std_logic_vector(round_Y(15 downto 0));
                        Cb_out(16*(i+1)-1 downto 16*i) <= std_logic_vector(round_Cb(15 downto 0));
                        Cr_out(16*(i+1)-1 downto 16*i) <= std_logic_vector(round_Cr(15 downto 0));
                    
                        if i = 63 then
                            i <= 0;
                            currentState <= done;
                        else 
                            i <= i + 1;
                        end if;
                    
                    when done =>
                        finished <= '1';
                        currentState <= idle;
                        
                    when others =>
                        currentState <= idle;

                end case;
            end if;
        end process;
end Behavioral;
