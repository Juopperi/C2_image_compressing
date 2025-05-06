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
        finished : out std_logic
    );
    end component wrapper;

    signal clk : std_logic;
    signal rst_n : std_logic;
    signal start : std_logic;
    signal R : std_logic_vector(511 downto 0);
    signal G : std_logic_vector(511 downto 0);
    signal B : std_logic_vector(511 downto 0);
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
            finished => finished
        );

    clock : process
    begin
        rst_n <= '1';
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
        wait for 200 ns;
        R(7*(index+1) downto 7*index) <= Rvalues(index);
        G(7*(index+1) downto 7*index) <= Gvalues(index);
        B(7*(index+1) downto 7*index) <= Bvalues(index);
        index := index + 1;
        if(index = 64) then
            start <= '1';
            wait;
        end if;
    end process load;
end architecture;