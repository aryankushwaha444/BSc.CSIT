#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int A[4]={1,2,3,4};
	int C[4][4];
	int i,j;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
	
			if(i==j)
			{
				if(A[j]%A[i]==0)
				{
					C[i][i]=1;
				cout<<C[i][i]<<"\t";	
				}
						
			else
			{
				C[i][i]=0;
			cout<<C[i][i]<<"\t";
			} 
			}
				
			else
			{
				C[i][i]=0;
			cout<<C[i][i]<<"\t";
			} 
			
		}
		cout<<"\n";
	}
	
	return 0;
}