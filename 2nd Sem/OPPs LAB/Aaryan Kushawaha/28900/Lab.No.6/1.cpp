#include<iostream>

using namespace std;

class Person
{
	string perName;
	string address;
	float age;
	
	public :
		
		void getPerson()
		{
			cout<<"Enter Person Name = ";
			getline(cin>>ws,perName);
			cout<<"Enter Address = ";
			getline(cin>>ws,address);
			cout<<"Enter Age = ";
			cin>>age;
		}
		
		void infoPerson()
		{
			cout<<"\nPerson Name = "<<perName<<"\nAddress  = "<<address<<"\nAge = "<<age<<endl;
		}
	};
		
		class Author : private Person
{
	private :
		string FamBook;
		int year;
		
	public :
	
		
			void getAuthor()
			{
				cout<<"Enter Book Name : ";
				getline(cin>>ws,FamBook);
				cout<<"Enter Authorized Year : ";
				cin>>year;
			}
			
			void infoAuthor()
			{
				cout<<"Book Name = "<<FamBook<<"\nPubliced  Year = "<<year<<endl;
			}
			getPerson(void);
			infoPerson(void);
		
	/* void gp()
	{
		getPerson();
		}
		void ip()
		{
			infoPerson();
			}	
		*/
		
			
};
	

int main()
{
	
	Author aobj;
	aobj.getAuthor();
	aobj.getPerson();
	
	cout<<"\nDetails Author "<<endl;
	aobj.infoAuthor();
	
	return 0;
	
}