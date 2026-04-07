	   LDA 2051
	   MOV B,A
	   LDA 2050
	   CMP B
	   JNC X
	   MOV A,B

X:	   STA 2055
	   HLT
