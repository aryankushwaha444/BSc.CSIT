/* Q.1 :- WAP to find factorial using function , where function has no argument and no return value..
*/

#include<stdio.h>

void fact();

int main()
{

     fact(); 
     return 0;
}

void fact()
{
	int i,fact=1,n;
	printf("Enter value of n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Fact = %d",fact);
}