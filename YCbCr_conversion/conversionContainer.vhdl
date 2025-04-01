library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

package my_pkg is 
    type input_t is array (0 to 7,0 to 7) of std_logic_vector(7 downto 0);
    type output_t is array (0 to 7,0 to 7) of std_logic_vector(15 downto 0);
end package my_pkg;

library ieee;
use ieee.std_logic_1164.all;
use work.my_pkg.all;

entity conversionContainer is 
    port(
        clk : in std_logic;
        input_array_R : in input_t;
        input_array_G : in input_t;
        input_array_B : in input_t;
        output_array_Y: out output_t;
        output_array_Cb: out output_t;
        output_array_Cr: out output_t   
    );
end conversionContainer;

architecture arch of conversionContainer is 
    component conversion is
        port(   
            clk : in std_logic;
            input_R : in std_logic_vector(7 downto 0);
            input_G : in std_logic_vector(7 downto 0);   
            input_B : in std_logic_vector(7 downto 0);
            output_Y: out std_logic_vector(15 downto 0);
            output_Cb: out std_logic_vector(15 downto 0);
            output_Cr: out std_logic_vector(15 downto 0)
        );
    end component conversion;

    component bram_wrapper is
        port(
        DI      : in std_logic_vector(31 downto 0); -- Data innput Bus
        ADDR    : in std_logic_vector(8 downto 0); -- ADDRESS
        WE      : in std_logic_vector(3 downto 0 ); -- Write Enable
        RST     : in std_logic;
        EN      : in std_logic;
        CLK     : in std_logic;
        REGCE   : out std_logic;
        DO      : out std_logic_vector(31 downto 0) -- Data Output Bus
    );
    end component bram_wrapper;

    type t_State is (Load,Read,Update,finished);
    signal State : t_State := Load;
    
    signal input_R : std_logic_vector(7 downto 0);
    signal input_G : std_logic_vector(7 downto 0);   
    signal input_B : std_logic_vector(7 downto 0);
    signal output_Y: std_logic_vector(15 downto 0);
    signal output_Cb: std_logic_vector(15 downto 0);
    signal output_Cr: std_logic_vector(15 downto 0);    

    signal DI : std_logic_vector(31 downto 0);
    signal ADDR : std_logic_vector(8 downto 0);
    signal WE : std_logic_vector(3 downto 0);
    signal EN : std_logic;
    signal REGCE : std_logic;
    signal DO : std_logic_vector(31 downto 0);
begin
        
    conv: conversion
        port map(
            clk => clk,
            input_R => input_R,
            input_G => input_G,
            input_B => input_B,
            output_Y => output_Y,
            output_Cb => output_Cb,
            output_Cr => output_Cr
        );

    bram: bram_wrapper
        port map(
            DI => DI,
            ADDR => ADDR,
            WE => WE,
            RST => open,
            EN => EN,
            CLK => clk,
            REGCE => REGCE,
            DO => DO
        );
        
        
    proc : process (clk)
        variable r : integer range 0 to 9 := 0;
        variable c : integer range 0 to 9 := 0;
    begin
        if rising_edge(clk) then
            case State is 
                when Load =>
                    input_R <= input_array_R(r,c);
                    input_G <= input_array_G(r,c);
                    input_B <= input_array_B(r,c);
                    State <= Read;
                when Read =>
                    output_array_Y(r,c) <= output_Y;      
                    output_array_Cb(r,c) <= output_Cb;
                    output_array_Cr(r,c) <= output_Cr;
                    State <= Update;
                when Update =>
                     c := c + 1;
                     if (c = 8) then
                        c := 0;
                        r := r + 1;
                     end if;
                     
                     if (r = 8) then 
                        State <= finished;
                     end if;
                    State <= Load; 
                when finished =>
                    c := 0;
                    r := 0;
                when others =>
                    c := 0;
                    r := 0;
               
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


