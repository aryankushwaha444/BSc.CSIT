/// Lab.7 Q.No. 6 :- WAP to illustrate the use of Array of Pointer....

#include<stdio.h>

const int MAX=4;

int main()
{
	char *names[]={"Ram raj","Shyam Kr","Bipin Kr","sara Ali"};
	
	int i;
	
	for(i=0;i<MAX;i++)
	{
		printf("Value of Names[%d]=%s\n",i,names[i]);
	}
	
	
	return 0;
}