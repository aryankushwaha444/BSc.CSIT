
#include<iostream>

using namespace std;

int main()
{
	int Age , Weight , Exp ;
    char a[50];
    cout<<"Enter Applicant Details "<<endl<<"Enter Your Name : ";
    cin.get(a,50);
    
cout<<"Enter Your Age , Weight & Experience "<<endl;
cin>>Age>>Weight>>Exp;

if(Exp>4 && Weight>=35 && Age >=18)
{

	cout<<"You meet the required credentials for the job";
		
}
     else if(Exp>=0  && Weight>=50 && Age>=18 && Age<=24)
      {

		cout<<"You meet the required credentials for the job";
	
	}
		
      
  else
    {
		cout<<"You Can't' meet the required credentials for the job";
    }
	
	return 0;
	
}