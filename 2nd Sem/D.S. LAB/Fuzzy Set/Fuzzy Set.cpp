#include<iostream>

using namespace std;

int main()
{
	int n,m,i,j;
		cout<<"Enter range of Set A : ";
	cin>>n;
	
	float A[n];
	
	cout<<" A {";
	for(i=0;i<n;i++)
	{
		
		cin>>A[i];
		cout<<",";
	}
	cout<<" }"<<endl;
	
	
	cout<<"Enter range of Set B : ";
	cin>>m;
	float B[m];
	cout<<" B {";
	for(j=0;j<m;j++)
	{	
		cin>>B[j];
		
		cout<<",";
	}
	cout<<" }"<<endl;
	
	cout<<"Fuzzy Set of Union : "<<endl;
	
	cout<<" U {";
	for(i=0,j=0;i<n;i++,j++)
	{
		if(A[i]>=B[j])
		{
				
		cout<<A[i];
		cout<<",";
		}
		
		else
		
		cout<<B[j];
		cout<<",";
		}
	
	cout<<" }";
	
	return 0;
}