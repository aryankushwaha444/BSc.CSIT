#include<iostream>

using namespace std;

int Product(int a, int b, int c);
float Product(float x, float y, float z);

int  main()
{
	int a , b , c;
	float x , y, z;
	char ch;
	
	cout<<"Which Calculation You Need : "<<endl;
	cout<<"Integer for i/I : "<<endl<<"Floatinf for f/F :"<<endl;
	cin>>ch;
	
	if(ch=='I' || ch=='i')
	{
		cout<<"You Chooice Integer No. : "<<endl<<"Enter Three No."<<endl;
		cin>>a>>b>>c;
		cout<<"Product of 3 integer No. is "<<Product(a,b,c);
	}
	else if(ch=='f' || ch=='F')
	{
		cout<<"You Chooice Flooting No.: "<<endl<<"Enter Three NO."<<endl;
		cin>>x>>y>>z;
		cout<<"Product of 3 flooting No. is "<<Product(x,y,z);
	}
	else
	cout<<"Sorry !!!!! You'r Wrong....";

	return 0;
	
}

int Product(int a, int b, int c)
{
	int Pro;
	Pro=a*b*c;
	return (Pro);
}

float Product(float x, float y, float z)
{
	float Proo;
	Proo=x*y*z;
	return (Proo);
}