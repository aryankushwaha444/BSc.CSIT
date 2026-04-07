#include<iostream>

using namespace std;

int main()
{
	int x;
	int y;
	
	cout<<"Enter the Value of X = ";
	cin>>x;
	
	cout<<"Enter the Value of Y = ";
	cin>>y;
	
	int s0=1,s1=0,t0=0,t1=1;
	int q,r,s,t,temp;
	
	if(x<y)
	{
		temp=x;
		x=y;
		y=temp;
	}
	int a=x;
	int b=y;
	
	while (y!=0)
	{
		q=x/y;
		r=x%y;
		s=s0-(q*s1);
		t=t0-(q*t1);
		x=y;
		y=r;
		t0=t1;
		t1=t;
		s0=s1;
		s1=s;
	}
	
	cout<<"Using linear Combination GCD ("<<a<<","<<b<<") is "<<x<<"\n Value of s = "<<s0<<"\nValue of t = "<<t0;
	
	return 0;
}