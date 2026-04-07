#include<iostream>

using namespace std;

class CPU
{
	float price;
	
	class Processor
	{
		string core;
		int Manufac;
	}p;
		
	public:
	//	void CPU::getCPU();
	
	
void CPU:: getCPU()
	{
	
	
	cout<<"Enter Price of Computer  : ";
	cin>>price;
	cout<<"Enter Processor in Core : ";
	getline(cin>>ws,p.core);
	cout<<"Enter Manufacturing Years : ";
	cin>>p.Manufac;
	}
	
	//void	CPU::InfoCPU();
	
	void CPU:: InfoCPU()
	{
		
		cout<<"Price\tProcessor\tManu. Years"<<endl;
		cout<<price<<"\t"<<core<<" \t"<<Manufac<<endl;
		
	}
};

int main()
{
	CPU obj;
	obj.getCPU();
	obj.InfoCPU();
	
	return 0;
	
}

