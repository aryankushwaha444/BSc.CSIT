#include<iostream>

using namespace std;

class Student
{
	string name;
	int roll_no;
	
	public :
		
		friend istream &operator >>(istream &in , Student &st)
		{
			cout<<"Enter Name : ";
			getline(in>>ws,st.name);
			cout<<"Enter Roll No. ";
			in>>st.roll_no;
			return in;
		}
		
		friend ostream & operator <<(ostream &out , Student &st)
		{
			out<<"Name = "<<st.name<<endl<<"Roll No. "<<st.roll_no<<endl;
			return out;
		}
};
int main()
{
	Student obj;
	cin>>obj;
	cout<<obj;
	return 0;
}