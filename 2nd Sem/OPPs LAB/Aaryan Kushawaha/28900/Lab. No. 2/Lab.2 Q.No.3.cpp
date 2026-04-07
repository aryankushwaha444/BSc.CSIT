/*(3) Write a program to find the sum of 1 - (22/2!) + (32/3!) - (42/4!) + (52/5!) - ..... (n2/n!). 
[Use recursion for the factorial part]. */

#include<iostream>
#include<math.h>

using namespace std;

void sum(float n);

int main()
{
	float a ,b, y;
	
	cout<<"Enter Nth Terms : ";
	cin>>a;
	
   y=sum(a);
   cout<<"Sum of Series is "<<y;
	
	return 0;
}

int sum(float n)
{
	float sum=0;
	int i;
	long fab=1;
	float s;
	
	for(i=1;i<=n;i++)
	{
		fab=fab*i;
		if(i%2==0)
		{
		
			sum-=pow(i,2)/fab;
         	}
			else
            	{
					sum+=pow(i,2)/fab;
                	}
		 s=sum;
	}
	return (s);
	
	
}
