/// Lab.6 Q.No.8 :- WAP to find Largest number among two No. using function where, function has argument and no return value types.

#include<stdio.h>

void large (int a, int b);

int main()
{
	int x,y;
	printf("Enter Two No. :- ");
	scanf("%d %d",&x,&y);
	
	large(x,y);
	return 0;
	
}

void large (int a, int b)
{
//	int l;
	if(a>b)
	
	printf("Large = %d",a);
	else
	printf("Large = %d",b);
	
}
