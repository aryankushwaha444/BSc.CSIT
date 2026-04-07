library ieee;
use ieee.std_logic_1164.all;
entity fs_tb is
end fs_tb;

architecture test of fs_tb is
component fs

port
(
     a,b,bin: in bit;
     d,Bo: out bit
);

end component;

signal a,b,bin,d,Bo:bit;
begin
Full_Subtractor : fs port map (a=>a,b=>b,bin=>bin,d=>d,Bo=>Bo);

process begin

     a<='0';
     b<='0';
	 bin<='0';
     wait for 1 ns;

     a<='0';
     b<='0';
	 bin<='1';
     wait for 1 ns;

     a<='0';
     b<='1';
	 bin<='0';
     wait for 1 ns;

     a<='0';
     b<='1';
	 bin<='1';
     wait for 1 ns;
	 
     a<='1';
     b<='0';
	 bin<='0';
     wait for 1 ns;

     a<='1';
     b<='0';
	 bin<='1';
     wait for 1 ns;

     a<='1';
     b<='1';
	 bin<='0';
     wait for 1 ns;

     a<='1';
     b<='1';
	 bin<='1';
     wait for 1 ns;	 

assert false report "Research end and of test ";
wait;
end process;
end test;

