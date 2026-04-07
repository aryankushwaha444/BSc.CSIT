/// Lab7. Q.No.7 :-  WAP that lowser case letter to upper case and upper case to lowser case by passing of pointer of function....

#include<stdio.h>

int main()
{
	char i;
	char j;
	
//	char a;
	char *x;
	char *c;
	c=&i;
	x=&j;
	int a;
	int b;
	printf("Your Character from to upto : ");
	scanf("%c %c",&i,&j);
	for(i=i;i<=j;i++)
	{
		printf("\t%c",*c);
		
	}
	printf("\nYour Letter Z-A\n");
	for(j=j;j>=i;j--)
	{
//	printf("\t");
		printf("\t%c",*x);
	}
	
	return 0;
}