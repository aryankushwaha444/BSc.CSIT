#include<iostream>

using namespace std;

class manager;

class teacher
{
	private :
		float tsalary;
		
		public :
		 void getteacher()
		 {
		 
			cout<<"Enter Teacher Salary : ";
			cin>>tsalary;
		}
		friend void display(teacher tr , manager mr );
};

class manager
{
	private :
		
		int msalary;
		
		public :
		 void getmanager()
           {
			cout<<"Enter Manager Salary : ";
			cin>>msalary;
		}
		friend void display(teacher tr , manager mr);
	};

void display(teacher tr , manager mr)
{   
cout<<"Sum of Salary Teacher & Manager is\n "<<tr.tsalary+mr.msalary;

}

int main()
{
	teacher tch;
	manager mn;
	tch.getteacher();
	mn.getmanager();
	
	display(tch,mn);
	return 0;
}