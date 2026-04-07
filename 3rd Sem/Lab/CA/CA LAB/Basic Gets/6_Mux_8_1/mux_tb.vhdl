library ieee;
use ieee.std_logic_1164.all;
entity mux_tb is
end mux_tb;

architecture test of mux_tb is
component mux

port
(
     o: out bit;
     s2,s1,s0,i0,i1,i2,i3,i4,i5,i6,i7: in bit
);

end component;

signal s2,s1,s0,i0,i1,i2,i3,i4,i5,i6,i7,o: bit;
begin
mux_get : mux port map (s2=>s2,s1=>s1,s0=>s0,i0=>i0,i1=>i1,i2=>i2,i3=>i3,i4=>i4,i5=>i5,i6=>i6,i7=>i7,o=>o);

process begin

    s2<='0';
	s1<='0';
	s0<='0';
	i0<='1';
	i2<='0';
	i3<='0';
	i4<='0';
	i5<='0';
	i6<='0';
	i7<='0';
    wait for 1 ns;

    s2<='0';
	s1<='0';
	s0<='1';
	i0<='0';
	i1<='1';
	i2<='0';
    i3<='0';
	i4<='0';
	i5<='0';
	i6<='0';
	i7<='0';
    wait for 1 ns;

    s2<='0';
	s1<='1';
	s0<='0';
	i0<='0';
	i1<='0';
	i2<='1';
	i3<='0';
	i4<='0';
	i5<='0';
	i6<='0';
	i7<='0';
    wait for 1 ns;
	
	s2<='0';
	s1<='1';
	s0<='1';
	i0<='0';
	i1<='0';
	i2<='0';
	i3<='1';
	i4<='0';
	i5<='0';
	i6<='0';
	i7<='0';
    wait for 1 ns;
	
	s2<='1';
	s1<='0';
	s0<='0';
	i0<='0';
	i1<='0';
	i2<='0';
	i3<='0';
	i4<='1';
	i5<='0';
	i6<='0';
	i7<='0';
    wait for 1 ns;
	
	s2<='1';
	s1<='0';
	s0<='1';
	i0<='0';
	i1<='0';
	i2<='0';
	i3<='0';
	i4<='0';
	i5<='1';
	i6<='0';
	i7<='0';
    wait for 1 ns;
	
	s2<='1';
	s1<='1';
	s0<='0';
	i0<='0';
	i1<='0';
	i2<='0';
	i3<='0';
	i4<='0';
	i5<='0';
	i6<='1';
	i7<='0';
    wait for 1 ns;
	
	s2<='1';
	s1<='1';
	s0<='1';
	i0<='0';
	i1<='0';
	i2<='0';
	i3<='0';
	i4<='0';
	i5<='0';
	i6<='0';
	i7<='1';
    wait for 1 ns;


assert false report "Research end and of test ";
wait;
end process;
end test;

