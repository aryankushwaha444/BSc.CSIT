/// Lab.6 Q.No.7 :- WAP to find Largest number among two No. using function where, function has no argument and return value types.

#include<stdio.h>

int large ();

int main()
{
	int l;
	l=large();
	printf("Large = %d",l);
	
	return 0;
}
int large()
{
	int x,y;
	printf("Enter Two No. :- ");
	scanf("%d %d",&x,&y);
	if(x>y)
	return x;
	else
	return y;
}
