#include<iostream>

using namespace std;

int main()
{
	int A[]={2,3,5,8,7,9,4};
	int B[]={11,4,6,85,20,22,28,15};
	int i,j;
	
	int m= sizeof(A)/4;
	int n=sizeof(B)/4;
	int z=m+n;
	int U[z];
	int temp;
	
	for(i=0;i<m;i++)
	{
		U[i]=A[i];
	}
	
	for(j=0;j<n;j++)
	{
		U[i++]=B[j];
	}
	
	for(i=0;i<z;i++)
	{
		for(j=i+1;j<z;j++)
		{
			if(U[i]==U[j])
			{
				for(i=j;i<z;i++)
				{
					U[i]=U[i+1];
				}
				z--;
			}
		}
	}
	
	for(i=0;i<z-1;i++)
	{
		for(j=i+1;j<z;j++)
		{
			if(U[i]>U[j])
			{
				temp=U[i];
				U[i]=U[j];
				U[j]=temp;
			}
		}
	}
	
	for(i=0;i<z;i++)
	{
		cout<<U[i]<<"\t";
	}

	return 0;
}