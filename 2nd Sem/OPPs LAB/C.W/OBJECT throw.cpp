#include <iostream>
using namespace std;
class Complex 
{
 private:
 int real, img;
 public:
 Complex( ) {
 real = 0;
 img = 0;
 }

 Complex(int real, int img)
 {
 this->real = real;
 this->img = img;
 }

 friend Complex operator - (Complex obj1, Complex obj2)
 {
 	try
 	{
 		if(Complex(obj1.img + obj2.img)<-0)
 		{
 		throw Complex(obj1.img + obj2.img);	
		 }
		 else
		 cout << "Imaginary is Positive : "<<endl;
		 
	 }
	 
	 catch(...)
	 {
	 	cout<<" Imaginary is Negative : ";
	 }	
 }

};

int main( )
{
 Complex c1(2,3),c2(5,1),c3;
 c3 = c1 - c2; 
 
 return 0;
}
