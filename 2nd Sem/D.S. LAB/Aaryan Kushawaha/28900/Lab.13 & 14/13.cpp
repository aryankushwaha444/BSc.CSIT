#include<iostream>
#include<cmath>
using namespace std;

int pow(int a, int n);
int main()
{
	int x,y;
	
	cout<<"Enter the value of Base & Power : ";
	cin>>x>>y;

	cout<<"Pow("<<x<<","<<y<<") = "<<pow(x,y);

	return 0;
	
}

int pow(int a , int n)
{
	if(!n==0)
	{
		return (a*pow(a,n-1));
	}
	else
	return 1;
}