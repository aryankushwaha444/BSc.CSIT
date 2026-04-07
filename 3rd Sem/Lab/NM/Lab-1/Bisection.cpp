#include<stdio.h>
#include<math.h>
#define f(x) x*x*x + x*x -3*x-3
//#define f(x) x*x*x - 2*x - 5
//#define f(x) x*x + tan(x) + exp(x)

int main()
{
	float x1,x2,x0,f1,f2,f0,e;
	printf("\nEnter the error criteria : ");
	scanf("%f",&e);
	
	up:printf("\nEnter two initial guesses: ");
	scanf("%f%f",&x1,&x2);
	f1=f(x1);
	f2=f(x2);
	int sn=0;
	
	if(f1*f2>0)
	{
		printf("\nWrong Initial Quess !!!");
		goto up;
	}
	printf("\nS.No x1\t\t\t x2\t\t\t x0\t\t\t f0");
	do
	{
		x0=(x1+x2)/2;
		f0=f(x0);
		sn+=1;
		printf("\n %d  %.3f\t\t%.3f\t\t\t%.3f\t\t\t%.3f",sn,x1,x2,x0,f0);
	
		if(f0*f1<0)
		{
			x2=x0;
			f2=f(x0);
		}
		else
		{
			x1=x0;
			f1=f(x0);
		}
		
	}while(fabs(f0)>e);
	
	printf("\n Required root is : %.3f",x0);
	printf("\n \t\tBy Aaryan Kushawaha ( 28900)");
	return 0;
	
	
}


