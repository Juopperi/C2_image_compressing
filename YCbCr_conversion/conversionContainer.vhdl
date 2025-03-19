library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

package my_pkg is 
    type input_t is array (0 to 7,0 to 7) of std_logic_vector(7 downto 0);
    type output_t is array (0 to 7,0 to 7) of std_logic_vector(15 downto 0);
end package my_pkg;

library ieee;
use ieee.std_logic_1164.all;
library workContainer;
use workContainer.my_pkg.all;

entity conversionContainer is 
    port(
        clk : in std_logic;
        input_array_R : in input_t;
        input_array_G : in input_t;
        input_array_B : in input_t;
        output_array_Y: out output_t;
        output_array_Cb: out output_t;
        output_array_Cr: out output_t;
        finished_flag: out std_logic
   
    );
end conversionContainer;

architecture arch of conversionContainer is 
    component conversion is
        port(   
            input_R : in std_logic_vector(7 downto 0);
            input_G : in std_logic_vector(7 downto 0);   
            input_B : in std_logic_vector(7 downto 0);
            output_Y: out std_logic_vector(15 downto 0);
            output_Cb: out std_logic_vector(15 downto 0);
            output_Cr: out std_logic_vector(15 downto 0)
        );
    end component conversion;
begin
    
    gen_conversion1: for c in 0 to 7 generate
        gen_conversion2: for r in 0 to 7 generate
            test: component conversion
                port map(
                input_array_R(c,r),
                input_array_G(c,r),
                input_array_B(c,r),
                output_array_Y(c,r),
                output_array_Cb(c,r),
                output_array_Cr(c,r)
            );
        end generate;
    end generate;
    

end arch;




