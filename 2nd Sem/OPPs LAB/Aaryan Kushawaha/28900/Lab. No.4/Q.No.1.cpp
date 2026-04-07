#include<iostream>

using namespace std;

class Number
{
	int real , img;
	
	public :
		
		void GetNumber()
		{
			cout<<"Enter Real & Imaginary No. : ";
			cin>>real>>img;
			
		}
		
		void addComplex(Number n1, Number n2)
		{
			real = n1.real + n2.real;
			img = n1.img + n2.img; 
		}
		
		void diffComplex(Number n1 , Number n2)
		{
			real = n1.real-n2.real;
			img=n1.img-n2.img;
		}
		void Display(Number n1)
		{
			cout<<"Original Real & Imaginary No. is "<<n1.real<<" "<<n1.img<<endl;
		}
		void Display2(Number n2)
		{
				cout<<"Original Real & Imaginary No. is "<<n2.real<<" "<<n2.img<<endl;
		}
		
		void InfoNumber()
		{
			cout<<"\nSum of Complex Number is "<<real<<" + "<<img<<"i";
		}
		
		void infoNumber()
		{
			if(img<0)
			{
				
			cout<<"\nDifferent of Complex Number is "<<real<<" "<<img<<"i";
			}
			else
			cout<<"\nDifferent of Complex Number is "<<real<<" + "<<img<<"i";
		}
};

int main()
{
	Number n1, n2, sum, diff;
	n1.GetNumber();
	n2.GetNumber();
	n1.Display( n1);
	n2.Display2(n2);
	sum.addComplex(n1, n2);
	sum.InfoNumber();
	diff.diffComplex(n1,n2);
	diff.infoNumber();
	return 0;
}