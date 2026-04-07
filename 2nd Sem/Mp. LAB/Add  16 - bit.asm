	   LXI H,1020
	   LXI D,1121
	   MOV A,L
	   ADD E
	   MOV L,A
	   MOV A,H
	   ADC D
	   MOV H,A
	   SHLD C050
	   HLT
