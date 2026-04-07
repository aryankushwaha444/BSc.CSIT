#include<iostream>
using namespace std;

int main()
{
	int A[]={2,3,5,8,7,9,4,5};
	int B[]={2,6,4};
	
	int i,j;
	
	int m= sizeof(A)/4;
	int n=sizeof(B)/4;

	for(i=0;i<m;i++)
	{ 
	for(j=0;j<n;j++)
	{
		if(A[i]==B[j])
		{
		break;
		}
}
	if(j==n)
	{
	cout<<A[i]<<"\t";

	}
}
	return 0;
}
