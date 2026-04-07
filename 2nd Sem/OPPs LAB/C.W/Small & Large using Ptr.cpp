#include<iostream>

using namespace std;

int main()
{
	int i,small,large,n,a[n];
	int *ptr;
	
	cout<<"Enter Nth Terms : ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cout<<"A["<<i<<"]: ";
		cin>>a[i];
	}
	
	small=a[0];
	large=a[0];
	for(i=0;i<n;i++)
	{
		ptr=&a[i];
		if(small>*ptr)
		small=*ptr;
		
		if(large<*ptr)
		large=*ptr;
		
	}
	
	cout<<"Small = "<<small<<"\nLarge = "<<large<<endl;
	
	return 0;
	
}