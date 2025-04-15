library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use ieee.std_logic_unsigned.all;

entity conversion is 
    generic (
        scale : integer := 16;
        fixed_point_length : integer := 32;
        input_width : integer := 8  -- 允许范围：8 ~ 12
    );
    port (
        clk : std_logic;
        input_R : in std_logic_vector(input_width - 1 downto 0);
        input_G : in std_logic_vector(input_width - 1 downto 0);
        input_B : in std_logic_vector(input_width - 1 downto 0);
        output_Y  : out std_logic_vector(fixed_point_length - 1 downto 0);
        output_Cb : out std_logic_vector(fixed_point_length - 1 downto 0);
        output_Cr : out std_logic_vector(fixed_point_length - 1 downto 0)
    );
end conversion;

architecture conversion_arch of conversion is
    constant n299 : integer := integer(0.299 * 2**scale);
    constant n587 : integer := integer(0.587 * 2**scale); 
    constant n144 : integer := integer(0.114 * 2**scale); 
    
    constant n1687 : integer := integer(0.1687 * 2**scale); --0.1687*256
    constant n3313 : integer := integer(0.3313 * 2**scale); --0.3313*256
    constant n5 : integer := integer(0.5 * 2**scale); --0.5*256
    
    constant n4187 : integer := integer(0.4187 * 2**scale); --0.4187*256
    constant n0813 : integer := integer(0.0813 * 2**scale); --0.0813*256
    
    constant n128 : integer := 128 * 2**scale; --128*256
    
    signal Y : integer;
    signal Cr : integer;
    signal Cb : integer;
    
begin
    process(input_R,input_G,input_B,clk)
    begin
    -- Y <= (conv_integer(input_R)*n299 + conv_integer(input_G)*n587 + conv_integer(input_B)*n144 - n128);
    -- Cb <= (conv_integer(input_B)*n5 - conv_integer(input_R)*n1687 - conv_integer(input_G)*n3313);
    -- Cr <= (conv_integer(input_R)*n5 - conv_integer(input_G)*n4187 - conv_integer(input_B)*n0813);

    
    Y <= (conv_integer(input_R)*n299 + conv_integer(input_G)*n587 + conv_integer(input_B)*n144 );
    Cb <= (conv_integer(input_B)*n5 - conv_integer(input_R)*n1687 - conv_integer(input_G)*n3313 + n128);
    Cr <= (conv_integer(input_R)*n5 - conv_integer(input_G)*n4187 - conv_integer(input_B)*n0813 + n128);
	
    output_Y <= std_logic_vector(to_unsigned(Y,fixed_point_length));
    output_Cb <= std_logic_vector(to_unsigned(Cb,fixed_point_length));
    output_Cr <= std_logic_vector(to_unsigned(Cr,fixed_point_length));

    -- output_Y  <= std_logic_vector(to_signed(Y, fixed_point_length));
    -- output_Cb <= std_logic_vector(to_signed(Cb, fixed_point_length));
    -- output_Cr <= std_logic_vector(to_signed(Cr, fixed_point_length));

    end process;
end conversion_arch;




