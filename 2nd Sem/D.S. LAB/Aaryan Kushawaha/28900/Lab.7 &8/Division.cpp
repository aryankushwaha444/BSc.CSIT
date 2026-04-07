#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int a,d,q=0,r;
cout<<"Enter Any Divident Number : ";
cin>>a;
cout<<"Enter Any Divisor Number :  ";
cin>>d;

r=abs(a);
while (r>=d)
{
	r=r-d;
	q++;
}

if(a<0 && r>0)

{
	r=d-r;
	q=-(q+1);
} 

cout<<"\nQuotient = "<<q<<"\nReminder = "<<r<<endl;
	
	return 0;
}