#include<iostream>
using namespace std;
class Student
{
	string name;
	int marks;
	
	public :
		void data(string name="djh")
		{
			this->name=name;
		//	this->marks=marks;
		}
		
		void data(string name="RN" , int marks=0)
		{
			this->name=name;
			this->marks=marks;
		void display()
		{
			cout<<"Name = "<<name<<" Marks = "<<marks<<endl;
		}
};
int main()
{
	Student obj;
	obj.data("Aryan");
	obj.display();
	obj.data("Kushwaha",98);
	obj.display();
	
	return 0;
	}