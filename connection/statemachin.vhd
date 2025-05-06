library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity Controller is
    Port (
        clk         : in  std_logic;
        rst         : in  std_logic;
        start       : in  std_logic;
        done_flag   : out std_logic := '0';
        load_data_flag   : out std_logic := '0';
        execute_flag     : out std_logic := '0'
    );
end Controller;

architecture Behavioral of Controller is

    type state_type is (IDLE, LOAD, EXECUTE, DONE);
    signal current_state, next_state : state_type;

    signal done_reg : std_logic := '0';
    signal load_data_reg :std_logic := '0';
    signal execute_reg : std_logic := '0';
begin
    done_flag <= done_reg;
    load_data_flag <= load_data_reg;
    execute_flag <= execute_reg;

    -- State register
    process(clk, rst)
    begin
        if rst = '1' then
            current_state <= IDLE;
        elsif rising_edge(clk) then
            current_state <= next_state;
        end if;
    end process;

    -- State transitions
    process(current_state, start)
    begin
        case current_state is
            when IDLE =>
                if start = '1' then
                    next_state <= LOAD;
                else
                    next_state <= IDLE;
                end if;

            when LOAD =>
                next_state <= EXECUTE;

            when EXECUTE =>
                next_state <= DONE;

            when DONE =>
                if start = '0' then
                    next_state <= IDLE;
                else
                    next_state <= DONE;
                end if;

            when others =>
                next_state <= IDLE;
        end case;
    end process;

    -- Output logic
    process(current_state)
    begin
        case current_state is
            when IDLE =>
                -- Wait for start

            when LOAD =>
                load_data_reg <= '1';

            when EXECUTE =>
                execute_reg <= '1';

            when DONE =>
                done_reg <= '1';

            when others =>
                null;
        end case;
    end process;

end Behavioral;
