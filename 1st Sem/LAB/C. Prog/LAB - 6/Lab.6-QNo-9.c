/// Lab.6 Q.No.9 :- WAP to find Largest number among two No. using function where, function has  argument and return value types.

#include<stdio.h>

int large (int a, int b);

int main()
{
	int x,y,l;
	printf("Enter Two No. :- ");
	scanf("%d %d",&x,&y);
	
	l=large(x,y);
	printf("Large = %d",l);
	return 0;
}

int large (int a, int b)
{
	if(a>b)
	return a;
	else
	return b;
	
}

