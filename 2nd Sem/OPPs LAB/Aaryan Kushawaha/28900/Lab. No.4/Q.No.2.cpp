#include<iostream>

using namespace std;

class Rn

{
	string name;
	int Roll_No;
	char Sec;
	
	public :
		
		Rn()
		{
			name="Aryan Kushwaha";
			Roll_No=01;
			Sec='A';
			cout<<"Defult Conts.\nName = "<<name<<"\nRoll No. = "<<Roll_No<<"\nSec "<<Sec<<endl;
		}
		Rn(string Name , int roll_No,char sec)
		{
			name=Name;
			Roll_No=roll_No;
			Sec=sec;
			
		}
		void infoRn()
		{
			cout<<"\n2nd Conts.\n Name = "<<name<<"\nRoll No. = "<<Roll_No<<"\nSec = "<<Sec<<endl;
		}
		
		~Rn()
		{
			cout<<endl<<"Thanks For Using Dev C++ Compiler...";
		}
};

int main()
{
	Rn n;
	Rn n1("RN",1,'a');
	n1.infoRn();
	return 0;
}