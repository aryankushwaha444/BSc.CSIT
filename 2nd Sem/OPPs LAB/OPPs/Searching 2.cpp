/// Lab.6 Q.No.6 :- WAP to find Largest number among two No. using function where, function has no argument and no return value types.

#include<iostream>

using namespace std;

void large();

int main()
{
	large();
	return 0;
	
 } 
 
 void large()
 {
 int a[100],i,count=0,n,x;
 
 cout<<"Enter How Much Long Int. ";
 cin>>x;
 
 for(i=0;i<x;i++)
 {
 	cout<<"A["<<i<<"] : ";
 	cin>>a[i];
 }
 
 cout<<"Enter Searching No. ";
 cin>>n;
 
 for(i=0;i<x;i++)
 {
 	if(n==a[i])
	 {
	 	count++;
	 }
	
 }
 cout<<"Searchint No. is "<<n<<endl<<count<<" Times";
 }
