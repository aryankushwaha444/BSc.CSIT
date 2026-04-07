library ieee; 
use ieee.std_logic_1164.all; 
entity paritygen is 
port (A,B,C: in std_logic; 
Ep, Op: out std_logic); 
end paritygen; 
architecture behave of paritygen is 
begin 
Ep<= (A Xor(B Xor C)); 
Op <= not (A Xor(B Xor C)); 
end behave; 