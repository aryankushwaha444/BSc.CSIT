#include<iostream>
#include<math.h>

using namespace std;

int fab(int a);

int  main()
{
	int i , n ,t;
	float sum,f;
	
	cout<<"Enter Nth Terms : ";
	cin>>n;
	 
	
	sum=0;
	 for(i=1;i<=n;i++)
	 {
	 	if(i%2==1)
	 	{
	 		sum+=pow(i,2)/fab(i);
		 }
		 else
		 {
		 	sum-=pow(i,2)/fab(i);
		 }
	 }
	 
	 cout<<"Sum of Factorial : "<<sum;
	 
	 return 0;
	
}

int fab(int a)
{
	if (a==0||a==1)
		return 1;
	else
		return (a * fab(a-1));
}
