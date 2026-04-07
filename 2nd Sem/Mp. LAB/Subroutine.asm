	MVI B , 1E  
                         LXI H,8500
	   LXI D,9500

L2:	   MOV A,M
	   ANI 01
	   JNZ L1
	   MVI A,00
	   JMP L3

L1:	   MOV A,M

L3:	   STAX D
	   INX D
	   INX H
	   DCR B
	   JNZ L2
	   HLT
