#include<iostream>

using namespace std;

int  main()

{
	int a=0 , b=1 , sum=0  ,i, n;
	
	cout<<"Enter nth trems : ";
	cin>>n;
	
	cout<<"The Fabonnic No. of "<<n<<"\t is \t";
	for(i=0;i<n;i++)
	{
		
	cout<<sum <<"\t";
		a=b;
		b=sum;
		sum=a+b;
	
	}
	
	return 0;
	
}