/// Lab.6 Q.No.6 :- WAP to find Largest number among two No. using function where, function has no argument and no return value types.

#include<stdio.h>

void large();

int main()
{
	
	
	
	large();
	return 0;
	
 } 
 
 void large()
 {
 	int x,y;
 	printf("Enter Two No. :-\n");
 	scanf("%d %d",&x,&y);
 	
 	if(x>y)
 	printf("Large = %d",x);
 	else
 	
 	printf("Large = %d",y);
 }
