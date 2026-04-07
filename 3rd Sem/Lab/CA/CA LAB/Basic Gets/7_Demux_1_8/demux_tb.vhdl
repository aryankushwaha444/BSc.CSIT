library ieee;
use ieee.std_logic_1164.all;
entity demux_tb is
end demux_tb;

architecture test of demux_tb is
component demux

port
(
     i0,i1,i2,i3,i4,i5,i6,i7:out bit;
	 s2,s1,s0,d: in bit
);

end component;

signal s2,s1,s0,i0,i1,i2,i3,i4,i5,i6,i7,d: bit;
begin
demux_get : demux port map (s2=>s2,s1=>s1,s0=>s0,i0=>i0,i1=>i1,i2=>i2,i3=>i3,i4=>i4,i5=>i5,i6=>i6,i7=>i7,d=>d);

process begin

    s2<='0';
	s1<='0';
	s0<='0';
	d<='1';

    wait for 1 ns;

    s2<='0';
	s1<='0';
	s0<='1';
	d<='1';
    wait for 1 ns;

    s2<='0';
	s1<='1';
	s0<='0';
	d<='1';
    wait for 1 ns;
	
	s2<='0';
	s1<='1';
	s0<='1';
	d<='1';
    wait for 1 ns;
	
	s2<='1';
	s1<='0';
	s0<='0';
	d<='1';
    wait for 1 ns;
	
	s2<='1';
	s1<='0';
	s0<='1';
	d<='1';
    wait for 1 ns;
	
	s2<='1';
	s1<='1';
	s0<='0';
	d<='1';
    wait for 1 ns;
	
	s2<='1';
	s1<='1';
	s0<='1';
	d<='1';
    wait for 1 ns;


assert false report "Research end and of test ";
wait;
end process;
end test;

