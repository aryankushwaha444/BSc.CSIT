#include <iostream>
using namespace std;
class Sample {
 private:
 int x,y;
 public:
 Sample(int, int);
 void operator =(Sample);
 void display( );
};

Sample::Sample(int a,int b) {
 x = a, y = b;
}
void Sample::operator =(Sample obj) {
 x = obj.y;
 y = obj.x;
}
void Sample::display( ) {
 cout << endl << "x = " << x;
 cout << endl << "y = " << y;
}

int main( )
{
 Sample obj1(20,30), obj2(5,7);
 obj1.display( );
 obj2.display( );
 obj2 = obj1; 
 obj1.display( );
 obj2.display( );
 return 0;
}
