library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity conversionContainer is 
    port(
        clk : in std_logic;
        rst : in std_logic;
        start : in std_logic;
        R : in std_logic_vector(64*8-1 downto 0);
        G : in std_logic_vector(64*8-1 downto 0);
        B : in std_logic_vector(64*8-1 downto 0);
        Y : out std_logic_vector(64*32-1 downto 0);
        Cb : out std_logic_vector(64*32-1 downto 0);
        Cr : out std_logic_vector(64*32-1 downto 0);
        conversion_done : out std_logic
    );
end conversionContainer;

architecture arch of conversionContainer is 
    component conversion is
        generic(
            scale : integer := 16;
            fixed_point_length : integer := 32
        );
        port(   
            clk : in std_logic;
            input_R : in std_logic_vector(7 downto 0);
            input_G : in std_logic_vector(7 downto 0);   
            input_B : in std_logic_vector(7 downto 0);
            output_Y: out std_logic_vector(fixed_point_length-1 downto 0);
            output_Cb: out std_logic_vector(fixed_point_length-1 downto 0);
            output_Cr: out std_logic_vector(fixed_point_length-1 downto 0)
        );
    end component conversion;
    
    type t_State is (idle,convers);
    signal State : t_State := idle;

    signal input_R : std_logic_vector(7 downto 0);
    signal input_G : std_logic_vector(7 downto 0);   
    signal input_B : std_logic_vector(7 downto 0);
    signal output_Y: std_logic_vector(31 downto 0);
    signal output_Cb: std_logic_vector(31 downto 0);
    signal output_Cr: std_logic_vector(31 downto 0);    

begin
        
    conv: conversion
        generic map(
        scale => 16,
        fixed_point_length => 32
        )
        port map(
            clk => clk,
            input_R => input_R,
            input_G => input_G,
            input_B => input_B,
            output_Y => output_Y,
            output_Cb => output_Cb,
            output_Cr => output_Cr
        );
        
    proc : process (clk)
       variable index : integer := 0;
    begin
        if rising_edge(clk) then
            case State is 
                when idle =>
                    index := 0;
                    if start = '1' then
                        State <= convers;
                    end if;

                when convers =>
                    input_R <= R((index+1)*8-1 downto index*8);
                    input_G <= G((index+1)*8-1 downto index*8);
                    input_B <= B((index+1)*8-1 downto index*8);
                    Y((index+1)*32-1 downto index*32) <= output_Y;
                    Cb((index+1)*32-1 downto index*32) <= output_Cb;
                    Cr((index+1)*32-1 downto index*32) <= output_Cr;
                    index := index + 1;
                    if index = 64 then 
                        conversion_done <= '1';
                        State <= idle;
                    end if;
            end case;
        
        end if;    
    end process;

end arch;

--    gen_conversion1: for c in 0 to 7 generate
--        gen_conversion2: for r in 0 to 7 generate
--            test: component conversion
--                port map(
--                input_array_R(c,r),
--                input_array_G(c,r),
--                input_array_B(c,r),
--                output_array_Y(c,r),
--                output_array_Cb(c,r),
--                output_array_Cr(c,r)
--            );
--        end generate;
--    end generate;


