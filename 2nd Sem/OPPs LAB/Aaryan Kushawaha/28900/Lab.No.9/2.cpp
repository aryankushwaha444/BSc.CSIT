#include<iostream>

using namespace std;

class Student
{
	int Num;
	
	public :
	
		void display()
		{
			cout<<"Number No. Students in CSIT = "<<Num<<endl;
		}
		
		void getStudent()
		{
			cout<<"Enetr Student Number CSIT : ";
			cin>>Num;
		}
		
	
		Student* operator ->()
		{
			return this;
		}
};

int main()
{
	Student sobj;
	sobj->getStudent();
	sobj->display();

	return 0;
}