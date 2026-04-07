library ieee;
use ieee.std_logic_1164.all;
entity demux is
port
(
     i0,i1,i2,i3,i4,i5,i6,i7:out bit;
	 s2,s1,s0,d: in bit
);
end demux;

architecture behave of demux is
begin

i0<= not s2 and not s1 and not s0 and d;
i1<= not s2 and not s1 and s0 and d;
i2<= not s2 and s1 and not s0 and d;
i3<= not s2 and s1 and s0 and d;
i4<= s2 and not s1 and not s0 and d;
i5<= s2 and not s1 and s0 and d;
i6<= s2 and s1 and not s0 and d;
i7<= s2 and s1 and s0 and d;

end behave;