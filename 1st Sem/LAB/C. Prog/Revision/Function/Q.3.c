/* Q.1 :- WAP to find factorial using function , where function has  argument and no return value..
*/

#include<stdio.h>

void fact (int a);

int main()
{
 int n;
  printf("Enter Value of n ");
  scanf("%d",&n);
   fact(n);
   return 0;
}

void fact(int a)
{
    int i, f=1;
	for(i=0;i<a;i++)
	{
		f=f+f*i;
	}
		 printf("Fact = %d",f);
}