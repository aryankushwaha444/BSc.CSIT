#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,k;
	printf("\n Enter the no of data provided(n):");
	scanf("%d",&n);
	float x[n], y[n],diff[n][n],xp,p,h,nr=1.0,dr=1.0,yp;
	printf("\n Enter the values of x[n]:");
	for(i=0;i<=n;i++)
	scanf("%f",&x[n]);
	printf("\n Enter the values of y[n]:");
	for(i=0;i<=n;i++)
	scanf("%f",&y[n]);
	for(i=0;i<n;i++)
	diff[i][1]=y[i+1]-y[i];
	for(j=2;i<n;j++){
	
		for(i=0;i<n-j;i++){
		
		diff[i][j]=diff[i+1][j-1]-diff[i][j-1];}}
	printf("\n Enter the value of x where we need find y:");
	scanf("%f",&xp);
	h=x[1]-x[0];
	p=(xp-x[0])/h;
	yp=y[0];
	for(k=1;k<n;k++)
	{
		nr*=p-k+1;
		dr*=k;
		yp+=(nr/dr)*diff[i][k];
		printf("\n%f",yp);
	}
	printf("\n\n The required value of yp at x= %f is %f",xp,yp);
	printf("\n\t\tThis Program written by Aryan Kushawaha ( 28900)");
	return 0;
	}
