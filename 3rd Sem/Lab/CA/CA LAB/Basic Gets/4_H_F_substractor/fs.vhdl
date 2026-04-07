library ieee;
use ieee.std_logic_1164.all;
entity fs is
port
(
     a,b,bin: in bit;
	 d,Bo: out bit
);
end fs;

architecture behave of fs is
begin
d<= ( a xor b ) xor bin;
Bo<= ( not a and bin ) or (not a and b) or (b and bin);

end behave;