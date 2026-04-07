library ieee;
use ieee.std_logic_1164.all;
entity hs is
port
(
     a,b: in bit;
	 d,Bo: out bit
);
end hs;

architecture behave of hs is
begin
d<= a xor b;
Bo<= not a and b;

end behave;