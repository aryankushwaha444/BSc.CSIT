/* Q.1 :- WAP to find factorial using function , where function has argument and return value..
*/

#include<stdio.h>

int fact(int n);

int main()
{ int n,b;
	printf("Enter value of n : ");
	scanf("%d",&n);

    b = fact(n); 
    	printf("Fact = %d",b);
     return 0;
}

int fact(int n)
{
	int i,fact=1;
	for(i=0;i<n;i++)
	{
		fact=fact+fact*i;
	}
	return fact;

}