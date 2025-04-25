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
    
    signal R : std_logic_vector(15 downto 0);
    signal G : std_logic_vector(15 downto 0);
    signal B : std_logic_vector(15 downto 0);
    constant ZERO : std_logic_vector(7 downto 0) := (others => '0');

begin

    proc : process(clk)
        variable index : integer := 0;
        variable temp_Y_R : std_logic_vector(15 downto 0) := (others => '0');
        variable temp_Y_G : std_logic_vector(15 downto 0) := (others => '0');
        variable temp_Y_B : std_logic_vector(15 downto 0) := (others => '0');

        variable temp_Cb_R : std_logic_vector(15 downto 0) := (others => '0');
        variable temp_Cb_G : std_logic_vector(15 downto 0) := (others => '0');
        variable temp_Cb_B : std_logic_vector(15 downto 0) := (others => '0');

        variable temp_Cr_R : std_logic_vector(15 downto 0) := (others => '0');
        variable temp_Cr_G : std_logic_vector(15 downto 0) := (others => '0');
        variable temp_Cr_B : std_logic_vector(15 downto 0) := (others => '0');
    begin
        if rising_edge(clk) then 
            if index = 0 then
                R <= ZEROS & input_R;
                G <= ZEROS & input_G;
                B <= ZEROS & input_B;
            elsif index = 1 then
                temp_Y_R := shift_left(R,6) + shift_left(R,3) + shift_left(R,2);
                temp_Y_G := shift_left(G,7) + shift_left(G,4) + shift_left(G,2) + shift_left(G,1);
                temp_Y_B := shift_left(G,4) + shift_left(B,3) + shift_left(B,2) + shift_left(B,0); 
            elsif index = 2 then
                temp_Cb_R := shift_left(R,5) + shift_left(R,3) + shift_left(R,1) + shift_left(R,0); 
                temp_Cb_G := shift_left(G,6) + shift_left(R,4) + shift_left(R,2) + shift_left(R,0); 
                temp_Cb_B := shift_left(B,7);
            elsif index = 3 then
                temp_Cr_R := shift_left(R,7);
                temp_Cr_G := shift_left(G,6) + shift_left(G,5) + shift_left(G,3) + shift_left(G,1) + shift_left(G,0)
                temp_Cr_B := shift_left(B,4) + shift_left(B,2) + shift_left(B,0);
            elsif index = 4 then
                output_Y <= temp_Y_R + temp_Y_G + temp_Y_B;
                output_Cb <= temp_Cb_R + temp_Cb_G + temp_Cb_B;
                output_Cr <= temp_Cr_R + temp_Cr_G + temp_Cr_B;
            elsif index = 5 then 
                done <= '1'
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




