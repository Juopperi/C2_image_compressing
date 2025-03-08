library ieee;
use ieee.std_logic_1164.all;

entity conversion_tb is
end entity conversion_tb;

architecture arch of conversion_tb is 
    component conversion is
        port(   
            input_R : in integer;
            input_G : in integer;   
            input_B : in integer;
            output_Y: out std_logic_vector(16 downto 0);
            output_Cr: out std_logic_vector(16 downto 0);
            output_Cb: out std_logic_vector(16 downto 0)
        );
    end component conversion;
        
        signal input_R : integer;
        signal input_G : integer;
        signal input_B : integer;
        signal output_Y : std_logic_vector(16 downto 0);
        signal output_Cr : std_logic_vector(16 downto 0);
        signal output_Cb : std_logic_vector(16 downto 0);

    begin
        
        test: component conversion
            port map(
                input_R => input_R,
                input_G => input_G,
                input_B => input_B,
                output_Y => output_Y,
                output_Cr => output_Cr,
                output_Cb => output_Cb
            );

        proc : process
        begin
            input_R <= 233;
            input_G <= 189;
            input_B <= 188;
            wait for 10 ns;

            input_R <= 254;
            input_G <= 219;
            input_B <= 200;
            wait for 10 ns;

            input_R <= 111;
            input_G <= 91;
            input_B <= 40;
            wait for 10 ns;

            input_R <= 147;
            input_G <= 135;
            input_B <= 87;
            wait for 10 ns;

            input_R <= 135;
            input_G <= 121;
            input_B <= 118;
            wait for 10 ns;
        end process proc;

end architecture arch;