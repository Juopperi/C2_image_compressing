library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity conversion is 
    port(
        input_R : in std_logic_vector(7 downto 0);
        input_G : in std_logic_vector(7 downto 0);   
        input_B : in std_logic_vector(7 downto 0);
        output_Y: out std_logic_vector(15 downto 0);
        output_Cb: out std_logic_vector(15 downto 0);
        output_Cr: out std_logic_vector(15 downto 0)
    );
end conversion;

architecture arch of conversion is 
    signal Y : real;
    signal Cr : real;
    signal Cb : real;

    function to_fixed (
        number : real;
        fractional_bit_length : natural )
    return integer is
    begin
        return integer(number*2.0**(fractional_bit_length));
    end function to_fixed;

begin
	Y <=              Real(to_integer(unsigned(input_R)))*0.299  + Real(to_integer(unsigned(input_G)))*0.587  + Real(to_integer(unsigned(input_B)))*0.114;
    Cb <= Real(128) - Real(to_integer(unsigned(input_R)))*0.1687 - Real(to_integer(unsigned(input_G)))*0.3313 + Real(to_integer(unsigned(input_B)))*0.5;
    Cr <= Real(128) + Real(to_integer(unsigned(input_R)))*0.5    - Real(to_integer(unsigned(input_G)))*0.4187 - Real(to_integer(unsigned(input_B)))*0.0813;
    

    output_Y <= std_logic_vector(to_unsigned(to_fixed(Y,5),output_Y'length));
    output_Cb <= std_logic_vector(to_unsigned(to_fixed(Cb,5),output_Cb'length));
    output_Cr <= std_logic_vector(to_unsigned(to_fixed(Cr,5),output_Cr'length));
end arch;




