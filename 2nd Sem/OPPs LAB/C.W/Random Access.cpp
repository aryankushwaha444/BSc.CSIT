#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream obj("One.txt");
	cout<<obj.tellp()<<endl;
	obj<<"Hello RN  ";
	cout<<obj.tellp()<<endl;
	obj.seekp(-2,ios::end);
	cout<<obj.tellp()<<endl;
	obj<<" today is Valentines Day !!!!";
	obj.close();
	
	ifstream obj1("One.txt");
	cout<<obj1.tellg()<<endl;
	obj1.seekg(0,ios::beg);
	cout<<obj1.tellg()<<endl;
	
	char ch;
	while(!obj1.eof())
	{
		obj1.get(ch);
		if(obj1.eof())
		break;
		cout<<ch;
		
	}
	
	obj1.close();
	return 0;
}
