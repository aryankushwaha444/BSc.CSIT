	   LDA 8051
	   MOV C,A
	   LDA 8050
	   MVI B,00

L2:	   CMP C
	   JC L1
	   JZ L3
	   SUB C
	   INR B
	   JMP L2

L1:	   STA 8052

L3:	   STA 8052
	   MOV A,B
	   STA 8053
	   HLT
