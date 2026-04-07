#include<iostream>
using namespace std;
int main()
{
    int x;
    int y;
    int i,temp;
    
    cout<<"Enter the Value of X = ";
    cin>>x;
    cout<<"Enter the Value of Y = ";
    cin>>y;
    
    if(x<y)
    {
    temp=x;
	x=y;
	y=temp;	
	}
	int a=x;
	int b=y;
	
  while(y!=0)
  {
  	i=x%y;
  	x=y;
  	y=i;
  }
  
cout<<"GCD ( "<<a<<","<<b<<") is "<<x;
    return 0;
}
