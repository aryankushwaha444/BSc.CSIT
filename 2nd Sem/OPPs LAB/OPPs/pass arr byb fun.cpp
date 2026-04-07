#include<iostream>

using namespace std;

int add(int b[],int len)
{
	int i,sum=0;
	for(i=0;i<len;i++)
	{
		sum+=b[i];
	}
	return sum;
}

int main()
{
	int a[]={1,2,3,4};
	int len = sizeof(a)/4;
	cout<<add(a,len);
	return 0;
}