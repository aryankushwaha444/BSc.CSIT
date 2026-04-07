#include<stdio.h>
#include<math.h>
#define f(x) 3*x - cos(x)-1
#define g(x) 3+sin(x)
//#define f(x) exp - 2*x
//#define g(x) exp - 2

int main()
{
	float x1,x0,f1,g0,f0,e;
	int sn=0;
	printf("\nEnter the error criterion : ");
	scanf("%f",&e);
	
	up:printf("\nEnter initial guesses: ");
	scanf("%f",&x0);
	
	printf("\nS.No.\t\t x0\t\t x1\t\t f1");
	do
	{
		f0=f(x0);
		g0=g(x0);
		x1=x0-f0/g0;
		f1=f(x1);
		sn++;
		printf("\n%d\t\t%.4f\t\t%.4f\t\t%.4f",sn,x0,x1,f1);
		
		x0=x1;
		
	}while(fabs(f1)>e);
	printf("\nRequired root is : %.4f",x1);
	printf("\n \t\tBy Aaryan Kushawaha ( 28900)");
	return 0;
}
	
