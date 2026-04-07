#include<iostream>

using namespace std;

int search(int a[100] , int a , int b);

int main()
{ 
	int x , A[100] , y;
	//cot<<"Enter How Much long interger Store : ";
	search(A[100] , x , y);
	return 0;
	
}

int search(int a[100] , int a , int b)
{
	int i , n , m ;
	count = 0;
	
	cot<<"Enter How Much long interger Store : ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cout<<"A["<<i<<"] : ";
		cin>>a[i];
     }
     
     cout<<"Enter Searching No. ";
     cin>>m;
     for (i=0;i<n;i++)
     {
     	if(m==A[i])
     	{
     		count++;
		 }
	 }
	 
	 return (search(a[],n,m));
}
     