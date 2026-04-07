library ieee;
use ieee.std_logic_1164.all;
entity de is
port
(
     x,y,z: in bit;
	 d0,d1,d2,d3,d4,d5,d6,d7: out bit
);
end de;

architecture behave of de is
begin
d0 <= (not x) and (not y) and (not z);
d1 <= (not x) and (not y) and z;
d2 <= (not x) and y and (not z);
d3 <= (not x) and y and  z;
d4 <=  x and (not y) and  (not z);
d5 <=  x and (not y) and z;
d6 <=  x and y and (not z);
d7 <=  x and y and z;


end behave;