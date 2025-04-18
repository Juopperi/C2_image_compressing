library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use std.textio.all; 
use work.FixedPoint_Types.ALL;

entity subsample_tb is
end subsample_tb;

architecture test of subsample_tb is
  component subsample
    port (
        clk    : in std_logic;
        Cb_in  : in  fixed_array;
        Cr_in  : in  fixed_array;
        Cb_out : out fixed_array;
        Cr_out : out fixed_array
    );
  end component;

        signal clk    : std_logic :='0';
        signal Cb_out : fixed_array;
        signal Cr_out : fixed_array;
  
    -- inputs from DCT (retrieved from matlab)

    signal Cb_in :  fixed_array := (
        x"078B3FF2", x"070656CD", x"06391BC0", x"065047C0", x"07C2D85C", x"089A5B89", x"0921D5A7", x"0962964D",
        x"07F97E1A", x"075A3C85", x"0667D2B4", x"0670ED88", x"0796B2BC", x"0861432C", x"08FA1C6A", x"08F7B8FA",
        x"0863FD98", x"07DBF3F5", x"06D1C080", x"0670C2A4", x"0751C2B4", x"07D2CDE4", x"0825FB80", x"08444110",
        x"08F5C544", x"0844EB68", x"06E2F89C", x"0673A480", x"0711F544", x"077D1BC0", x"07784C6C", x"078E2C68",
        x"094DD6F4", x"0895F9F4", x"06E3A2C0", x"06764070", x"06FE463C", x"0704D88C", x"06E0D8B0", x"06D032B0",
        x"08AC2C34", x"080CCE6C", x"06EBA58C", x"066138A0", x"0704D88C", x"0759F278", x"07599B84", x"075981B0",
        x"075A7A50", x"06E07F48", x"05F5BC80", x"0620BC90", x"075E7A60", x"085FCBE4", x"090E1AC4", x"0962964D",
        x"068AFCC0", x"063AF600", x"05931BC0", x"077F16A0", x"0791C900", x"08DAF9BC", x"09E6A344", x"0A68A344"

    );
    signal Cr_in : fixed_array := (
        x"0962549C", x"0937F3B6", x"08E28544", x"08997E99", x"086A1FA4", x"08652C8C", x"0890F3C4", x"089BD986",
        x"0903733C", x"09621ED2", x"0947FFFC", x"08F0AAA0", x"08CA8E60", x"089BF8F8", x"08906A68", x"086F313C",
        x"09B6F2A8", x"09BDB3E8", x"09D37B2C", x"09C81360", x"098C8E60", x"0912BCEC", x"089FCB44", x"0846D744",
        x"0970A788", x"096FF378", x"0983F3B6", x"0961E6D8", x"09132C38", x"08A00DCC", x"0823F2CC", x"07FD8ECC",
        x"08E00C78", x"08917A50", x"08249CD0", x"07F6EC48", x"079A78CC", x"07583110", x"0758AC78", x"0762194C",
        x"08713A64", x"084648C0", x"07FD1DD0", x"079A9F00", x"07583110", x"0758E314", x"079A14DC", x"07B3AD3C",
        x"0890A7A0", x"0890613C", x"089B4F34", x"089B6DCC", x"089C6D8C", x"08995758", x"089B0214", x"089BD986",
        x"0891B7A8", x"089C18A8", x"08F04D04", x"08EFA9DC", x"09400000", x"093F54B0", x"09381A08", x"0911CD88"
    );

  begin
    uut : subsample
      port map(
        clk => clk,
        Cb_in => Cb_in,
        Cr_in => Cr_in,
        Cb_out => Cb_out,
        Cr_out => Cr_out
      );

    process
    begin
        wait for 500 ns;
        clk <= not clk;
        wait;
    end process;


end test;
