library ieee; 
use ieee.std_logic_1164.all; 
entity paritycheck is 
port (A,B,C,D: in std_logic; 
Epc, Opc: out std_logic); 
end paritycheck; 
architecture behave of paritycheck is 
begin 
Epc<= ((A Xor B) Xor (C Xor D)); 
Opc <= not ((A Xor B) Xor (C Xor D)); 
end behave; 
