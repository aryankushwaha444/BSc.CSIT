library ieee;
use ieee.std_logic_1164.all;
entity en_tb is
end en_tb;

architecture test of en_tb is
component en

port
(
     x,y,z: out bit;
     d0,d1,d2,d3,d4,d5,d6,d7: in bit
);

end component;

signal x,y,z,d0,d1,d2,d3,d4,d5,d6,d7: bit;
begin
Encoder : en port map (x=>x,y=>y,z=>z,d0=>d0,d1=>d1,d2=>d2,d3=>d3,d4=>d4,d5=>d5,d6=>d6,d7=>d7);

process begin

     d0<='1';
	 d1<='0';
	 d2<='0';
	 d3<='0';
	 d4<='0';
	 d5<='0';
	 d6<='0';
	 d7<='0';
     wait for 1 ns;

     d0<='0';
	 d1<='1';
	 d2<='0';
	 d3<='0';
	 d4<='0';
	 d5<='0';
	 d6<='0';
	 d7<='0';
     wait for 1 ns;
	 
	 d0<='0';
	 d1<='0';
	 d2<='1';
	 d3<='0';
	 d4<='0';
	 d5<='0';
	 d6<='0';
	 d7<='0';
     wait for 1 ns;


     d0<='0';
	 d1<='0';
	 d2<='0';
	 d3<='1';
	 d4<='0';
	 d5<='0';
	 d6<='0';
	 d7<='0';
     wait for 1 ns;


     d0<='0';
	 d1<='0';
	 d2<='0';
	 d3<='0';
	 d4<='1';
	 d5<='0';
	 d6<='0';
	 d7<='0';
     wait for 1 ns;


     d0<='0';
	 d1<='0';
	 d2<='0';
	 d3<='0';
	 d4<='0';
	 d5<='1';
	 d6<='0';
	 d7<='0';
     wait for 1 ns;


     d0<='0';
	 d1<='0';
	 d2<='0';
	 d3<='0';
	 d4<='0';
	 d5<='0';
	 d6<='1';
	 d7<='0';
     wait for 1 ns;


     d0<='0';
	 d1<='0';
	 d2<='0';
	 d3<='0';
	 d4<='0';
	 d5<='0';
	 d6<='0';
	 d7<='1';
     wait for 1 ns;



assert false report "Research end and of test ";
wait;
end process;
end test;

