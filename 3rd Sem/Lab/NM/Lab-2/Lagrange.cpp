#include<stdio.h>

int main()
{
    int n,i,j;
	printf("\n Enter the no of data provided(n):");
	scanf("%d",&n);
	float x[n], y[n],p,xp,sum;
    printf("\nEnter the values in form x,y:\n");
    for (i=0;i<=n;i++)
    scanf("%f %f",&x[i],&y[i]);
    printf("\nEnter the value of x for which the value of y is wanted: \n");
    scanf("%f",&xp);
    for (i=0;i<=n;i++)
	{
	    p=1;
		for (j=0;j<=n;j++)
		{
	    if(i!=j)
			{
      		 p=p*(xp-x[j])/(x[i]-x[j]);
	  		}
		}
	sum = sum+ p*y[i];
	}
	
	printf("\n\n Required value of y at x= %f is %f",xp, sum);
	printf("\n\t\tThis Program written by Aryan Kushawaha ( 28900)");
	return 0;
}
	
