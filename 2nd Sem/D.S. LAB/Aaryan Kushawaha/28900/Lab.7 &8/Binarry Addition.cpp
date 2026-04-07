#include<iostream>
//#include<cmath>
#include<math.h>

using namespace std;

int main()
{
	int B1,B2;
	cout<<"Enter 1st Binary No. : ";
	cin>>B1;
	cout<<"Enter 2nd Binary No. : ";
	cin>>B2;
	
	int result , m=0,carry=0,place=1;
	int x=max(B1,B2),y=min(B1,B2),a,b;
	
	while(x>=0)
	{
		a=x%10;
		b=y%10;
		result =((a+b+carry)%2)*place + result;
		carry=(a+b+carry)/2;
		
		x=x/10;
		y=y/10;
		place=place*10;
		
		if(x==0 && carry==0)
		{
			break;
		}
		
	}
	cout<<result;
	
	return 0;
	
}