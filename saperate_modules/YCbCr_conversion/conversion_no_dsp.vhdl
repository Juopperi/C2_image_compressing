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
        clk : std_logic;
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
                R <= signed(input_R & ZERO);
                G <= signed(input_G & ZERO);
                B <= signed(input_B & ZERO);
            elsif index = 1 then
                temp_Y := (R srl 9) + (R srl 6) + (R srl 5) + (R srl 2); --0.299
                temp_Cb := B srl 1; -- 0.5
                 temp_Cr := R srl 1; -- 0.5                                 
            elsif index = 2 then
                temp_Y := temp_Y + (G srl 7) + (G srl 6) + (G srl 4) + (G srl 1); --0.587
               temp_Cb := temp_Cb - (G srl 10) - (G srl 9) - (G srl 6) - (G srl 4) - (G srl 2); --0.3313
                temp_Cr := temp_Cr - (G srl 7) - (G srl 5) - (G srl 3) - (G srl 2); -- 0.4187
            elsif index = 3 then
                temp_Y := temp_Y + (B srl 13) + (B srl 11) + (B srl 8) + (B srl 6) + (B srl 5)+ (B srl 4); --0.144
                 temp_Cb := temp_Cb  -(R srl 13) -(R srl 11)-(R srl 8) -(R srl 7) - (R srl 5) - (R srl 3) ;    -- 0.1687        
                temp_Cr := temp_Cr - (B srl 10) - (B srl 9) - (B srl 6) - (B srl 4); --0.0813
            elsif index = 4 then
                output_Y <= std_logic_vector(temp_Y) -"1000000000000000"; --128*2**8
                output_Cb <= std_logic_vector(temp_Cb);
                output_Cr <= std_logic_vector(temp_Cr);
            elsif index = 5 then 
                done <= '1';
            end if;
            index := index + 1;
            if index = 6 then
                index := 0;
             end if;
        end if;
    end process;
end architecture;


    --Y <= (conv_integer(input_R)*n299 + conv_integer(input_G)*n587 + conv_integer(input_B)*n144 - n128);
    --Cb <= (conv_integer(input_B)*n5 - conv_integer(input_R)*n1687 - conv_integer(input_G)*n3313);
    --Cr <= (conv_integer(input_R)*n5 - conv_integer(input_G)*n4187 - conv_integer(input_B)*n0813);
    --output_Y  <= std_logic_vector(to_signed(Y, fixed_point_length));
    --output_Cb <= std_logic_vector(to_signed(Cb, fixed_point_length));
    --output_Cr <= std_logic_vector(to_signed(Cr, fixed_point_length));

    
    -- Y <= (conv_integer(input_R)*n299 + conv_integer(input_G)*n587 + conv_integer(input_B)*n144 );
    -- Cb <= (conv_integer(input_B)*n5 - conv_integer(input_R)*n1687 - conv_integer(input_G)*n3313 + n128);
    -- Cr <= (conv_integer(input_R)*n5 - conv_integer(input_G)*n4187 - conv_integer(input_B)*n0813 + n128);
	
    -- output_Y <= std_logic_vector(to_unsigned(Y,fixed_point_length));
    -- output_Cb <= std_logic_vector(to_unsigned(Cb,fixed_point_length));
    -- output_Cr <= std_logic_vector(to_unsigned(Cr,fixed_point_length));




