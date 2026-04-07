library ieee; 
use ieee.std_logic_1164.all; 
entity paritygen_tb is 
end paritygen_tb; 
architecture test of paritygen_tb is 
component paritygen 
port (A,B,C: in std_logic; 
Ep, Op: out std_logic); 
end component; 
signal A,B,C,Ep,Op:std_logic; 
begin 
parity_gen : paritygen port map (A=>A, B=>B, C=>C, Ep=>Ep, Op=>Op); 
Process begin 
A<='0'; 
B<='0'; 
C<='0'; 
wait for 20 ns; 
A<='0'; 
B<='0'; 
C<='1'; 
wait for 20 ns; 
A<='0'; 
B<='1'; 
C<='0'; 
wait for 20 ns; 
A<='0'; 
B<='1'; 
C<='1'; 
wait for 20 ns; 
A<='1'; 
B<='0'; 
C<='0'; 
wait for 20 ns; 
A<='1'; 
B<='0'; 
C<='1'; 
wait for 20 ns; 
A<='1'; 
B<='1'; 
C<='0'; 
wait for 20 ns; 
A<='1'; 
B<='1'; 
C<='1'; 
wait for 20 ns; 
wait; 
end process; 
end test; 
