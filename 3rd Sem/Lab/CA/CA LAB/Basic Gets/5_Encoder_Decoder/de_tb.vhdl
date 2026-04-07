library ieee;
use ieee.std_logic_1164.all;
entity de_tb is
end de_tb;

architecture test of de_tb is
component de

port
(
x,y,z: in bit;
     d0,d1,d2,d3,d4,d5,d6,d7: out bit
);

end component;

signal x,y,z,d0,d1,d2,d3,d4,d5,d6,d7: bit;
begin
Decoder : de port map (d0=>d0,d1=>d1,d2=>d2,d3=>d3,d4=>d4,d5=>d5,d6=>d6,d7=>d7,x=>x,y=>y,z=>z);

process begin

     x<='0';
     y<='0';
	 z<='0';
     wait for 1 ns;

     x<='0';
     y<='0';
	 z<='1';
     wait for 1 ns;
	 
	 x<='0';
     y<='1';
	 z<='0';
     wait for 1 ns;
	 
	 x<='0';
     y<='1';
	 z<='1';
     wait for 1 ns;
	 
	 x<='1';
     y<='0';
	 z<='0';
     wait for 1 ns;
	 
	 x<='1';
     y<='0';
	 z<='1';
     wait for 1 ns;
	 
	 x<='1';
     y<='1';
	 z<='0';
     wait for 1 ns;
	 
	 x<='1';
     y<='1';
	 z<='1';
     wait for 1 ns;

assert false report "Research end and of test ";
wait;
end process;
end test;

