library ieee;
use ieee.std_logic_1164.all;
entity hs_tb is
end hs_tb;

architecture test of hs_tb is
component hs

port
(
     a,b: in bit;
     d,Bo:out bit
);

end component;

signal a,b,d,Bo:bit;

begin
half_Subtractor : hs port map (a=>a,b=>b,d=>d,Bo=>Bo);

process begin

     a<='0';
     b<='0';
     wait for 1 ns;

     a<='0';
     b<='1';
     wait for 1 ns;

     a<='1';
     b<='0';
     wait for 1 ns;

     a<='1';
     b<='1';
     wait for 1 ns;

assert false report "Research end and of test ";
wait;
end process;
end test;

