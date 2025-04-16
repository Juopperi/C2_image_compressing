library ieee;
use ieee.std_logic_1164.all;

entity huff_container is
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
end entity huff_container;

architecture arch of huff_container is 
    component huffman_AC_Y is
        port(   
            clk : in std_logic;
            start : in std_logic;
            input_integer : in std_logic_vector(9 downto 0);
            zeros : in integer;
            output_bit: out std_logic;
            done : out std_logic
        );
    end component huffman_AC_Y;
        
    component huffman_AC_CbCr is
        port(   
            clk : in std_logic;
            start : in std_logic;
            input_integer : in std_logic_vector(9 downto 0);
            zeros : in integer;
            output_bit: out std_logic;
            done : out std_logic
        );
    end component huffman_AC_CbCr;
    
   component huffman_DC_Y is
        port(   
            clk : in std_logic;
            start : in std_logic;
            input_integer : in std_logic_vector(9 downto 0);
            output_bit: out std_logic;
            done : out std_logic
        );
    end component huffman_DC_Y;
        
    component huffman_DC_CbCr is
        port(   
            clk : in std_logic;
            start : in std_logic;
            input_integer : in std_logic_vector(9 downto 0);
            output_bit: out std_logic;
            done : out std_logic
        );
    end component huffman_DC_CbCr;

        type t_State is (idle,DC_Y,AC_Y,DC_CB,AC_CB,DC_CR,AC_CR);
        signal currentState : t_State := idle;

        signal input_integer : std_logic_vector(9 downto 0) := (others => '0');
        
        signal start_DC_Y : std_logic;
        signal start_AC_Y : std_logic;
        signal start_DC_CbCr : std_logic;
        signal start_AC_CbCr : std_logic;    
    
        signal output_AC_Y : std_logic;
        signal output_AC_CbCr : std_logic;
        signal output_DC_Y : std_logic;
        signal output_DC_CbCr : std_logic;

        signal done_AC_Y : std_logic;
        signal done_AC_CbCr : std_logic;
        signal done_DC_Y : std_logic;
        signal done_DC_CbCr : std_logic;


        signal output_bit : std_logic;
        signal zeros : integer := 0;

    begin
        
        comp_AC_Y: component huffman_AC_Y
            port map(
                clk => clk,
                start => start_AC_Y,
                input_integer => input_integer,
                zeros => zeros,               
                output_bit => output_AC_Y,
                done => done_AC_Y
            );
        
        comp_AC_CbCr: component huffman_AC_CbCr
            port map(
                clk => clk,
                start => start_AC_CbCr,
                input_integer => input_integer,
                zeros => zeros,               
                output_bit => output_AC_CbCr,
                done => done_AC_CbCr
            );
            
        comp_DC_Y: component huffman_DC_Y
            port map(
                clk => clk,
                start => start_DC_Y,
                input_integer => input_integer,             
                output_bit => output_DC_Y,
                done => done_DC_Y
            );
            
        comp_DC_CbCr: component huffman_DC_CbCr
            port map(
                clk => clk,
                start => start_DC_CbCr,
                input_integer => input_integer,             
                output_bit => output_DC_CbCr,
                done => done_DC_CbCr
            );

        proc : process(clk)
        variable max : integer range -16 to 1024 := 1001;
        variable min : integer range -32 to 1024 := 992;
        variable temp : std_logic_vector(9 downto 0);
        begin
		if rising_edge(clk) then
           case currentState is 
            when idle =>
                finished <= '0';
                max := 1001;
                min := 992;
                if start_huffman = '1' then
                    currentState <= DC_Y;
                end if;

            when DC_Y =>
                input_integer <= Y(1017 downto 1008);
                output_bit <= output_DC_Y;
                start_DC_Y <= '1';
                if done_DC_Y = '1' then
                    currentState <= AC_Y;
                    start_DC_Y <= '0';
                end if;

            when AC_Y =>
                if Y(max downto min) = "0000000000" then
                    start_AC_Y <= '0';
                    zeros <= zeros + 1;
                    max := max - 16;
                    min := min - 16;
                    output_bit <= 'U';
                else 
                    input_integer <= Y(max downto min); 
                    start_AC_Y <= '1';
                    output_bit <= output_AC_Y;
                end if;
                                
                if done_AC_Y = '1' then
                    start_AC_Y <= '0';
                    zeros <= 0;
                    max := max - 16;
                    min := min - 16;
                end if;
                
                if min = -16 and zeros = 0 then
                    max := 1001;
                    min := 992;
                    currentState <= DC_Cb;
                else 
                    --THE EOB STUFF
                end if;
 
          
           when DC_Cb =>
                input_integer <= Cb(1017 downto 1008);
                output_bit <= output_DC_CbCr;
                start_DC_CbCr <= '1';
                if done_DC_CbCr = '1' then
                    currentState <= AC_Cb;
                    start_DC_CbCr <= '0';
                end if;
                
            when AC_Cb =>
                if Cb(max downto min) = "0000000000" then
                    start_AC_CbCr <= '0';
                    zeros <= zeros + 1;
                    max := max - 16;
                    min := min - 16;
                    output_bit <= 'U';
                    if min = -16 then 
                        --CREATE THE EOB OUTPUT
                    end if;
                else 
                    input_integer <= Cb(max downto min);
                    start_AC_CbCr <= '1';
                    output_bit <= output_AC_CbCr;
                end if;
                
                if done_AC_CbCr = '1' then
                    start_AC_CbCr <= '0';
                    zeros <= 0;
                    max := max - 16;
                    min := min - 16;
                end if;

                if min = -16 and zeros = 0 then
                    start_AC_CbCr <= '0';
                    max := 1001;
                    min := 992;
                    currentState <= DC_Cr;
                end if;                
                
           when DC_Cr =>
                input_integer <= Cr(1017 downto 1008);
                output_bit <= output_DC_CbCr;
                start_DC_CbCr <= '1';
                if done_DC_CbCr = '1' then
                    currentState <= AC_Cr;
                    start_DC_CbCr <= '0';
                end if;
                
            when AC_Cr =>
                if Cr(max downto min) = "0000000000" then
                    start_AC_CbCr <= '0';
                    zeros <= zeros + 1;
                    max := max - 16;
                    min := min - 16;
                    output_bit <= 'U';
                else 
                    input_integer <= Cr(max downto min);
                    start_AC_CbCr <= '1';
                    output_bit <= output_AC_CbCr;
                end if;
                
                if done_AC_CbCr = '1' then
                    start_AC_CbCr <= '0';
                    zeros <= 0;
                    max := max - 16;
                    min := min - 16;
                end if;

                if min = -16 and zeros = 0 then
                    start_AC_CbCr <= '0';
                    max := 1001;
                    min := 992;
                    finished <= '1';
                    currentState <= idle;
                end if;                   
                
            when others => max:= 0;
            end case;                                                        
   		end if;
        end process proc;

        validate : process(clk)
        begin
        if rising_edge(clk) then
            if(output_bit = '0' or output_bit = '1') then
                data_valid <= '1';
                data <= output_bit;
            else
                data_valid <= '0';
            end if;
        end if;
        end process validate;

end architecture arch;