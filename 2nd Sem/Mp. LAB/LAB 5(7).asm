
                           LHLD 2000
	   MVI B,01
	   MVI C,10
	   MVI A,00

X:	   ADD B
	   INX H
	   INR B
	   DCR C
	   JNZ X
	   STA 2055
	   HLT
