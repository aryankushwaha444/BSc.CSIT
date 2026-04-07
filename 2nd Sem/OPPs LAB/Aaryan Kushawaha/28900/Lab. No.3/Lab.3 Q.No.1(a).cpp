#include<iostream>

using namespace std;

struct Dep

{
	string name;
	
	struct Emp
	
	{
		string name;
		int id_No;
		float salary;
		char ch;
		
	}e[5];
}d[3];

int main()
{
	int i,j;
	
	for(i=0;i<3;i++)
	{
			cout<<endl<<"Enter Department Name :";
			getline(cin>>ws,d[i].name);
		for(j=0;j<5;j++)
		{
			cout<<"Enter "<<j+1<<" Employee Details :"<<endl;
			cout<<"Enter Name : ";
			getline(cin>>ws,d[i].e[j].name);
			cout<<"Enter I'd No. ";
			cin>>d[i].e[j].id_No;
			cout<<"Enter Salary : ";
			cin>>d[i].e[j].salary;
			cout<<"You'r Head (Y/N) : ";
			cin>>d[i].e[j].ch;
		}
	}

cout<<endl<<"Dept.Name    Emp.\t Name  \tI'd No.\tSalary"<<endl<<endl;
for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			cout<<d[i].name<<"   \t"<<j+1<<"\t"<<d[i].e[j].name<<"\t"<<d[i].e[j].id_No<<"   \t"<<d[i].e[j].salary<<endl;
	        cout<<endl;
		}
	}
	

	return 0;
}

