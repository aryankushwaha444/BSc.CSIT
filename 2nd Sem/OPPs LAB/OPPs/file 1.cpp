#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream obj("Demo.txt");
	cout<<"Hello RN";
	cout<<obj.tellp()<<endl;
	int n=sizeof(obj);
	obj.seekp(obj.eof(),ios::beg);
	cout<<n<<endl;
	return 0;
}