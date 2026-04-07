#include<stdio.h>
#include<math.h>
#define f(x) cos(x) - x*exp(x)
//#define f(x) exp(cos(x)) + sin(x)

int main()
{
	float x0,x1,x2,f0,f1,f2,e;
	printf("\nEnter the error criterion : ");
	scanf("%f",&e);
	int sn=0;
	
	up:printf("\nEnter two initial guesses: ");
	scanf("%f%f",&x0,&x1);
     
    printf("\nS.No\t\t x0\t\t x1\t\t x2\t\t f2");
    do
    {
    	sn++;
    	f0=f(x0);
    	f1=f(x1);
    	x2=(x0*f1-x1*f0)/(f1-f0);
    	f2=f(x2);
    	printf("\n%d\t\t%.4f\t\t%.4f\t\t%.4f\t\t%.4f",sn,x0,x1,x2,f2);
    	x0=x1;
    	x1=x2;	
	}while(fabs(f2)>e);
	printf("\n Required root is %.4f",x1);
	printf("\n \t\tBy Aaryan Kushawaha ( 28900)");
	return 0;
}
    