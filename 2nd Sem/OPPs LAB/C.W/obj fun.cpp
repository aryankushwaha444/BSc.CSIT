#include<iostream>

using namespace std;

class Complex
{
	int real,img;
	
	public :
		Complex()
		{
			real=0;
			img=0;
		}
		Complex (int real , int img)
		{
			this->real=real;
			this->img=img;
		}
		Complex addCom(Complex c1 , Complex c2)
		{
		//	real=c1.real+c2.real;
			//img=c1.img+c2.img;
			return Complex(c1.real+c2.real,c1.img+c2.img);
		}
		
		void display()
		{
			cout<<""<<real<<" + "<<img<<"i"<<endl;
		}
};

int main()
{
Complex obj,obj1(5,2),obj2(3,5);
obj=obj.addCom(obj1,obj2);
obj.display();
return 0;
	
}