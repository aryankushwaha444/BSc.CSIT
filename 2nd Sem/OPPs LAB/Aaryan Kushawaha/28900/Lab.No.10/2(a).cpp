#include<iostream>

using namespace std;

template <typename T>

class Student
{
	string name;
	string sec;
	T marks;
	
	public :
		
		void getWeight()
		{
			cout<<"Enter Student Name : ";
		     getline(cin>>ws,name);
		     cout<<"Enter Sec. : ";
		     getline(cin>>ws,sec);
		     cout<<"Enter Marks : " ;
		     cin>>marks;
		}
		
		void Display()
		{
			cout<<"\nName = "<<name<<endl<<"Sec. = "<<sec<<endl<<"Marks = "<<marks<<endl;
		}
			
};

int main()
{
	Student <int> sobj;
	sobj.getWeight();
	sobj.Display();
	
	Student <float>sobj1;
	sobj1.getWeight();
	sobj1.Display();
	
	return 0;
}