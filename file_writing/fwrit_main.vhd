library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
--use IEEE.STD_LOGIC_UNSIGNED.ALL;
--use std.textio.all;
--use ieee.std_logic_textio.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;
-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity fwrit_main is
    Port ( height, width: in std_logic_vector (15 downto 0);
           data_out: out std_logic_vector (7 downto 0);
           clk, rst, in_bit, start, datavalid, done: in std_logic;
           dataready: out std_logic);
end fwrit_main;

architecture Behavioral of fwrit_main is
    
    type image_info is array (0 to 620) of std_logic_vector(7 downto 0);
    constant img_info: image_info := (
        x"FF", x"D8",--SOI
        x"FF", x"E0", x"00", x"10",--APP0
        x"4A", x"46", x"49", x"46", x"00",
        x"01", x"01", x"00", x"00", x"01", x"00", x"01", x"00", x"00",
        x"FF", x"DB", x"00", x"43", x"00",--Quant Y
            x"10", x"0B", x"0C", x"0E", x"0C", x"0A", x"10", x"0E",
            x"0D", x"0E", x"12", x"11", x"10", x"13", x"18", x"28",
            x"1A", x"18", x"16", x"16", x"18", x"31", x"23", x"25",
            x"1D", x"28", x"3A", x"33", x"3D", x"3C", x"39", x"33",
            x"38", x"37", x"40", x"48", x"5C", x"4E", x"40", x"44",
            x"57", x"45", x"37", x"38", x"50", x"6D", x"51", x"57",
            x"5F", x"62", x"67", x"68", x"67", x"3E", x"4D", x"71",
            x"79", x"70", x"64", x"78", x"5C", x"65", x"67", x"63",
        x"FF", x"DB", x"00", x"43", x"01",--Quant C
            x"11", x"12", x"18", x"2F", x"63", x"63", x"63", x"63",
            x"12", x"15", x"1A", x"42", x"63", x"63", x"63", x"63",
            x"18", x"1A", x"38", x"63", x"63", x"63", x"63", x"63",
            x"2F", x"42", x"63", x"63", x"63", x"63", x"63", x"63",
            x"63", x"63", x"63", x"63", x"63", x"63", x"63", x"63",
            x"63", x"63", x"63", x"63", x"63", x"63", x"63", x"63",
            x"63", x"63", x"63", x"63", x"63", x"63", x"63", x"63",
            x"63", x"63", x"63", x"63", x"63", x"63", x"63", x"63",
        x"FF", x"C0", x"00", x"11", x"08",--SOF, last element up to now is index 162
        --write height and width
        x"03", x"01", x"11", x"00", x"02", x"11", x"01", x"03", x"11", x"01",
        x"FF", x"C4", x"00", x"1F", x"00",--DHT Y DC
            x"00", x"01", x"05", x"11", x"11", x"11", x"11", x"11", x"11", x"00", x"00", x"00", x"00", x"00", x"00", x"00",
            x"00", x"01", x"02", x"03", x"04", x"05", x"06", x"07", x"08", x"09", x"0A", x"0B",
        x"FF", x"C4", x"00", x"B5", x"10",--DHT Y AC
            x"00", x"02", x"01", x"03", x"03", x"02", x"04", x"03", x"05", x"05", x"04", x"04", x"00", x"00", x"01", x"7D",
            x"01", x"02", x"03", x"00", x"04", x"11", x"05", x"12",
            x"21", x"31", x"41", x"06", x"13", x"51", x"61", x"07",
            x"22", x"71", x"14", x"32", x"81", x"91", x"A1", x"08",
            x"23", x"42", x"B1", x"C1", x"15", x"52", x"D1", x"F0",
            x"24", x"33", x"62", x"72", x"82", x"09", x"0A", x"16",
            x"17", x"18", x"19", x"1A", x"25", x"26", x"27", x"28",
            x"29", x"2A", x"34", x"35", x"36", x"37", x"38", x"39",
            x"3A", x"43", x"44", x"45", x"46", x"47", x"48", x"49",
            x"4A", x"53", x"54", x"55", x"56", x"57", x"58", x"59",
            x"5A", x"63", x"64", x"65", x"66", x"67", x"68", x"69",
            x"6A", x"73", x"74", x"75", x"76", x"77", x"78", x"79",
            x"7A", x"83", x"84", x"85", x"86", x"87", x"88", x"89",
            x"8A", x"92", x"93", x"94", x"95", x"96", x"97", x"98",
            x"99", x"9A", x"A2", x"A3", x"A4", x"A5", x"A6", x"A7",
            x"A8", x"A9", x"AA", x"B2", x"B3", x"B4", x"B5", x"B6",
            x"B7", x"B8", x"B9", x"BA", x"C2", x"C3", x"C4", x"C5",
            x"C6", x"C7", x"C8", x"C9", x"CA", x"D2", x"D3", x"D4",
            x"D5", x"D6", x"D7", x"D8", x"D9", x"DA", x"E1", x"E2",
            x"E3", x"E4", x"E5", x"E6", x"E7", x"E8", x"E9", x"EA",
            x"F1", x"F2", x"F3", x"F4", x"F5", x"F6", x"F7", x"F8",
            x"F9", x"FA",
        x"FF", x"C4", x"00", x"1F", x"01",--DHT C DC
            x"00", x"03", x"01", x"01", x"01", x"01", x"01", x"01", x"01", x"01", x"01", x"00", x"00", x"00", x"00", x"00",
            x"00", x"01", x"02", x"03", x"04", x"05", x"06", x"07", x"08", x"09", x"0A", x"0B",
        x"FF", x"C4", x"00", x"B5", x"11",--DHT C AC
            x"00", x"02", x"01", x"02", x"04", x"04", x"03", x"04", x"07", x"05", x"04", x"04", x"00", x"01", x"02", x"77",
            x"00", x"01", x"02", x"03", x"11", x"04", x"05", x"21", 
            x"31", x"06", x"12", x"41", x"51", x"07", x"61", x"71", 
            x"13", x"22", x"32", x"81", x"08", x"14", x"42", x"91", 
            x"A1", x"B1", x"C1", x"09", x"23", x"33", x"52", x"F0", 
            x"15", x"62", x"72", x"D1", x"0A", x"16", x"24", x"34", 
            x"E1", x"25", x"F1", x"17", x"18", x"19", x"1A", x"26", 
            x"27", x"28", x"29", x"2A", x"35", x"36", x"37", x"38", 
            x"39", x"3A", x"43", x"44", x"45", x"46", x"47", x"48", 
            x"49", x"4A", x"53", x"54", x"55", x"56", x"57", x"58", 
            x"59", x"5A", x"63", x"64", x"65", x"66", x"67", x"68", 
            x"69", x"6A", x"73", x"74", x"75", x"76", x"77", x"78", 
            x"79", x"7A", x"82", x"83", x"84", x"85", x"86", x"87", 
            x"88", x"89", x"8A", x"92", x"93", x"94", x"95", x"96", 
            x"97", x"98", x"99", x"9A", x"A2", x"A3", x"A4", x"A5", 
            x"A6", x"A7", x"A8", x"A9", x"AA", x"B2", x"B3", x"B4", 
            x"B5", x"B6", x"B7", x"B8", x"B9", x"BA", x"C2", x"C3", 
            x"C4", x"C5", x"C6", x"C7", x"C8", x"C9", x"CA", x"D2", 
            x"D3", x"D4", x"D5", x"D6", x"D7", x"D8", x"D9", x"DA", 
            x"E2", x"E3", x"E4", x"E5", x"E6", x"E7", x"E8", x"E9",
            x"EA", x"F2", x"F3", x"F4", x"F5", x"F6", x"F7", x"F8",
            x"F9", x"FA",
        x"FF", x"DA", x"00", x"0C", x"03", x"01", x"00", x"02", x"11", x"03", x"11", x"00", x"3F", x"00",--SOS
        x"FF", x"D9" --EOI
    );
    
    type state_type is (idle,info1,dim,info2,idle2,data,eoi);
    signal current_state, next_state : state_type;
    signal writeinfo: std_logic;
    signal current_byte, ent_buf: std_logic_vector (7 downto 0);
    signal array_el : integer range 0 to 1023;
    signal dim_el : integer range 0 to 1;
    signal entropy_el : integer range 0 to 7;
    
begin

    state_update:process(clk,rst)
        begin
            if rst='1' then
                current_state <= idle;
            elsif rising_edge(clk) then
                current_state<=next_state;          
            end if;
        end process;
    
    state_outputs:process(current_state,datavalid,done,array_el,dim_el)
    begin
          case current_state is
             when idle =>
                writeinfo<='0';
                dataready<='0';
                if start='1' then
                    next_state <= info1;
                else
                    next_state <= idle;
                end if;
             when info1 =>
                writeinfo<='1';
                dataready<='0';
                if array_el=162 then
                    next_state <= dim;
                end if;
             when dim =>
                writeinfo<='0';
                dataready<='0';
                if dim_el=1 then
                    next_state <= info2;
                end if;
             when info2 =>
                writeinfo<='1';
                dataready<='0';
                entropy_el <= 7;
                if array_el=618 then
                    dataready<='1';
                    next_state <= idle2;
                end if;
             when idle2 =>
                writeinfo<='0';
                dataready<='1';
                entropy_el <= 7;
                if datavalid='1' then
                    dataready<='0';
                    next_state <= data;
                end if;
             when data=>
                writeinfo<='0';
                dataready<='0';
                if done='1' then
                    dataready<='0';
                    next_state <= eoi;
                end if;
             when eoi=>
                writeinfo<='1';
                dataready<='0';
                if array_el=620 then
                    next_state <= idle;
                end if;
             when others => null;
          end case;
    end process;
    
    process(clk)
    begin
        if rising_edge(clk) then
            if current_state=dim then
		        --write height or width to memory
                dim_el <= dim_el + 1;
                if dim_el=1 then
                    dim_el<=0;
                end if;
            elsif writeinfo='1' then
		        --write data to memory
                array_el <= array_el + 1;
                if array_el=620 then
                    array_el <= 0;
                end if;
            elsif current_state=data and datavalid='1' then
                ent_buf (entropy_el) <= in_bit;
                if entropy_el = 0 then
                    entropy_el <= 7;
                    --write data to memory
                    if ent_buf = "11111111" then
                        --write "00000000" to memory 
                    end if;
                else
                    entropy_el <= entropy_el - 1;
                end if;  
            end if;
        end if;
    end process;
    
    current_byte<=img_info(array_el) when writeinfo='1' else
        height when (current_state=dim and dim_el=0) else
        width when (current_state=dim and dim_el=1) else
        ent_buf when (current_state=data) else
        x"00";
    
    data_out<=current_byte;
    
end Behavioral;