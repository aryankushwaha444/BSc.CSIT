#include <iostream>
#include <fstream>
#define NAME "Demo.txt"

using namespace std;
class Person
 {
public : 
        int age;
		string name;

public  :
		void setter()
		{
			cout<<"Enter your age:";
			cin>>age;
			cout<<"Enter your name: ";
			getline(cin>>ws,name);
		}
		void getter()
		{
			cout<<"Age : "<<age<<endl;
			cout<<"Name : "<<name<<endl;
		}
};

int main()
{	
	Person P[5],read[5];
	int i;
	for(i=0;i<2;i++)
	{
	P[i].setter();
    }
	fstream file;
	
	file.open(NAME);
	if(!file){
		cout<<"Error in creating file...\n";
	}
	for(i=0;i<5;i++)
	{
	file.write((char*)&P[i],sizeof(P[i]));
    }
	file.close();
	cout<<"Date saved into file "<<endl<<endl;
	
	file.open(NAME);
	if(!file)
	{
		cout<<"Error in opening file...\n";
	}
	for(i=0;i<2;i++)
	{
		file.read((char*)&read[i],sizeof(read[i]));
		if(read[i].age>=30)
		{
		read[i].getter();
	}	
}
	return 0;
}