#include<iostream>

using namespace std;

int main()
{
	int A[3][3]={{1,0,1},{1,0,0},{1,0,1}};
	int B[3][3]={{0,0,1},{1,1,0},{0,1,0}};
	int C[3][3];
	int i,j,k,p;
	
		cout<<"Matrix A (3*3) is \n";
	for(i=0;i<3;i++)
	{
		cout<<"| ";
		for(j=0;j<3;j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<" |\n";
	}	
	
		
	cout<<"\nMatrix B (3*3) is \n";
	for(i=0;i<3;i++)
	{
		cout<<"| ";
		for(j=0;j<3;j++)
		{
			cout<<B[i][j]<<" ";
		}
		cout<<" |\n";
	}	
		
	cout<<"\nThe product of A & B (3*3) is \n";
	for(i=0;i<3;i++)
	{
		cout<<" |";
		for(j=0;j<3;j++)
		{
			p=0;
			for (k=0;k<3;k++)
			{
				p= p || ( A[i][k] && B[k][j] );
			}
			C[i][j]=p;
			cout<<C[i][j]<<" ";	
		
		}
		cout<<" |\n";
		
		}

	
	return 0;
	
}