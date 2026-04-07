#include<iostream>

using namespace std;

int main()
{
	int A[3][4]={{0,1,0,1},{1,0,1,0},{1,1,1,1}};
	int B[3][4]={{1,0,1,1},{1,1,0,0},{1,1,1,0}};
	int C[3][4];
	int i,j;
	
	cout<<"Matrix A is \n";
	for(i=0;i<3;i++)
	{
		cout<<"| ";
		for(j=0;j<4;j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<" |\n";
	}	
	
		
	cout<<"\nMatrix B is \n";
	for(i=0;i<3;i++)
	{
		cout<<"| ";
		for(j=0;j<4;j++)
		{
			cout<<B[i][j]<<" ";
		}
		cout<<" |\n";
	}	
	
	cout<<"\nThe Join Matrix (A V B) is \n";
	for(i=0;i<3;i++)
	{
		cout<<"| ";
		for(j=0;j<4;j++)
		{
			C[i][j]=A[i][j] || B[i][j];
			cout<<C[i][j]<<" ";
		}
		cout<<" |\n";
	}
	
		cout<<"\nThe Meet Matrix (A ^ B) is \n";
	for(i=0;i<3;i++)
	{
		cout<<"| ";
		for(j=0;j<4;j++)
		{
			C[i][j]=A[i][j] && B[i][j];
			cout<<C[i][j]<<" ";
		}
		cout<<" |\n";
	}
	
	return 0;
	
}