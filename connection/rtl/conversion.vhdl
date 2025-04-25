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
    
    component fixed_multiplier_16 is
        port(   
            a        : in  std_logic_vector(15 downto 0);
            b        : in  std_logic_vector(15 downto 0);
            mul_res  : out std_logic_vector(15 downto 0)
        );
    end component fixed_multiplier_16;

    constant n299 : std_logic_vector := std_logic_vector(to_signed(integer(0.299 * 2**scale),fixed_point_length));
    constant n587 : std_logic_vector := std_logic_vector(to_signed(integer(0.587 * 2**scale),fixed_point_length)); 
    constant n144 : std_logic_vector := std_logic_vector(to_signed(integer(0.114 * 2**scale),fixed_point_length)); 
    
    constant n1687 : std_logic_vector := std_logic_vector(to_signed(integer(0.1687 * 2**scale),fixed_point_length)); --0.1687*256
    constant n3313 : std_logic_vector := std_logic_vector(to_signed(integer(0.3313 * 2**scale),fixed_point_length)); --0.3313*256
    constant n5 : std_logic_vector := std_logic_vector(to_signed(integer(0.5 * 2**scale),fixed_point_length)); --0.5*256
    
    constant n4187 : std_logic_vector := std_logic_vector(to_signed(integer(0.4187 * 2**scale),fixed_point_length)); --0.4187*256
    constant n0813 : std_logic_vector := std_logic_vector(to_signed(integer(0.0813 * 2**scale),fixed_point_length)); --0.0813*256
    
    constant n128 : std_logic_vector := std_logic_vector(to_signed(128 * 2**scale,fixed_point_length)); --128*256
    
    signal Y : integer;
    signal Cr : integer;
    signal Cb : integer;

    signal R : std_logic_vector(15 downto 0);
    signal R_constant : std_logic_vector(15 downto 0);
    signal R_out : std_logic_vector(15 downto 0);

    signal G : std_logic_vector(15 downto 0);
    signal G_constant : std_logic_vector(15 downto 0);
    signal G_out : std_logic_vector(15 downto 0);

    signal B : std_logic_vector(15 downto 0);
    signal B_constant : std_logic_vector(15 downto 0);
    signal B_out : std_logic_vector(15 downto 0);

    constant ZERO : std_logic_vector(7 downto 0) := (others => '0');
begin

    R_multi : component fixed_multiplier_16
        port map(
            a => ZERO & input_R,
            b => R_constant,
            mul_res => R_out
        );
     
    G_multi : component fixed_multiplier_16
        port map(
            a => ZERO & input_G,
            b => G_constant,
            mul_res => G_out
        );    
    
    B_multi : component fixed_multiplier_16
        port map(
            a => ZERO & input_B,
            b => B_constant,
            mul_res => B_out
        );

    proc : process(clk)
        variable index : integer := 0;
        variable temp_Y : std_logic_vector(15 downto 0) := (others => '0');
       -- variable temp_Y_1 : std_logic_vector(15 downto 0) := (others => '0');
        --variable temp_Y_2 : std_logic_vector(15 downto 0) := (others => '0');
        --variable temp_Y_3 : std_logic_vector(15 downto 0) := (others => '0');
        variable temp_Cb : std_logic_vector(15 downto 0):= (others => '0');
        variable temp_Cr : std_logic_vector(15 downto 0):= (others => '0');

    begin
        if rising_edge(clk) then 
            if index = 0 then
                done <= '0';
                           G_constant <= n587;
                B_constant <= n5;
                R_constant <= n5;
                
            elsif index = 1 then
            temp_Y := G_out;
                temp_Cb := B_out;
                temp_Cr := R_out;
                R_constant <= n299;
                G_constant <= n3313;
                B_constant <= n0813;
            elsif index = 2 then
                temp_Y := temp_Y + R_out;
                temp_Cb := temp_Cb - G_out;
                temp_Cr := temp_Cr - B_out;
                B_constant <= n144;
                R_constant <= n1687;
                G_constant <= n4187;
            elsif index = 3 then
                temp_Y := temp_Y + B_out;
                temp_Cb := temp_Cb - R_out;
                temp_Cr := temp_Cr - G_out;
            elsif index = 4 then 
                output_Y <= temp_Y - n128;
                output_Cb <= temp_Cb;
                output_Cr <= temp_Cr;            
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




