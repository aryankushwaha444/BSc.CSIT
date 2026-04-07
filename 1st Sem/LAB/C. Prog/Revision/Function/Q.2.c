/* Q.1 :- WAP to find factorial using function , where function has no argument and return value..
*/

#include<stdio.h>

int fact();

int main()
{
 int b;

   // b = fact(); 
    	printf("Fact = %d",fact());
     return 0;
}

int fact()
{
	int i,fact=1,n;
	printf("Enter value of n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;

}