/// Lab.9 Q.No.1 :- Program to open a File , Write in it , And Close lhe file..

#include<stdio.h>

int main()
{
	FILE *fpt;
	fpt=fopen("A:// CSIT.txt","w");
	
	if(fpt==NULL)
	{
		printf("CSIT.txt file failed to open");
	}
	else
	{
		printf("The file in now opened.\n");
	}
	fputs("We love CSIT",fpt);
	fclose(fpt);
	
	return 0;
}