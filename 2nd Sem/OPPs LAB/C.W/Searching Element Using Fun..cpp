#include<iostream>

using namespace std;

void search(int n , int a[],int b);

int main()
{
	int n , a[n],b,i;
	
	cout<<"Enter Nth Terms : ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cout<<"A["<<i<<"] : ";
		cin>>a[i];
	}
	
	cout<<"Enter Searching No. ";
	cin>>b;
	
	search(n,a,b);
	return 0;
}

void search(int n ,int a[], int b)
{
	int i;
	static int count;
	for(i=0;i<n;i++)
	{
		if(a[i]==b)
		{
			count++;
		}
	}
	cout<<"Searching No. is "<<b<<"\n"<<count<<" times"<<endl;
	
}