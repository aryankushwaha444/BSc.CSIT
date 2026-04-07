library ieee; 
use ieee.std_logic_1164.all; 
entity psub is 
port( 
A, B: in std_logic_vector(3 downto 0); 
S: out std_logic_vector(3 downto 0); 
cin: in std_logic; 
cout: out std_logic 
); 
end psub; 
architecture behave of psub is 
begin 
process(A, B, cin) 
variable t: std_logic; 
begin 
t:=cin; 
for i in 0 to 3 loop 
cout<=t; 
S(i)<=A(i) xor (not(B(i))) xor t; 
t:=(A(i) and not(B(i))) or (t and A(i)) or (t and not(B(i))); 
end loop; 
end process; 
end behave; 
