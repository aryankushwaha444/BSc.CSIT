#include<iostream>

using namespace std;

class Student
{
	string name;
	float marks;
	int roll_no;
	public :
	
		
			void getStudent()
			{
				try
				{
				
				cout<<"Enter Name = ";
				getline(cin>>ws,name);
				
				cout<<"Enter Marks = ";
				cin>>marks;
				
				cout<<"Enter Roll No. ";
				cin>>roll_no;
				
				if(marks<-0)
				{
					throw marks;
				}
				cout<<"Name = "<<name<<endl<<"Marks = "<<marks<<endl<<"Roll No. = "<<roll_no<<endl;
		
			}
					
			catch(...)
			{
				cout<<"Your Marks is Negative "<<endl;
			   }
		}
		
};

int main()
{
	Student obj;
	obj.getStudent();	
	
	return 0;
	
}