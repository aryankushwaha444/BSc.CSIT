#include<iostream>
#include<fstream>
using namespace std;

class person
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
			cout<<"Name = "<<name<<"\nAge = "<<age<<endl;
			
		}
		
};

int main()
{
	person p[5],read[5];
	int i;
		fstream file;
	file.open("Sample.txt",ios::out|ios::binary);
		if(!file)
	{
		cout<<"Error File Open !!!!!"<<endl;
	}
	for(i=0;i<2;i++)
	{
		p[i].getdata();
		file.write((char*)&p[i],sizeof(p[i]));
	}

	cout<<"Data Write Successful...."<<endl;
	file.close();
	
	cout<<"Details information "<<endl;
	file.open("Sample.txt",ios::in|ios::binary);
		if(!file)
	{
		cout<<"Error File Open !!!!!"<<endl;
	} 
	
	for(i=0;i<2;i++)
	{
		file.read((char*)&read[i],sizeof(read[i]));
		
		if(read[i].age>=30)
		{
			read[i].display();
		}

	file.close();
	return 0;
	

}