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
            clk : in std_logic;
            input_integer : in std_logic_vector(7 downto 0);
            zeros : in integer;
            output_bit: out std_logic;
            done : out std_logic
        );
    end component huffman_AC_Y;
        
    component huffman_AC_CbCr is
        port(   
            clk : in std_logic;
            input_integer : in std_logic_vector(7 downto 0);
            zeros : in integer;
            output_bit: out std_logic;
            done : out std_logic
        );
    end component huffman_AC_CbCr;
    
   component huffman_DC_Y is
        port(   
            clk : in std_logic;
            input_integer : in std_logic_vector(7 downto 0);
            output_bit: out std_logic;
            done : out std_logic
        );
    end component huffman_DC_Y;
        
    component huffman_DC_CbCr is
        port(   
            clk : in std_logic;
            input_integer : in std_logic_vector(7 downto 0);
            output_bit: out std_logic;
            done : out std_logic
        );
    end component huffman_DC_CbCr;

        signal input_integer : std_logic_vector(7 downto 0) := (others => '0');
        signal output_bit : std_logic;
        signal done : std_logic;
        signal zeros : integer := 0;

    begin
        
        AC_Y: component huffman_AC_Y
            port map(
                clk => clk,
                input_integer => input_integer,
                zeros => zeros,               
                output_bit => output_bit,
                done => done
            );
        
        AC_CbCr: component huffman_AC_CbCr
            port map(
                clk => clk,
                input_integer => input_integer,
                zeros => zeros,               
                output_bit => output_bit,
                done => done
            );
            
        DC_Y: component huffman_DC_Y
            port map(
                clk => clk,
                input_integer => input_integer,             
                output_bit => output_bit,
                done => done
            );
            
        DC_CbCr: component huffman_DC_CbCr
            port map(
                clk => clk,
                input_integer => input_integer,             
                output_bit => output_bit,
                done => done
            );

        proc : process(clk)
        variable index : natural range 0 to 512 := 0;
        variable max : natural range 0 to 512 := 7;
        variable min : natural range 0 to 512 := 0;
        begin
		if rising_edge(clk) then
           min := 0;          
   		end if;
        end process proc;

        


end architecture arch;