library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity conversionContainerNew is 
    port(
        clk : in std_logic;
        rst : in std_logic;
        conversion_done : out std_logic
    );
end conversionContainerNew;

architecture arch of conversionContainerNew is 
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

    component bram_wrapper is
        port(
        DI      : in std_logic_vector(31 downto 0); -- Data innput Bus
        ADDR    : in std_logic_vector(8 downto 0); -- ADDRESS
        WE      : in std_logic_vector(3 downto 0 ); -- Write Enable
        RST     : in std_logic;
        EN      : in std_logic;
        CLK     : in std_logic;
        DO      : out std_logic_vector(31 downto 0) -- Data Output Bus
    );
    end component bram_wrapper;

    type t_State is (setAdress,wait_read,Load,Store_Y,Store_Cb,Store_Cr);
    signal State : t_State := setAdress;
    
    signal input_R : std_logic_vector(7 downto 0);
    signal input_G : std_logic_vector(7 downto 0);   
    signal input_B : std_logic_vector(7 downto 0);
    signal output_Y: std_logic_vector(31 downto 0);
    signal output_Cb: std_logic_vector(31 downto 0);
    signal output_Cr: std_logic_vector(31 downto 0);    

    signal DO : std_logic_vector(31 downto 0);
    signal  DI      : std_logic_vector(31 downto 0); -- Data innput Bus
    signal ADDR    : std_logic_vector(8 downto 0); -- ADDRESS
    signal WE      : std_logic_vector(3 downto 0 ); -- Write Enable
    signal EN      : std_logic;
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

    bram: bram_wrapper
        port map(
            DI => DI,
            ADDR => ADDR,
            WE => WE,
            RST => '0',
            EN => EN,
            CLK => clk,
            DO => DO
        );
        
        
    proc : process (clk)
       variable read_address : integer := 0;
       variable write_address : integer := 144;
    begin
        if rising_edge(clk) then
            case State is 
                when setAdress =>
                    WE <= (others => '0');
                    ADDR <= std_logic_vector(to_unsigned(read_address,ADDR'length));
                    EN <= '1';
                    read_address := read_address + 1;
                    State <= wait_read;
                    if read_address = 65 then
                        conversion_done <= '1';
                    end if;
                    
                when wait_read =>
                    State <= Load;
                    
                when Load =>
                    EN <= '0';
                    input_R <= DO(23 downto 16);
                    input_G <= DO(31 downto 24);
                    input_B <= DO(7 downto 0);
                    State <= Store_Y;
                    
                 when Store_Y =>
                    EN <= '1';
                    ADDR <= std_logic_vector(to_unsigned(write_address,ADDR'length));
                    WE <= (others => '1');
                    DI <= output_Y;
                    write_address := write_address + 1;
                    State <= Store_Cb;
                    
                 when Store_Cb =>
                    ADDR <= std_logic_vector(to_unsigned(write_address,ADDR'length));
                    DI <= output_Cb;
                    write_address := write_address + 1;
                    State <= Store_Cr;
                    
                  when Store_Cr =>
                    ADDR <= std_logic_vector(to_unsigned(write_address,ADDR'length));
                    DI <= output_Cr;
                    write_address := write_address + 1;
                    State <= setAdress;
                    
                when others =>
                    write_address := 0;
                                                      
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


