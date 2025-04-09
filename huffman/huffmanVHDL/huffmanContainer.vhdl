library ieee;
use ieee.std_logic_1164.all;

entity huff_container is
	port(
		clk : in std_logic;
        reset : in std_logic;
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
        signal currentState : t_State := DC_Y;

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
        variable max : integer range 0 to 1024 := 1001;
        variable min : integer range -32 to 1024 := 992;
        variable temp : std_logic_vector(9 downto 0);
        begin
		if rising_edge(clk) then
           case currentState is 
            when idle =>
                max := 1001;
                min := 992;

            when DC_Y =>
                input_integer <= Y(1017 downto 1008);
                output_bit <= output_DC_Y;
                start_DC_Y <= '1';
                if done_DC_Y = '1' then
                    currentState <= AC_Y;
                    start_DC_Y <= '0';
                end if;

            when AC_Y =>
                temp := Y(max downto min);
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

                if min < 0 then
                    max := 1007;
                    min := 998;
                    currentState <= DC_Cb;
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