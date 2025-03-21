library ieee;
use ieee.std_logic_1164.all;

entity huff_container is
	port(
		clk : in std_logic;
        reset : in std_logic;
		test1 : in std_logic_vector(511 downto 0);
		test2 : out std_logic_vector(31 downto 0)	
	);
end entity huff_container;

architecture arch of huff_container is 
    component huffman_AC_Y is
        port(   
            input_integer : in std_logic_vector(7 downto 0);
            zeros : in integer;
            output_integer: out std_logic_vector(15 downto 0);
            length : out integer;
            ready_next : out std_logic
        );
    end component huffman_AC_Y;
        
        type t_State is (count_zero,load,store);
        signal State : t_State;

        signal input_integer : std_logic_vector(7 downto 0) := (others => '0');
        signal output_integer : std_logic_vector(15 downto 0);
        signal ready_next : std_logic;
        signal length : integer := 0; 
        signal zeros : integer := 0;

    begin
        
        test: component huffman_AC_Y
            port map(
                input_integer => input_integer,
                zeros => zeros,
                output_integer => output_integer,
                length => length,
                ready_next => ready_next
            );

        proc : process(clk)
        variable index : natural range 0 to 512 := 0;
        variable max : natural range 0 to 512 := 7;
        variable min : natural range 0 to 512 := 0;
        begin
		if rising_edge(clk) then
            if reset = '1' then
                index := 0;
                max := 7;
                min := 0;
            else 
                case state is 
                    when count_zero =>
                        if test1(max downto min) = B"0000_0000" then
                            max := max + 8;
                            min := min + 8; 
                            zeros <= zeros + 1;
                        else 
                            state <= load;
                        end if;
                    when load =>
                        input_integer <= test1(max downto min);
                        state <= store;
                    when store =>
                        for k in 0 to length-1 loop
                            test2(index) <= output_integer(k);
                            index := index + 1;
                        end loop;
                        zeros <= 0;
                        max := max + 8;
                        min := min + 8;
                        state <= count_zero; 
                end case;
                
            end if;
          
   		end if;
        end process proc;

        


end architecture arch;