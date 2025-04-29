library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use std.textio.all; 
use work.FixedPoint_Types.ALL;

entity quantization_tb is
end quantization_tb;

architecture test of quantization_tb is
  component quantization
    port (
        clk    : in std_logic;
        Y   : in  fixed_array; -- Input: 64-element array of Q16.16
        Cb  : in  fixed_array;
        Cr  : in  fixed_array;
        Y_out  : out fixed_array_16; -- Output: Quantized 64-element array
        Cb_out : out fixed_array_16;
        Cr_out : out fixed_array_16
    );
  end component;

        signal clk    : std_logic :='0';
        signal Y_out  : fixed_array_16; -- Output: Quantized 64-element array
        signal Cb_out : fixed_array_16;
        signal Cr_out : fixed_array_16;
  
    -- inputs from DCT (retrieved from matlab)
    signal Y : fixed_array := (
        x"00006236", x"0028FFB7", x"00300D8A", x"FFB56E38", x"FFC2C4F8", x"00149472", x"00192E71", x"FFFF9FEF",
        x"003A4D0B", x"00412CD6", x"005BDFF6", x"00280297", x"FFFA9B77", x"003840D9", x"FFE14586", x"FFE2D918",
        x"FFF93DDC", x"00775B51", x"000ED8AE", x"000B8018", x"003C74E2", x"00002EC3", x"FFDCC4EB", x"0019FD18",
        x"00455672", x"FFD4E8F7", x"FFD5A860", x"00100B3A", x"004D1DB7", x"FFFF5F79", x"FFB0ABB8", x"FFC26DB5",
        x"FFF7C2F8", x"FFD4D5EF", x"00387CA7", x"0000611B", x"FFE030F7", x"FFCA7934", x"0000682F", x"004D97C7",
        x"FFE87004", x"005B4A1B", x"FFC86F3D", x"0041A91F", x"FFFFF54D", x"FFC9C020", x"FFC8B96F", x"FFD3B88E",
        x"FF83B21C", x"FFDFDD0D", x"000083D4", x"002C3994", x"FFCDAF54", x"FFC755E8", x"FFC7B84D", x"FFFFA488",
        x"FFDCC657", x"008A3E30", x"FFCD9E6C", x"FFCA6C66", x"00001AF9", x"FFCBE594", x"00340302", x"FFCDAE30"
    );
    signal Cb :  fixed_array := (
        x"FFCBA0EE", x"FFCFF273", x"004577FA", x"0028C274", x"0002FAEE", x"FFF69A0E", x"FFFA26F6", x"FFFD5759",
        x"00061A54", x"000D2BCC", x"0001A4E9", x"00051FB3", x"FFFA655D", x"FFFAC8C1", x"00025A91", x"0005DD2C",
        x"0011B52E", x"FFA96BB3", x"FFFEEFBB", x"FFFC314C", x"0003F6C5", x"00055AB5", x"FFFD9F85", x"FFFC0E09",
        x"FFF5EDEC", x"0018F91F", x"0000EC54", x"0004298F", x"FFFC9E71", x"FFFBFDAB", x"00020469", x"0004266F",
        x"00024F6A", x"00001D08", x"FFFC6DBC", x"FFFD5CE9", x"0002A9A6", x"000284A6", x"FFFE6775", x"FFFC00C4",
        x"FFFF84EE", x"FFF671AA", x"000364BC", x"00011B69", x"FFFD3B05", x"FFFC6BA6", x"00017CD8", x"000351BB",
        x"FFFFD471", x"0005EF15", x"FFFCF5E1", x"FFFE07B6", x"0000FE4B", x"00010FF6", x"FFFE612E", x"FFFE2EE9",
        x"FFFE8DD8", x"FFFF57AA", x"000104EB", x"000062A1", x"FFFEBC62", x"FFFEF86A", x"FFFFC066", x"0000EB82"
    );
    signal Cr : fixed_array := (
        x"0052F51C", x"0022F51C", x"FFFE4DE3", x"FFFF91CF", x"FFFF3EBC", x"FFFF5727", x"FFFF9634", x"000037E6",
        x"00189C38", x"00126C71", x"FFFD99B4", x"FFFECE2C", x"FFFF09FE", x"FFFF973A", x"FFFEA896", x"FFFE89C4",
        x"0017A09F", x"FFE4A5C4", x"00033F83", x"FFFEF64C", x"FFFE39D3", x"FFFFC07D", x"0000277F", x"00013971",
        x"FFCA1B8F", x"00027706", x"001623A4", x"FFFF8E2B", x"0000BC3C", x"000071A7", x"FFFE27CD", x"FFFF3FF0",
        x"000027F0", x"00010B55", x"0001270A", x"00011304", x"0000ED3C", x"00004D77", x"000097CE", x"0000C08E",
        x"00122492", x"000193D5", x"FFFAA1CA", x"00013C0E", x"0001E62D", x"000167E6", x"000151E6", x"00000095",
        x"FFFFDA2D", x"00030A9B", x"0001CC14", x"0001DD9F", x"00013C39", x"000119EE", x"0000B32A", x"000093A1",
        x"000125B4", x"00011EDE", x"0000D92D", x"000095DA", x"0000E118", x"000065F2", x"FFFFF5E8", x"00004132"
    );

  begin
    uut : quantization
      port map(
        clk => clk,
        Y => Y,
        Cb => Cb,
        Cr => Cr,
        Y_out => Y_out,
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
