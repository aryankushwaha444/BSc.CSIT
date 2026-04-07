	   LXI H,1020
	   LXI D,1121
	   MOV A,L
	   SUB E
	   MOV L,A
                           MOV A,H 
	   SBB D
	   MOV H,A
	   SHLD C050
	   HLT
