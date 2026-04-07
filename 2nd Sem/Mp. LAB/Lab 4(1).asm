	   MVI H,C0
	   MVI L,50
	   MVI A,00
	   MOV B,M

X:	   ADD M
	   DCR B
	   JNZ X
	   STA C005
	   HLT
