#include<iostream>

using namespace std;

class Student
{
	string name;
	int roll;
	
	public :
		void getdata(string name1 ="dhh", int roll1=05)
		{
			name=name1;
			roll=roll1;
		}
		void display()
		{
			cout<<"Name = "<<name;
			cout<<"\n Roll = "<<roll;
		}		
};

int main()
{
	Student st;
	st.getdata("Kushwaha",06);
	st.display();
	return 0;
}