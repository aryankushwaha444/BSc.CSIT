#include<iostream>

using namespace std;

class college;
class student
{
	private :
		string name;
		int id_no;
		string sec;
		long int ph_No;
		
		public :
			
		void getStudent()
			{
				/*
				name = "Aryan Kushwaha";
				id_no=28900;
				sec="A";
				ph_No=45835362;
				*/
				
				cout<<"Enter Name : ";
				getline(cin>>ws,name);
				cout<<"Enter Id_ No. : ";
				cin>>id_no;
				cout<<"Enter Sec. : ";
				getline(cin>>ws,sec);
				cout<<"Enter Phone No. ";
				cin>>ph_No;
			}
			
			friend class college;
		
};

class college
{
	public :
		void display (student cl)
		{
			cout<<"\nName = "<<cl.name<<"\nId-No. = "<<cl.id_no<<"\nSec = "<<cl.sec<<"\nPhone No. = "<<cl.ph_No<<endl;
		}
};

int main()
{
	student st;
	st.getStudent();
    college clz;
    clz.display(st);
    return 0;
	
}