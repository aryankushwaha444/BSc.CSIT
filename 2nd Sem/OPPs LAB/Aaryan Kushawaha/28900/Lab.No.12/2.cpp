#include<iostream>
#include<fstream>
#define FILE_NAME "Data.dat"

using namespace std;

class People
{
	public :
		string name;
		int age;
		
		public :
			void getdata()
			{
				cout<<"Enter Age = ";
				cin>>age;
				cout<<"Enter Name = ";
				getline(cin>>ws,name);
			}
			
			void display()
			{
				
				cout<<"Age = "<<age<<"\nName = "<<name<<endl;
			}
	
};

int main()
{
	People p[5],readP[5];
	fstream file;
	file.open("Demo.txt");
	
	int i;
	for(i=0;i<2;i++)
	{
		p[i].getdata();
		file.write((char*)&p[i],sizeof(p[i]))<<endl;	
	}
	file.close();
	cout<<"\nData write Successful...."<<endl;

	file.open("Demo.txt");
	for(i=0;i<2;i++)
	{
		file.read((char*) &readP,sizeof(readP[i]));
		if(readP[i].age>=30)
		{
			readP[i].display();
		} 
	}
	file.close();

  return 0;			

}