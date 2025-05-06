library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use ieee.std_logic_unsigned.all;
use work.FixedPoint_Types.all;

entity wrapper is 
    port (
        clk : in std_logic;
        rst_n : in std_logic;
        start : in std_logic;
        R : in std_logic_vector(511 downto 0);
        G : in std_logic_vector(511 downto 0);
        B : in std_logic_vector(511 downto 0);
        Y_out : out std_logic_vector(1023 downto 0);
        finished : out std_logic
    );
end wrapper;

architecture wrapper_arch of wrapper is
    
    component conversion is
        generic (
            scale : integer := 8;
            fixed_point_length : integer := 16;
            input_width : integer := 8
        );
        port (
            clk : in std_logic;
            start : in std_logic;
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
            IN_W : integer := 32;
            FRAC : integer := 8
        );
        port (
            clk : in std_logic;
            rst_n : in std_logic;
            in_valid : in std_logic;
            in_ready : out std_logic;
            in_data : in std_logic_vector(64*IN_W-1 downto 0);
            out_valid : out std_logic;
            out_ready : in std_logic;
            out_data : out std_logic_vector(64*IN_W-1 downto 0)
        );
    end component dct8x8_chen_2d;

    component quantization is 
        port(
            clk : in std_logic;
            Y : in fixed_array;
            Cb : in fixed_array;
            Cr : in fixed_array;
            Y_out : out fixed_array_16;
            Cb_out : out fixed_array_16;
            Cr_out : out fixed_array_16
        );
    end component quantization;

    type t_State is (idle,RGBtoYCbCr,dct,quant_load,quant_read,done);
    signal currentState : t_State := idle;

    type dct_states is (Y_state_send,Y_state_middle,Y_state_wait,Cb_state_send,Cb_state_wait,Cr_state_send,Cr_state_wait);
    signal dct_state : dct_states := Y_state_send;

    signal convertStart : std_logic := '0';
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
    signal in_valid_dct : std_logic := '0';
    signal in_ready_dct : std_logic;
    signal out_valid_dct: std_logic;
    signal out_ready_dct : std_logic := '0';
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
            generic map(scale => 8, fixed_point_length => 16, input_width => 8 )
            port map(
                clk => clk,
                start => convertStart,
                input_R => input_R,
                input_G => input_G,
                input_B => input_B,
                output_Y => output_Y,
                output_Cb => output_Cb,
                output_Cr => output_Cr,
                done => convertDone
            );

        comp_dct : component dct8x8_chen_2d 
            generic map(IN_W => 16, FRAC => 8)
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
            variable state : integer := 0;
        begin
            if rising_edge(clk) then
                case currentState is    
                    when idle =>
                        index := 0;
                        dct_state <= Y_state_send;
                        finished <= '0';
                        state := 0;
                        if start = '1' then
                            currentState <= RGBtoYCbCr;
                        end if;

                    when RGBtoYCbCr => 
                        if state = 0 then
                            input_R <= R(8*(index+1)-1 downto 8*index);
                            input_G <= G(8*(index+1)-1 downto 8*index);
                            input_B <= B(8*(index+1)-1 downto 8*index);
                            convertStart <= '1';
                            state := 1;
                        elsif state = 1 then
                            convertStart <= '0';
                            if convertDone = '1' then
                                Y(16*(index+1)-1 downto 16*(index)) <= output_Y;
                                Cb(16*(index+1)-1 downto 16*(index)) <= output_Cb;
                                Cr(16*(index+1)-1 downto 16*(index)) <= output_Cr;     
                                index := index + 1;
                                state := 0;   
                            end if;
                            if index = 64 then
                                index := 0;
                                --currentState <= dct;
                                currentState <= done; --By chaning to go here directly this output is printed. 
                            end if;
                        end if;

                    when dct => 
                        case dct_state is
                            when Y_state_send =>
                                in_data_dct <= Y;
                                in_valid_dct <= '1';         
                                if in_ready_dct = '1' then       
                                   dct_state <= Y_state_wait;
                                end if;

                            when Y_state_wait =>
                                in_valid_dct <= '0';
                                out_ready_dct <= '1';
                                if out_valid_dct = '1' then
                                    out_ready_dct <= '0';
                                    Y <= out_data_dct;
                                    dct_state <= Cb_state_send;
                                end if;

                            when Cb_state_send =>
                                in_data_dct <= Cb;
                                in_valid_dct <= '1';
                                if in_ready_dct = '1' then       
                                   dct_state <= Cb_state_wait;
                                end if;

                            when Cb_state_wait =>
                                in_valid_dct <= '0';
                                out_ready_dct <= '1';
                                if out_valid_dct = '1' then
                                    out_ready_dct <= '0';
                                    Cb <= out_data_dct;
                                    dct_state <= Cr_state_send;
                                end if;

                            when Cr_state_send =>
                                in_data_dct <= Cr;
                                in_valid_dct <= '1';
                                if in_ready_dct = '1' then       
                                   dct_state <= Cr_state_wait;
                                end if;

                            when Cr_state_wait =>
                                in_valid_dct <= '0';
                                out_ready_dct <= '1';
                                if out_valid_dct = '1' then
                                    out_ready_dct <= '0';
                                    Cr <= out_data_dct;
                                    index := 0;
                                    --currentState <= done;
                                    currentState <= quant_load;
                                end if;
                                
                            when others =>
                                currentState <= idle;
                                
                        end case;

                    when quant_load =>
                       Y_array(index) <= "00000000" & Y(16*(index+1)-1 downto 16*index) & "00000000";
                       Cb_array(index) <= "00000000" & Cb(16*(index+1)-1 downto 16*index) & "00000000";
                       Cr_array(index) <= "00000000" & Cr(16*(index+1)-1 downto 16*index) & "00000000";
                       index := index + 1;
                       if index = 64 then
                        currentState <= quant_read;
                        index := 0;
                        end if;
                        
                    when quant_read =>
                        Y(16*(index+1)-1 downto 16*index) <= Y_array_out(index);
                        Cb(16*(index+1)-1 downto 16*index) <= Cb_array_out(index);
                        Cr(16*(index+1)-1 downto 16*index) <= Cr_array_out(index);
                        index := index + 1;
                       if index = 64 then
                        currentState <= done;
                        index := 0;
                        end if;
                        
                    when done =>
                        Y_out <= Y;
                        finished <= '1';
                        
                    when others => 
                end case;
            end if;
        end process proc;
end architecture;