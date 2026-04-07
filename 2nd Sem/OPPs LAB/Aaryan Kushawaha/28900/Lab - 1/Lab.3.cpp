#include<iostream>

using namespace std;

int main()
{
	float Marks;
	
	cout<<"Enter OPPs Marks : ";
	cin>>Marks;
	
	if(Marks>=90 && Marks<=100)
	{
		cout<<"Congs !! You get Score 'A";
	}
	else if(Marks>=80 && Marks<90)
	{
			cout<<"Congs !! You get Score 'B";
	}
	else if(Marks>=70 && Marks<80)
	{
			cout<<"Congs !! You get Score 'C";
	}
	else if (Marks>=60 && Marks<70)
	{
			cout<<"Congs !! You get Score 'D";
	}
	else if(Marks>=0 && Marks <60)
	{
			cout<<"Try Again !! You get Score 'F'";
	}
	else
	 
		
		cout<<"Sorry !!! Your Marks is Negative ....";
	
	return 0;
}