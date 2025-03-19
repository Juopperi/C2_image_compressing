library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity conversion_tb is
end entity conversion_tb;

architecture arch of conversion_tb is 
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
        
        signal input_R : std_logic_vector(7 downto 0);
        signal input_G : std_logic_vector(7 downto 0);
        signal input_B : std_logic_vector(7 downto 0);
        signal output_Y : std_logic_vector(15 downto 0);
        signal output_Cr : std_logic_vector(15 downto 0);
        signal output_Cb : std_logic_vector(15 downto 0);

    begin
        
        test: component conversion
            port map(
                input_R => input_R,
                input_G => input_G,
                input_B => input_B,
                output_Y => output_Y,
                output_Cb => output_Cb,
                output_Cr => output_Cr
            );

        proc : process
        begin
            input_R <= std_logic_vector(to_unsigned(233,input_R'length));
            input_G <= std_logic_vector(to_unsigned(189,input_R'length));
            input_B <= std_logic_vector(to_unsigned(188,input_R'length));
            wait for 10 ns;

            input_R <= std_logic_vector(to_unsigned(254,input_R'length)); 
            input_G <= std_logic_vector(to_unsigned(219,input_R'length));
            input_B <= std_logic_vector(to_unsigned(200,input_R'length));
            wait for 10 ns;

            input_R <= std_logic_vector(to_unsigned(111,input_R'length));
            input_G <= std_logic_vector(to_unsigned(91,input_R'length));
            input_B <= std_logic_vector(to_unsigned(40,input_R'length));
            wait for 10 ns;

            input_R <= std_logic_vector(to_unsigned(147,input_R'length));
            input_G <= std_logic_vector(to_unsigned(135,input_R'length));
            input_B <= std_logic_vector(to_unsigned(87,input_R'length));
            wait for 10 ns;

            input_R <= std_logic_vector(to_unsigned(135,input_R'length));
            input_G <= std_logic_vector(to_unsigned(121,input_R'length));
            input_B <= std_logic_vector(to_unsigned(118,input_R'length));
            wait for 10 ns;
        end process proc;

end architecture arch;