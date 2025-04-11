library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use ieee.std_logic_textio.all;
use std.textio.all;

entity huff_container_tb is
end entity huff_container_tb;

architecture arch of huff_container_tb is 
    component huff_container is
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
    end component huff_container;
    signal clk : std_logic;
    signal reset : std_logic;
    signal Y : std_logic_vector(1023 downto 0) := (others => '0');
    signal Cb : std_logic_vector(1023 downto 0):= (others => '0');
    signal Cr : std_logic_vector(1023 downto 0):= (others => '0');
    signal data : std_logic;
    signal data_valid : std_logic;
    signal finished : std_logic;

    type word_array is array (0 to 63) of std_logic_vector(15 downto 0);

    function load_words (file_name : string) return word_array is
        file object_file : text open read_mode is file_name;
        variable memory : word_array;
        variable L      : line;
        variable success : boolean;
        variable int_val   : integer;
        begin
            while not endfile(object_file) loop
                readline(object_file,L);
                for i in 0 to 63 loop
                    read(L,int_val,success);
                    assert success report "Failed to read integer" severity error;
                    memory(i) := std_logic_vector(to_signed(int_val,16));
                end loop;
            end loop;
        return memory;
    end load_words;

    signal values : word_array := load_words(string'("Yinput.txt"));
    begin
        
        dut: component huff_container
            port map(
                clk => clk,
                reset => reset,
                Y => Y,
                Cb => Cb,
                Cr => Cr,
                data => data,
                data_valid => data_valid,
                finished => finished
            );
        
        load : process
            variable max : integer := 1023;
            variable min : integer := 1008;
            variable index : integer := 0;
        begin
            Y(max downto min) <= values(index);
            max := max - 16;
            min := min - 16;
            index := index + 1;
            if(max < 0) then
                wait;
            end if;
	       
	       	
        end process load;

        clock : process 
        begin 
            clk <= '1';
             wait for 10 ns;
             clk <= '0';
             wait for 10 ns;
        end process;

end architecture arch;