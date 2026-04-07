#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int A[5];
	
	fstream file("Number.txt",ios::in);
	if(!file)
	{
	cout<<"File Error !!!! Open...."<<endl;	
	}
	
	for(int i=0;i<5;i++)
	{
		cin>>A[i];
		file.write((char*)&A[i],sizeof(A[i]));
	}
	file.close();
	cout<<"Data Write Sucessfulll"<<endl;
	
	file.open("Number.txt",ios::out);
	for(int i=0;i<5;i++)
	{
		//cout<<A[i]<<endl;
		file.read((char*)&A[i],sizeof(A[i]));
		if(A[i]%2==0)
		{
		fstream	file("Even.txt",ios::in);
			file.write((char*)&A[i],sizeof(A[i]));
		}
		else
	fstream	file("ODD.txt",ios::in);
		file.write((char*)&A[i],sizeof(A[i]));
	}
	file.close();
	return 0;
	
}