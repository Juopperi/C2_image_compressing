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
        --conversion_Y_out : out std_logic_vector(2047 downto 0); --Only for debugging
        --dct_Y_out : out std_logic_vector(2047 downto 0); --Only for debugging
        --quant_Y_out : out std_logic_vector(1023 downto 0); --Only for debugging
        zigzag_Y_out : out std_logic_vector(1023 downto 0); --Only for debugging
        zigzag_Cb_out : out std_logic_vector(1023 downto 0); --Only for debugging
        zigzag_Cr_out : out std_logic_vector(1023 downto 0); --Only for debugging
        stored_huffman : out std_logic_vector(300 downto 0); --Onlt for debugging
        fw_data : out std_logic_vector(31 downto 0);
        finished : out std_logic
    );
end wrapper;

architecture wrapper_arch of wrapper is
    
    component conversion is
        generic (
            scale : integer := 16;
            fixed_point_length : integer := 32;
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
            CONST_W : integer := 16
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
            start : in std_logic;
            Y : in std_logic_vector(2047 downto 0);
            Cb : in std_logic_vector(2047 downto 0);
            Cr : in std_logic_vector(2047 downto 0);
            Y_out : out  std_logic_vector(1023 downto 0);
            Cb_out : out std_logic_vector(1023 downto 0);
            Cr_out : out std_logic_vector(1023 downto 0);
            finished : out std_logic
        );
    end component quantization;

    component zigzag_reorder is
        generic (
            vector_length : integer := 16
        );
        port (
            clk : in std_logic;
            input_matrix : in  std_logic_vector(64*vector_length-1 downto 0); -- 64 x vector_length flattened input
            zigzag_out   : out std_logic_vector(64*vector_length-1 downto 0)  -- 64 x vector_length flattened output
        );
    end component zigzag_reorder;
    
    component huff_container is 
        port(
            clk : in std_logic;
            reset : in std_logic;
            start_huffman : in std_logic;
            Y : in std_logic_vector(1023 downto 0);
            Cb : in std_logic_vector(1023 downto 0);
            Cr : in std_logic_vector(1023 downto 0);
            data : out std_logic;
            data_valid : out std_logic;
            finished : out std_logic	
        );
    end component huff_container;

    component fwrit_main is
    Port ( height, width: in std_logic_vector (15 downto 0);
           clk, rst, in_bit, start, datavalid, done: in std_logic;
           dataready: out std_logic; --signals Huffman block that we are ready to receive data
           axi_valid: out std_logic;
           axi_ready: in std_logic;
           axi_data: out std_logic_vector(31 downto 0)
        );
    end component fwrit_main;

    type t_State is (idle,RGBtoYCbCr,dct,quant_load,quant_read,zigzag,huff_load,huff_read,done);
    signal currentState : t_State := idle;

    type dct_states is (Y_state_send,Y_state_middle,Y_state_wait,Cb_state_send,Cb_state_wait,Cr_state_send,Cr_state_wait);
    signal dct_state : dct_states := Y_state_send;

    signal convertStart : std_logic := '0';
    signal input_R : std_logic_vector(7 downto 0);
    signal input_G : std_logic_vector(7 downto 0);
    signal input_B : std_logic_vector(7 downto 0);
    signal output_Y : std_logic_vector(31 downto 0);
    signal output_Cb : std_logic_vector(31 downto 0);
    signal output_Cr : std_logic_vector(31 downto 0);
    signal convertDone : std_logic;

    signal Y_long : std_logic_vector(2047 downto 0);
    signal Cb_long : std_logic_vector(2047 downto 0);
    signal Cr_long : std_logic_vector(2047 downto 0);
    signal in_valid_dct : std_logic := '0';
    signal in_ready_dct : std_logic;
    signal out_valid_dct: std_logic;
    signal out_ready_dct : std_logic := '0';
    signal in_data_dct : std_logic_vector(2047 downto 0);
    signal out_data_dct : std_logic_vector(2047 downto 0);

    signal quant_start : std_logic;
    signal quant_Y_in: std_logic_vector(2047 downto 0);
    signal quant_Cb_in: std_logic_vector(2047 downto 0);
    signal quant_Cr_in: std_logic_vector(2047 downto 0);
    signal quant_out_Y: std_logic_vector(1023 downto 0);
    signal quant_Cb_out: std_logic_vector(1023 downto 0);
    signal quant_Cr_out: std_logic_vector(1023 downto 0);
    signal quant_finished: std_logic;

    signal Y_short : std_logic_vector(1023 downto 0);
    signal Cb_short : std_logic_vector(1023 downto 0);
    signal Cr_short : std_logic_vector(1023 downto 0);

    signal zigzag_in : std_logic_vector(1023 downto 0);
    signal zigzag_out : std_logic_vector(1023 downto 0);

    signal huff_data_out : std_logic;
    signal huff_start : std_logic;
    signal huff_data_valid : std_logic;
    signal huff_finished : std_logic;
    signal huff_Y : std_logic_vector(1023 downto 0);
    signal huff_Cb : std_logic_vector(1023 downto 0);
    signal huff_Cr : std_logic_vector(1023 downto 0);

    signal fwrite_done : std_logic;
    signal fwrite_dataready : std_logic;
    signal axi_valid : std_logic;
    signal axi_ready : std_logic;

    begin

        comp_conversion : component conversion
            generic map(scale => 16, fixed_point_length => 32, input_width => 8 )
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
            generic map(IN_W => 32, CONST_W => 16)
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
                start => quant_start,
                Y => quant_Y_in,
                Cb => quant_Cb_in,
                Cr => quant_Cr_in,
                Y_out => quant_out_Y,
                Cb_out => quant_Cb_out,
                Cr_out => quant_Cr_out,
                finished => quant_finished
            );

        comp_zigzag : component zigzag_reorder
            generic map(vector_length => 16)
            port map(
                clk => clk,
                input_matrix => zigzag_in,
                zigzag_out => zigzag_out
            );
        
        comp_huff : component huff_container
            port map(
                clk => clk,
                reset => rst_n,
                start_huffman => huff_start,
                Y => huff_Y,
                Cb => huff_Cb, 
                Cr => huff_Cr,
                data => huff_data_out,
                data_valid => huff_data_valid,
                finished => huff_finished
            );

        comp_file_writ: component fwrit_main
            port map(
                height => "0000000000001000", --8
                width => "0000000000001000", --8
                clk => clk,
                rst => rst_n,
                start => convertStart,
                in_bit => huff_data_out,
                datavalid => huff_data_valid,
                done => fwrite_done,
                dataready => fwrite_dataready,
                axi_valid => axi_valid,
                axi_ready => axi_ready,
                axi_data => fw_data
            );

        proc : process(clk)
            variable index : integer := 0;
            variable state : integer := 0;
        begin
            if rising_edge(clk) then
                case currentState is    
                    when idle =>
                        index := 0;
                        --Y <= temp_Y_in;--DEBUGGING
                        dct_state <= Y_state_send;
                        finished <= '0';
                        state := 0;
                        if start = '1' then
                            currentState <= RGBtoYCbCr;
                            --currentState <= dct;--Togheter with temp_Y_in for debugging.
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
                                Y_long(32*(index+1)-1 downto 32*(index)) <= output_Y;
                                Cb_long(32*(index+1)-1 downto 32*(index)) <= output_Cb;
                                Cr_long(32*(index+1)-1 downto 32*(index)) <= output_Cr;     
                                index := index + 1;
                                state := 0;   
                            end if;
                            if index = 64 then
                                index := 0;
                                currentState <= dct;
                                --currentState <= done; --By chaning to go here directly this output is printed. 
                            end if;
                        end if;

                    when dct => 
                        case dct_state is
                            when Y_state_send =>
                                --conversion_Y_out <= Y_long; -- DEBUGGING
                                in_data_dct <= Y_long;
                                in_valid_dct <= '1';         
                                if in_ready_dct = '1' then       
                                   dct_state <= Y_state_wait;
                                end if;

                            when Y_state_wait =>
                                in_valid_dct <= '0';
                                out_ready_dct <= '1';
                                if out_valid_dct = '1' then
                                    out_ready_dct <= '0';
                                    Y_long <= out_data_dct;
                                    dct_state <= Cb_state_send;
                                end if;

                            when Cb_state_send =>
                                in_data_dct <= Cb_long;
                                in_valid_dct <= '1';
                                if in_ready_dct = '1' then       
                                   dct_state <= Cb_state_wait;
                                end if;

                            when Cb_state_wait =>
                                in_valid_dct <= '0';
                                out_ready_dct <= '1';
                                if out_valid_dct = '1' then
                                    out_ready_dct <= '0';
                                    Cb_long <= out_data_dct; 
                                    dct_state <= Cr_state_send;
                                end if;

                            when Cr_state_send =>
                                in_data_dct <= Cr_long;
                                in_valid_dct <= '1';
                                if in_ready_dct = '1' then       
                                   dct_state <= Cr_state_wait;
                                end if;

                            when Cr_state_wait =>
                                in_valid_dct <= '0';
                                out_ready_dct <= '1';
                                if out_valid_dct = '1' then
                                    out_ready_dct <= '0';
                                    Cr_long <= out_data_dct;
                                    index := 0;
                                    currentState <= quant_load;
                                    --dct_Y_out <= Y_long; -- DEBUGGING
                                end if;
                                
                            when others =>
                                currentState <= idle;
                                
                        end case;

                    when quant_load =>
                        quant_Y_in <= Y_long;
                        quant_Cb_in <= Cb_long;
                        quant_Cr_in <= Cr_long;
                        quant_start <= '1';
                        currentState <= quant_read;
                            
                    when quant_read =>
                        quant_start <= '0';
                        if quant_finished = '1' then    
                            Y_short <= quant_out_Y;    
                            Cb_short <= quant_Cb_out;
                            Cr_short <= quant_Cr_out;
                            currentState <=zigzag;
                            --quant_Y_out <= quant_out_Y; -- DEBUGGING
                        end if;
                        
                    when zigzag =>
                        if state = 1 then
                            zigzag_in <= Y_short;

                        elsif state = 3 then
                            Y_short <= zigzag_out;
                            zigzag_in <= Cb_short;
                            --zigzag_Y_out <= zigzag_out; -- DEBUGGING

                        elsif state = 5 then
                            Cb_short <= zigzag_out;
                            zigzag_in <= Cr_short;
                            --zigzag_Cb_out <= zigzag_out; -- DEBUGGING

                        elsif state = 7 then
                            Cr_Short <= zigzag_out;
                            currentState <= huff_load;         
                            --zigzag_Cr_out <= zigzag_out; -- DEBUGGING
                        end if;
                        state := state + 1;
                    
                    when huff_load =>
                        huff_Y <= Y_short;                           
                        huff_Cb <= Cb_short;
                        huff_Cr <= Cr_short;
                        index := 300;
                        huff_start <= '1';
                        currentState <= huff_read;

                    when huff_read => 
                        huff_start <= '0';
                        if huff_finished = '1' then
                            currentState <= done;
                        end if;

                        if huff_data_valid = '1' then
                            stored_huffman(index) <= huff_data_out;
                            index := index-1;
                        end if;
            
                    when done =>
                        finished <= '1';
                        
                    when others => 
                end case;
            end if;
        end process proc;
end architecture;
