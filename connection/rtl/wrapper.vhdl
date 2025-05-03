library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use ieee.std_logic_unsigned.all;
use work.FixedPoint_Types.all;

entity conversion is 
    port (
        clk : in std_logic;
        rst_n : in std_logic;
        R : in std_logic_vector(511 downto 0);
        G : in std_logic_vector(511 downto 0);
        B : in std_logic_vector(511 downto 0);
        finished : out std_logic
    );
end conversion;

architecture conversion_arch of conversion is
    
    component conversion is
        generic (
            scale : integer := 8;
            fixed_point_length : integer := 16;
            input_width : integer := 8
        );
        port (
            clk : in std_logic;--THIS WILL PROBABLY NEED A START ASWELL
            input_R : in std_logic_vector(input_width - 1 downto 0);
            input_G : in std_logic_vector(input_width - 1 downto 0);
            input_B : in std_logic_vector(input_width - 1 downto 0);
            output_Y  : out std_logic_vector(fixed_point_length - 1 downto 0);
            output_Cb : out std_logic_vector(fixed_point_length - 1 downto 0);
            output_Cr : out std_logic_vector(fixed_point_length - 1 downto 0);
            done : out std_logic
        );
    end component conversion;

    component dct8x8_chen_2d is
        generic(
            IN_W : integer = 32;
            FRAC : integer = 8
        );
        port (
            clk : in std_logic;
            rst_n : in std_logic;
            in_valid : in std_logic;
            in_ready : out std_logic;
            in_data : in std_logic_vector(64*IN_W-1:0);
            out_valid : out std_logic;
            out_ready : in std_logic;
            out_data : out std_logic_vector(64*IN_W-1:0)
        );
    end component dct8x8_chen_2d;

    component quantization is 
        port(
            clk : in std_logic;
            Y : in fixed_array;
            Cb : in fixed_array;
            Cr : in fixed_array;
            Y_out : in fixed_array_16;
            Cb_out : in fixed_array_16;
            Cr_out : in fixed_array_16
        );
    end component quantization;

    type t_State is (idle,RGBtoYCbCr,dct,quant);
    signal currentState : t_State := idle;

    signal input_R : std_logic_vector(7 downto 0);
    signal input_G : std_logic_vector(7 downto 0);
    signal input_B : std_logic_vector(7 downto 0);
    signal output_Y : std_logic_vector(15 downto 0);
    signal output_Cb : std_logic_vector(15 downto 0);
    signal output_Cr : std_logic_vector(15 downto 0);
    signal convertDone : std_logic;

    signal Y : std_logic_vector(1023 downto 0);
    signal Cb : std_logic_vector(1023 downto 0);
    signal Cr : std_logic_vector(1023 downto 0);
    signal in_valid_dct : std_logic;
    signal in_ready_dct : std_logic;
    signal out_valid_dct: std_logic;
    signal out_ready_dct : std_logic;
    signal in_data_dct : std_logic_vector(1023 downto 0);
    signal out_data_dct : std_logic_vector(1023 downto 0);

    signal Y_array : fixed_array;
    signal Cb_array : fixed_array;
    signal Cr_array : fixed_array;
    signal Y_array_out : fixed_array_16;
    signal Cb_array_out : fixed_array_16;
    signal Cr_array_out : fixed_array_16;
    begin

        comp_conversion : component conversion
            generic map(scale = 8,fixed_point_length = 16,input_width = 8 );
            port map(
                clk => clk,
                input_R => input_R,
                input_G => input_G,
                input_B => input_B,
                output_Y => output_Y,
                output_Cb => output_Cb,
                output_Cr => output_Cr,
                done => convertDone
            );

        comp_dct : component dct8x8_chen_2d 
            generic map(IN_W = 16,FRAC = 8);
            port map(
                clk => clk,
                rst_n => rst_n,
                in_valid => in_valid_dct,
                in_ready => in_ready_dct,
                in_data => in_data_dct,
                out_valid => out_valid_dct,
                out_ready => out_ready_dct,
                out_data => out_data_dct
            );

        comp_quant : component quantization
            port map(
                clk => clk,
                Y => Y_array,
                Cb => Cb_array,
                Cr => Cr_array,
                Y_out => Y_array_out,
                Cb_out => Cb_array_out,
                Cr_out => Cr_array_out
            );

        proc : process(clk)
            variable index : integer := 0;
            type dct_State is (Y_state,Cb_state,Cr_state);
            variable dct_state : dct_State := Y;
        begin
            if rising_edge(clk) then
                case currentState is =>     
                    when idle =>
                        index := 0;
                        dct_state := Y;

                    when RGBtoTCbCr => 
                        input_R <= R(7*(index+1) downto 7*index);
                        input_G <= G(7*(index+1) downto 7*index);
                        input_B <= B(7*(index+1) downto 7*index);
                        if convertDone = '1' then
                            Y(15*(index+1) downto 15*index) <= output_Y;
                            Cb(15*(index+1) downto 15*index) <= output_Cb;
                            Cr(15*(index+1) downto 15*index) <= output_Cr;
                            index := index + 1;
                        end if;
                        if index = 64 then
                            index := 0;
                            currentState <= dct;
                        end if;

                    when dct => 
                        case dct_state is =>
                            when Y_state =>
                                if in_ready_dct = '1' then       
                                    in_data_dct <= Y;
                                    in_valid_dct <= '1';
                                    out_ready_dct <= '1';
                                end if;

                                if out_valid_dct = '1' then
                                    Y <= data_out_dct;
                                    in_valid_dct <= '0';
                                    out_ready_dct <= '0';
                                    dct_state <= Cb_state;
                                end if;

                            when Cb_state =>
                                if in_ready_dct = '1' then       
                                    in_data_dct <= Cb;
                                    in_valid_dct <= '1';
                                    out_ready_dct <= '1';
                                end if;

                                if out_valid_dct = '1' then
                                    Cb <= data_out_dct;
                                    in_valid_dct <= '0';
                                    out_ready_dct <= '0';
                                    dct_state <= Cr_state;
                                end if;

                            when Cr_state =>
                                if in_ready_dct = '1' then       
                                    in_data_dct <= Cr;
                                    in_valid_dct <= '1';
                                    out_ready_dct <= '1';
                                end if;

                                if out_valid_dct = '1' then
                                    Cr <= data_out_dct;
                                    in_valid_dct <= '0';
                                    out_ready_dct <= '0';
                                    currentState <= quant;
                                end if;

                        end case;

                    when quant =>
                       Y_array(i) <= Y(15*(index+1) downto 15*index);
                       Cb_array(i) <= Cb(15*(index+1) downto 15*index);
                       Cr_array(i) <= Cr(15*(index+1) downto 15*index);
                       index := index + 1;
                        Y(15*(index+1) downto 15*index) <= Y_array_out(i);
                        Cb(15*(index+1) downto 15*index) <= Cb_array_out(i);
                        Cr(15*(index+1) downto 15*index) <= Cr_array_out(i);
                    when others => 
                end case;
            end if;
        end process proc;
end architecture;