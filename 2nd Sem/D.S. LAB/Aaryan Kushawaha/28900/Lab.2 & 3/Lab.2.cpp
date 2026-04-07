#include<iostream>

using namespace std;

int main()

{
	int i,j;
	int A[]={1,2,4,5,8,9};
	int B[]={7,3,4};
	
	int m=sizeof(A)/4;
	int n=sizeof(B)/4;
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"("<<A[i]<<","<<B[j]<<")\t";
		}
		cout<<endl;
	}
	
	return 0;
}