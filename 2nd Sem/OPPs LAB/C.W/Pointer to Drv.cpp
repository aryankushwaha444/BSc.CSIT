#include <iostream>
using namespace std;
class BC
{
 //public:
 protected :
 int b;
 int d;
 public :
 virtual void show( ) 
{
 cout << "b = " << b << endl;
 }
 int getb()
 {
 	return b;
 }
};

class DC : public BC
{
 public:
 //int d;
 void show( )
 {
 cout << "b = " << b << endl;
 cout << "d = " << d << endl;
 }
};

int main( ) 
{ /*
 BC *dptr;
// BC derived;
DC derived;
 dptr = &derived;
 dptr->b=5000;
dptr->d = 300;
 cout << "dptr is derived type pointer" << endl;
 dptr->show( ); */
 return 0;
}
