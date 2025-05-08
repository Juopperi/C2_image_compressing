library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use ieee.std_logic_unsigned.all;

entity conversion is 
    generic (
        scale : integer := 8;
        fixed_point_length : integer := 16;
        input_width : integer := 8  -- 允许范围：8 ~ 12
    );
    port (
        clk : in std_logic;
        start : in std_logic;
        input_R : in std_logic_vector(input_width - 1 downto 0);
        input_G : in std_logic_vector(input_width - 1 downto 0);
        input_B : in std_logic_vector(input_width - 1 downto 0);
        output_Y  : out std_logic_vector(fixed_point_length - 1 downto 0);
        output_Cb : out std_logic_vector(fixed_point_length - 1 downto 0);
        output_Cr : out std_logic_vector(fixed_point_length - 1 downto 0);
        done : out std_logic
    );
end conversion;

architecture conversion_arch of conversion is
    constant ZERO : std_logic_vector(7 downto 0) := (others => '0');
    signal R : signed(15 downto 0);
    signal G : signed(15 downto 0);
    signal B : signed(15 downto 0);

begin

    proc : process(clk)
        variable index : integer := 0;
        variable temp_Y : signed(15 downto 0) := (others => '0');
        variable temp_Cb: signed(15 downto 0) := (others => '0');
        variable temp_Cr: signed(15 downto 0) := (others => '0');
 
    begin
        if rising_edge(clk) then
            if index = 0 then
                done <= '0';
                if start = '1' then
                    index := index + 1;
                end if;
                
            elsif index = 1 then 
                     R <= signed(input_R & ZERO);
                    G <= signed(input_G & ZERO);
                    B <= signed(input_B & ZERO);
                    index := index +1 ;
                    
            elsif index = 2 then
                temp_Y := (R srl 9) + (R srl 6) + (R srl 5) + (R srl 2); --0.299
                temp_Cb := B srl 1; -- 0.5
                temp_Cr := R srl 1; -- 0.5
                 index := index + 1;
                                 
            elsif index = 3 then
                temp_Y := temp_Y + (G srl 10) + (G srl 7) + (G srl 6) + (G srl 4) + (G srl 1); --0.587
               temp_Cb := temp_Cb - (G srl 10) - (G srl 9) - (G srl 6) - (G srl 4) - (G srl 2); --0.3313
                temp_Cr := temp_Cr - (G srl 8) - (G srl 7) - (G srl 5) - (G srl 3) - (G srl 2); -- 0.4187
                index := index + 1;

                
            elsif index = 4 then
                temp_Y := temp_Y + (B srl 8) + (B srl 6) + (B srl 5)+ (B srl 4); --0.114
                 temp_Cb := temp_Cb -(R srl 8) -(R srl 7) - (R srl 5) - (R srl 3) ;    -- 0.1687        
                temp_Cr := temp_Cr - (B srl 10) - (B srl 9) - (B srl 6) - (B srl 4); --0.0813
                 index := index + 1;

            elsif index = 5 then
                output_Y <= std_logic_vector(temp_Y) -"1000000000000000"; --128*2**8
                output_Cb <= std_logic_vector(temp_Cb);
                output_Cr <= std_logic_vector(temp_Cr);
                index := index + 1;

            elsif index = 6 then 
                done <= '1';
                 index := 0;
            end if;
            
        end if;
    end process;
end architecture;