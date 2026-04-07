#include<iostream>

using namespace std;

template <typename T>

void Number()
{
	T x,y,temp;
	cout<<"Enter the value of X & Y : ";
	cin>>x>>y;
	
	cout<<"Before Swap Value \nX = "<<x<<"\nY = "<<y<<endl;
	
	temp=x;
	x=y;
	y=temp;
	
	cout<<"After Swaped Value \nX = "<<x<<"\nY = "<<y<<endl;
	
}

int main()
{
	cout<<"Enter for Int Value:"<<endl;
	Number<int>();
/*	cout<<"Enter for Float Value:"<<endl;
	Number<float>();
	cout<<"Enter for Character Value:"<<endl;
	Number<char>(); */
	
	return 0;
}