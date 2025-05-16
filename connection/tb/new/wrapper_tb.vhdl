library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use ieee.std_logic_unsigned.all;
use STD.textio.all;
use ieee.std_logic_textio.all;
use work.FixedPoint_Types.all;

entity wrapper_tb is
end entity wrapper_tb;

architecture arch of wrapper_tb is
    component wrapper is
    port (
        clk : in std_logic;
        rst_n : in std_logic;
        start : in std_logic;
        R : in std_logic_vector(511 downto 0);
        G : in std_logic_vector(511 downto 0);
        B : in std_logic_vector(511 downto 0);
        conversion_Y_out : out std_logic_vector(1023 downto 0); --Only for debugging
        dct_Y_out : out std_logic_vector(1023 downto 0); --Only for debugging
        quant_Y_out : out std_logic_vector(1023 downto 0); --Only for debugging
        zigzag_Y_out : out std_logic_vector(1023 downto 0); --Only for debugging
        stored_huffman : out std_logic_vector(600 downto 0);
        finished : out std_logic
    );
    end component wrapper;

    signal clk : std_logic;
    signal rst_n : std_logic;
    signal start : std_logic;
    signal R : std_logic_vector(511 downto 0);
    signal G : std_logic_vector(511 downto 0);
    signal B : std_logic_vector(511 downto 0);
    signal conversion_Y_out : std_logic_vector(1023 downto 0); --Only for debugging
    signal dct_Y_out : std_logic_vector(1023 downto 0); --Only for debugging
    signal quant_Y_out : std_logic_vector(1023 downto 0); --Only for debugging
    signal zigzag_Y_out : std_logic_vector(1023 downto 0); --Only for debugging
    signal stored_huffman : std_logic_vector(600 downto 0);
    signal finished : std_logic;

    type word_array is array (0 to 63) of std_logic_vector(7 downto 0);

    signal Rvalues : word_array := (others => (others => '0')); --load_words(string'("Crinput.txt"));
    signal Gvalues : word_array := (others => (others => '0')); --load_words(string'("Cbinput.txt"));
    signal Bvalues : word_array := (others => (others => '0')); --load_words(string'("Yinput.txt"));
    signal load_finished : std_logic := '0';
    
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
                    memory(i) := std_logic_vector(to_signed(int_val,8));
                end loop;
            end loop;
        return memory;
    end load_words;
begin

    dut : component wrapper
        port map(
            clk => clk,
            rst_n => rst_n,
            start => start,
            R => R,
            G => G,
            B => B,
            conversion_Y_out => conversion_Y_out,
            dct_Y_out => dct_Y_out,
            quant_Y_out => quant_Y_out,
            zigzag_Y_out => zigzag_Y_out,
            stored_huffman => stored_huffman,
            finished => finished
        );
        
    reset : process 
    begin
        rst_n <= '0';
        wait for 20 ns;
         rst_n <= '1';
         wait;
    end process;
    
    clock : process
    begin
        clk <= '1';
        wait for 10 ns;
        clk <= '0';
        wait for 10 ns;
    end process;

    readfile : process
        variable temp_memory : word_array;
        begin
            Rvalues <= load_words("Rinput.txt");
            Gvalues <= load_words("Ginput.txt");
            Bvalues <= load_words("Binput.txt");
            wait;
    end process;

    load : process
        variable index : integer := 0;
    begin
        wait for 10 ns;
        R((8*(index+1)-1) downto 8*index) <= Rvalues(index);
        --report "Value: " & integer'image(to_integer(unsigned(Rvalues(index))));
        G((8*(index+1)-1) downto 8*index) <= Gvalues(index);
        B((8*(index+1)-1) downto 8*index) <= Bvalues(index);
        index := index + 1;
        if(index = 64) then
            start <= '1';
            wait;
        end if;
    end process load;
    
    writeData_conv : process 
      file output_file : text open write_mode is "conversion_out.txt";
      variable output_line : line;
      variable index : integer := 0;
      variable rowIndex : integer := 0;
      variable temp : std_logic_vector(7 downto 0);
    begin 
        if finished = '1' then
            temp := conversion_Y_out(16*(index+1)-1 downto (16*index)+8); 
            write(output_line,to_integer(signed(temp)));
            write(output_line,string'(" "));
            rowIndex := rowIndex + 1;
            if rowIndex = 8 then
                writeline(output_file,output_line);
                rowIndex := 0;
            end if;
            index := index + 1;
            if index = 64 then
                write(output_line,conversion_Y_out);
                writeline(output_file,output_line);
                wait;
            end if;
        end if;
        wait for 10 ns;
    end process writeData_conv;

    writeData_dct : process 
      file output_file : text open write_mode is "dct_out.txt";
      variable output_line : line;
      variable index : integer := 0;
      variable rowIndex : integer := 0;
      variable temp : std_logic_vector(7 downto 0);
    begin 
        if finished = '1' then
            temp := dct_Y_out(16*(index+1)-1 downto (16*index)+8); 
            write(output_line,to_integer(signed(temp)));
            write(output_line,string'(" "));
            rowIndex := rowIndex + 1;
            if rowIndex = 8 then
                writeline(output_file,output_line);
                rowIndex := 0;
            end if;
            index := index + 1;
            if index = 64 then
                write(output_line,dct_Y_out);
                writeline(output_file,output_line);
                wait;
            end if;
        end if;
        wait for 10 ns;
    end process writeData_dct;


    writeData_quant : process 
      file output_file : text open write_mode is "quant_out.txt";
      variable output_line : line;
      variable index : integer := 0;
      variable rowIndex : integer := 0;
      variable temp : std_logic_vector(7 downto 0);
    begin 
        if finished = '1' then
            temp := quant_Y_out(16*(index+1)-1 downto (16*index)+8); 
            write(output_line,to_integer(signed(temp)));
            write(output_line,string'(" "));
            rowIndex := rowIndex + 1;
            if rowIndex = 8 then
                writeline(output_file,output_line);
                rowIndex := 0;
            end if;
            index := index + 1;
            if index = 64 then
                write(output_line,quant_Y_out);
                writeline(output_file,output_line);
                wait;
            end if;
        end if;
        wait for 10 ns;
    end process writeData_quant;

    writeData_zigzag : process 
      file output_file : text open write_mode is "zigzag_out.txt";
      variable output_line : line;
      variable index : integer := 0;
      variable rowIndex : integer := 0;
      variable temp : std_logic_vector(7 downto 0);
    begin 
        if finished = '1' then
            temp := zigzag_Y_out(16*(index+1)-1 downto (16*index)+8); 
            write(output_line,to_integer(signed(temp)));
            write(output_line,string'(" "));
            rowIndex := rowIndex + 1;
            if rowIndex = 8 then
                writeline(output_file,output_line);
                rowIndex := 0;
            end if;
            index := index + 1;
            if index = 64 then
                write(output_line,zigzag_Y_out);
                writeline(output_file,output_line);
                wait;
            end if;
        end if;
        wait for 10 ns;
    end process writeData_zigzag;

    writeData_huff : process 
      file output_file : text open write_mode is "huffman_out.txt";
      variable output_line : line;
    begin 
        if finished = '1' then
            write(output_line,stored_huffman);
            writeline(output_file,output_line);
            wait;
         end if;
         wait for 10 ns;
    end process writeData_huff;
    
    
end architecture;