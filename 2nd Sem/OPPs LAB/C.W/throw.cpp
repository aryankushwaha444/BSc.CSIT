#include<iostream>

using namespace std;

class student
{
	string name;
	int age;
	
	public :
		void getStudent ()
		{
			try
			{
				cout<<"Enter Name : ";
			getline(cin>>ws,name);
			
			cout<<"Enter Age : ";
			cin>>age;
			
			if(age<=0)
			{
				throw age;
			}	
		else
		{
		cout<<"Name = "<<name<<endl<<"Age = "<<age<<endl;
		}	}
		
			catch(int ag)
			{
				if(ag==0)
				throw ag;
				cout<<"Error !!! Negative Your Age is "<<ag<<endl;				
			}
}
};

int main()
{
	student obj;
	try
	{
	
	obj.getStudent();
}
	
	catch(int g)
			{
			cout<<"Error !!! Zero Your Age is "<<g<<endl;
			}
		
	return  0;
}