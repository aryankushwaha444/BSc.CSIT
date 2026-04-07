	   LHLD C052
	   XCHG
	   LHLD C050
	   MOV A,L
	   SUB E
	   MOV L,A
	   MOV A,H
	   SBB D
	   MOV H,A
	   SHLD C055
	   HLT
