#include<iostream>

using namespace std;

class Address
{
	string city;
	string zone;
	
	public :
		Address()
		{
		}
		
		Address(string city , string zone)
		{
			this->city=city;
			this->zone=zone;
		}
		
		void disp()
		{
			cout<<"City = "<<city<<endl<<"Zone = "<<zone<<endl;
		}
		
};

class Student
{
	string name;
	int marks;
	Address  *address;
	public :
		Student()
		{
			
		}
		Student(string name , int marks , Address *address)
		{
			this->name=name;
			this->marks=marks;
			this->address=address;		
		}
		void display()
		{
			cout<<"Name = "<<name<<endl<<"Marks = "<<marks<<endl;
			address->disp();
		}
};

int main()
{
	Address al=Address("Barahathawa","Janakpur");
	Student st=Student("Aryan",98,&al);
	st.display();
	return 0;
}