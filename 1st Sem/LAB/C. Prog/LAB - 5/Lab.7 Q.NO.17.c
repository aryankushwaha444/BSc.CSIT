/// Lab. 7 Q.No. 17 :-   WAP to demostrate thew user of strcmp () Function....

#include<stdio.h> 
#include<string.h>

int main()

{
	char studentname[559585];
	strcpy(studentname,"Amita");
	
	
if (strcmp(studentname,"Amita")==0)
		printf("\n Well - Come");
 else
	
	printf("\n Sorry");
    

	
	
	
	return 0;
}