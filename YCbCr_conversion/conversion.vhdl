library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use ieee.std_logic_unsigned.all;

entity conversion is 
    port(
        clk : std_logic;
        input_R : in std_logic_vector(7 downto 0);
        input_G : in std_logic_vector(7 downto 0);   
        input_B : in std_logic_vector(7 downto 0);
        output_Y: out std_logic_vector(15 downto 0);
        output_Cb: out std_logic_vector(15 downto 0);
        output_Cr: out std_logic_vector(15 downto 0)
    );
end conversion;

architecture conversion_arch of conversion is 
    constant n299 : integer := 77; --0.299*256
    constant n587 : integer := 150; --0.587*256
    constant n144 : integer := 29; --0.114*256
    
    constant n1687 : integer := 43; --0.1687*256
    constant n3313 : integer := 85; --0.3313*256
    constant n5 : integer := 128; --0.5*256
    
    constant n4187 : integer := 107; --0.4187*256
    constant n0813 : integer := 21; --0.0813*256
    
    constant n128 : integer := 32768; --128*256
    
    signal Y : integer;
    signal Cr : integer;
    signal Cb : integer;
    
begin
    process(input_R,input_G,input_B,clk)
    begin
    Y <= (conv_integer(input_R)*n299 + conv_integer(input_G)*n587 + conv_integer(input_B)*n144);
    Cb <= (n128 + conv_integer(input_B)*n5 - conv_integer(input_R)*n1687 - conv_integer(input_G)*n3313);
    Cr <= (n128 + conv_integer(input_R)*n5 - conv_integer(input_G)*n4187 - conv_integer(input_B)*n0813);
	
    output_Y <= std_logic_vector(to_unsigned(Y,16));
    output_Cb <= std_logic_vector(to_unsigned(Cb,16));
    output_Cr <= std_logic_vector(to_unsigned(Cr,16));
    end process;
end conversion_arch;




