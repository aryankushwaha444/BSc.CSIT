#include<iostream>
using namespace std;

class Complex
{
	int real , img;
	
	public :
		
		friend istream & operator >>(istream &in , Complex &c)
		{
			cout<<"Enter Real part ";
			in>>c.real;
			cout<<"Enter Img Part ";
			in>>c.img;
		}
		
		friend ostream & operator <<(ostream &out , Complex &c)
		{
		 out<<" "<<c.real<<" + "<<c.img<<" i"<<endl;
		 
		}
};
int main()
{
	Complex cl;
	cin>>cl;
	cout<<cl;
	return 0;
}