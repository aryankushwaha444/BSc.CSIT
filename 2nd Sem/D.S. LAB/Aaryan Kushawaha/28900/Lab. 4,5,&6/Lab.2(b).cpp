#include<iostream>

using namespace std;

int main()
{
	float  n;
	int Ceiling , Floor;
	
	cout<<"Enter Any No. ";
	cin>>n;
	
	Floor = (n*10)/10;
	
	if(Floor==n)
	
    {
    	cout<<"Floor is "<<Floor<<"\n Ceiling is "<<Floor;
	}
	else if (Floor<=-0)
	{
		cout<<"Floor is "<<Floor-1<<"\n Ceiling is "<<Floor;
	}
	
	else
	cout<<"Floor is "<<Floor<<"\n Ceiling is "<<1+Floor;
	
	return 0;
	
}