library ieee;
use ieee.std_logic_1164.all;
entity fa_tb is
end fa_tb;

architecture test of fa_tb is
component fa

port
(
     a,b,cin: in bit;
     s,cout:out bit
);

end component;

signal a,b,s,cin,cout:bit;

begin
Full_Adder : fa port map (a=>a,b=>b,s=>s,cin=>cin,cout=>cout);

process begin

     a<='0';
     b<='0';
	 cin<='0';
     wait for 1 ns;

     a<='0';
     b<='0';
	 cin<='1';
     wait for 1 ns;

     a<='0';
     b<='1';
	 cin<='0';
     wait for 1 ns;

     a<='0';
     b<='1';
	 cin<='1';
     wait for 1 ns;
	 
	 a<='1';
     b<='0';
	 cin<='0';
     wait for 1 ns;
	 
	 a<='1';
     b<='0';
	 cin<='1';
     wait for 1 ns;
	 
	 a<='1';
     b<='1';
	 cin<='0';
     wait for 1 ns;
	 
	 a<='1';
     b<='1';
	 cin<='1';
     wait for 1 ns;

assert false report "Research end and of test ";
wait;
end process;
end test;

