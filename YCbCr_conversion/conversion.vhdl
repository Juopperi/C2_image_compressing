library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity conversion is 
    port(
        input_R : in integer;
        input_G : in integer;   
        input_B : in integer;
        output_Y: out std_logic_vector(16 downto 0);
        output_Cr: out std_logic_vector(16 downto 0);
        output_Cb: out std_logic_vector(16 downto 0)
    );
end conversion;

architecture arch of conversion is 
    SIGNAL Y : real;
    SIGNAL Cr : real;
    SIGNAL Cb : real;

    function to_fixed (
        number : real;
        fractional_bit_length : natural )
    return integer is
    begin
        return integer(number*2.0**(fractional_bit_length));
    end function to_fixed;

begin
	Y <=              Real(input_R)*0.299  + Real(input_G)*0.587  + Real(input_B)*0.114;
    Cr <= Real(128) - Real(input_R)*0.1687 - Real(input_G)*0.3313 + Real(input_B)*0.5;
    Cb <= Real(128) + 0.5*Real(input_R)    - 0.4187*Real(input_G) - 0.0813*Real(input_B);

    output_Y <= std_logic_vector(to_unsigned(to_fixed(Y,5),output_Y'length));
    output_Cr <= std_logic_vector(to_unsigned(to_fixed(Cr,5),output_Cr'length));
    output_Cb <= std_logic_vector(to_unsigned(to_fixed(Cb,5),output_Cb'length));
end arch;




