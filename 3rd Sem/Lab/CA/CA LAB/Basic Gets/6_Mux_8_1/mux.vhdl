library ieee;
use ieee.std_logic_1164.all;
entity mux is
port
(
     s2,s1,s0,i0,i1,i2,i3,i4,i5,i6,i7: in bit;
	 o: out bit
);
end mux;

architecture behave of mux is
begin
o<= ( not s2 and not s1 and not s0 and i0 ) or ( not s2 and not s1 and  s0 and i1 ) or ( not s2 and s1 and not s0 and i2 ) or (not s2 and s1 and  s0 and i3 ) or ( s2 and not s1 and not s0 and i4 ) or (  s2 and not s1 and s0 and i5 ) or (  s2 and  s1 and not s0 and i6 ) or (  s2 and  s1 and  s0 and i7 );



end behave;