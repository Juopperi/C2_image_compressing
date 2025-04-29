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
            start_huffman : in std_logic;
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
    signal start_huffman : std_logic;

    type word_array is array (0 to 63) of std_logic_vector(15 downto 0);

    function load_words (file_name : string) return word_array is
        file object_file : text open read_mode is file_name;
        variable memory : word_array;
        variable L      : line;
        variable int_val   : integer;
        begin
            while not endfile(object_file) loop
                readline(object_file,L);
                for i in 0 to 63 loop
                    read(L,int_val);
                    memory(i) := std_logic_vector(to_signed(int_val,16));
                end loop;
            end loop;
        return memory;
    end load_words;
                signal Crvalues : word_array := (others => (others => '0')); --load_words(string'("Crinput.txt"));
            signal Cbvalues : word_array := (others => (others => '0')); --load_words(string'("Cbinput.txt"));
            signal Yvalues : word_array := (others => (others => '0')); --load_words(string'("Yinput.txt"));
    signal load_finished : std_logic := '0';
    begin
        
        dut: component huff_container
            port map(
                clk => clk,
                reset => reset,
                start_huffman => start_huffman,
                Y => Y,
                Cb => Cb,
                Cr => Cr,
                data => data,
                data_valid => data_valid,
                finished => finished
            );
           
        test : process
            variable temp_memory : word_array;
        begin
        temp_memory := load_words("Crinput.txt");
        Crvalues <= temp_memory;
        temp_memory := load_words("Cbinput.txt");
        Cbvalues <= temp_memory;
        temp_memory := load_words("Yinput.txt");
        Yvalues <= temp_memory;
        wait;
        end process;
        
        load : process
            variable max : integer := 1023;
            variable min : integer := 1008;
            variable index : integer := 0;
        begin
            wait for 100 ns;
            Y(max downto min) <= Yvalues(index);
            report "Value: " & integer'image(to_integer(signed(Yvalues(index))));
            Cr(max downto min) <= Crvalues(index);
            Cb(max downto min) <= Cbvalues(index);
            max := max - 16;
            min := min - 16;
            index := index + 1;
            if(index = 64) then
                start_huffman <= '1';
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
        
        verification : process
            file output_file : text open write_mode is "output_file.txt";
            variable output_line : line;
   
        begin   
            wait for 20 ns;
            if data_valid = '1' then
                write(output_line,data);
            else 
               write(output_line,string'(" "));
            end if;
            
            if finished = '1' then
                writeline(output_file,output_line);
                write(output_line,string'("DONE"));
                writeline(output_file,output_line);                    
                wait;
            end if;
        end process;

end architecture arch;