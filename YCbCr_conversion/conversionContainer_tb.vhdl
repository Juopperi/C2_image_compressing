library ieee;
use ieee.std_logic_1164.all;
use IEEE.std_logic_textio.all;
use ieee.numeric_std.all;
use STD.textio.all;

entity conversionContainer_tb is
end entity conversionContainer_tb;

architecture conversionContainer_tb_arch of conversionContainer_tb is 
    component conversionContainer is
        port(
            clk : in std_logic;
            rst : in std_logic;
            start : in std_logic;
            R : in std_logic_vector(64*8-1 downto 0);
            G : in std_logic_vector(64*8-1 downto 0);
            B : in std_logic_vector(64*8-1 downto 0);
            Y : out std_logic_vector(64*32-1 downto 0);
            Cb : out std_logic_vector(64*32-1 downto 0);
            Cr : out std_logic_vector(64*32-1 downto 0);
            conversion_done : out std_logic 
        );
    end component conversionContainer;
    
  signal  clk : std_logic;
  signal  rst : std_logic;
  signal  start : std_logic;
  signal  R : std_logic_vector(64*8-1 downto 0);
  signal  G : std_logic_vector(64*8-1 downto 0);
  signal  B : std_logic_vector(64*8-1 downto 0);
  signal  Y :  std_logic_vector(64*32-1 downto 0);
  signal  Cb :  std_logic_vector(64*32-1 downto 0);
  signal  Cr :  std_logic_vector(64*32-1 downto 0);
  signal  conversion_done : std_logic; 
    
    begin
        
       dut: conversionContainer
            port map(
                clk => clk,
                rst => rst,
                start => start,
                R => R,
                G => G,
                B => B,
                Y => Y,
                Cb => Cb,
                Cr => Cr,
                conversion_done => conversion_done
            );
        
        clock : process 
        begin 
            clk <= '1';
             wait for 1 ns;
             clk <= '0';
             wait for 1 ns;
        end process;
        
        proc : process
            file text_file : text open read_mode is "0_rgb.txt"; 
            file output_file : text open write_mode is "output_file.txt";           
            
            variable text_line : line;
            variable output_line : line;
        
            variable index : integer := 63;
            variable state : integer := 0; --0 for R, 1 for G, 2 for B
            variable data : integer;

            variable ok : boolean;
        begin
            while not endfile(text_file) loop
                readline(text_file, text_line);
                report text_line.all;
                
                if text_line.all'length = 9 then
                    index := 63;
                    state := state + 1;
                    next;
                end if;
                
                case state is 
                    when 1 =>
                        for i in 0 to 7 loop
                            read(text_line,data,ok);
                            assert ok report "Error in read: " & text_line.all severity failure;
                            R((index+1)*8-1 downto (index)*8) <= std_logic_vector(to_unsigned(data,8));
                            index := index -1;  
                        end loop;
                    
                    when 2 =>
                        for i in 0 to 7 loop
                            read(text_line,data,ok);
                            assert ok report "Error in read: " & text_line.all severity failure;
                            G((index+1)*8-1 downto (index)*8) <= std_logic_vector(to_unsigned(data,8));
                            index := index -1;  
                        end loop;
                    
                    when 3 =>
                        for i in 0 to 7 loop
                            read(text_line,data,ok);
                            assert ok report "Error in read: " & text_line.all severity failure;
                            B((index+1)*8-1 downto (index)*8) <= std_logic_vector(to_unsigned(data,8));
                            index := index -1;  
                        end loop; 
                     when others =>
                          report "ERROR MAYBE" severity error;

                end case;
            end loop;
            
            start <= '1';
            wait for 1000 ns;
            
            if conversion_done = '1' then 
                write(output_line,string'("Y:"));
                writeline(output_file,output_line);
                for i in 63 downto 0 loop
                        write(output_line, Y((i+1)*32-1 downto i*32));
                        write(output_line,string'(" "));                        
                end loop;
                
                writeline(output_file,output_line);
                                
                write(output_line,string'("Cb:"));
                writeline(output_file,output_line);
                for i in 63 downto 0 loop
                        write(output_line,Cb((i+1)*32-1 downto i*32));
                        write(output_line,string'(" "));
                end loop;
                writeline(output_file,output_line);
                
                write(output_line,string'("Cr:"));
                writeline(output_file,output_line);
                for i in 63 downto 0 loop
                        write(output_line,Cr((i+1)*32-1 downto i*32));
                        write(output_line,string'(" "));
                end loop;
                writeline(output_file,output_line);
                wait;
            end if;
        end process proc;

        


end architecture conversionContainer_tb_arch;