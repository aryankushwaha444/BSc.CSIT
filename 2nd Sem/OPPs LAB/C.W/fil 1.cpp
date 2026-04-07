#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream fout;
	fout.open("data.txt");
	fout<<"Hello RN";
	cout<<"Data Sucessfull write file";
	
	fout.close();
	return 0;
}