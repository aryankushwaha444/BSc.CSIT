#include<iostream>
using namespace std;

class License
{
	string name;
	int age;
	public :
	
	
		void getLicense()
		{
				cout<<"Enter Name = ";
				getline(cin>>ws,name);
				cout<<"Enter Age = ";
				cin>>age;
				
				if(age<16)
				{
					throw *this;	
				}
			}
			
			void display()
			{
				cout<<"You can apply License "<<endl;
				cout<<"Name = "<<name<<endl<<"Age = "<<age<<endl;
					}
					int retage()
					{
						return age;
							}		
};

int main()
{
	License obj;
	try
	{
    	obj.getLicense();
		obj.display();	
	}
	catch(License pr)
	{
		 cout<<"You can't apply License "<<endl;
			cout<<"Your age is less than 16 "<<endl<<"Age = "<<pr.retage()<<endl;
		}

	return 0;
}                 