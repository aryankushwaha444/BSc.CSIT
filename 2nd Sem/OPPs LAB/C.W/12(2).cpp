#include<iostream>
#include<fstream>
#define FILE_NAME "Demo.dat"

using namespace std;

class People
{
	public :
		string name;
		int age;
		
		void getdata()
		{
			cout<<"Enter Name = ";
			getline(cin>>ws,name);
			cout<<"Enter Age = ";
			cin>>age;
		}
		void display()
		{
			cout<<"Name = "<<name<<endl<<"Age = "<<age<<endl;
		}
};

int main()
{
	People p[5],read[5];
	ofstream file;
	file.open(FILE_NAME);
	if(!file.is_open())
	{
		cout<<"Error "<<endl;
	}
	int i;
	for(i=0;i<2;i++)
	{
		p[i].getdata();
		file.write((char*)&p[i],sizeof(p[i]));
	}
	file.close();
	if(file.is_open())
	{
		cout<<"Data Write Successful..."<<endl;	
	}
	
 file.open(FILE_NAME);
 ofstream infile;
	for(i=0;i<2;i++)
	{
		infile.read((char*) &read[i],sizeof(read[i]));
		if(read[i].age>=30)
		{
				read[i].display();	
		}

	}
	infile.close();
	return 0;
	
	
}