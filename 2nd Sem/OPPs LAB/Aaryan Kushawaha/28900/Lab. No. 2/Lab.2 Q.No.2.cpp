#include<iostream>
 
 using namespace std;
 void max(int *ptr);
 
 int main()
 {
 	int (*ptrr)(int *ptr);
 	int c;
 	ptr=max(c);
 	return 0;
 }
 
 void max(int *ptr)
 {
 	int i,n;
	 int a[100];
 	int max;
 	
 	cout<<"Enter Nth Terms : ";
 	cin>>n;
 	
 	
 	for(i=0;i<n;i++)
 	{
 	
 		cout<<"A["<<i<<"] : ";
 		cin>>a[i];
 	
	 }
	 max=a[0];
	 for(i=0;i<n;i++)
	 {
	 	ptr=&a[i];
	 	if(max< *ptr)
	 	{
	 		max= *ptr;
		 }
	 }
	 cout<<"Max : "<<max;
 	
 }
