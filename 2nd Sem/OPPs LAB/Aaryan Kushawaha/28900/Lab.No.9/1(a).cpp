#include <iostream>

using namespace std;

class Complex
 {
 private:
 	
 float real, img;
 
 public:
 	
 Complex( ) 
 {
 real = 0;
 img = 0;
 }

 Complex(float real, float img)
 {
 this->real = real;
 this->img = img;
 }
 
 friend Complex operator / (Complex, Complex);
 
 void display( )
 {
 cout << real << " + " << img << "i";
 }
 
};

Complex operator / (Complex obj1, Complex obj2)
{
 
 return Complex(obj1.real / obj2.real, obj1.img / obj2.img);
}

int main( )
{
 Complex c1(20,30),c2(4,1),c3;
 c3 = c1 / c2;
 cout << "c1 = "; 
 c1.display( );
 cout << endl << "c2 = "; 
 c2.display( );
 cout<<"\nReal1 / Real2 & Img1 / Img2 "<<endl;
 cout<<"c3 = "; 
 c3.display( );
 return 0;
}
