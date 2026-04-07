#include <iostream>
#include <fstream>
using namespace std;
int main ( )
{
streampos begin,end;
 ifstream myfile ("example.bin", ios::binary);
begin = myfile.tellg( );
 myfile.seekg (-2, ios::end);
 end = myfile.tellg( );
 myfile.close( );
 cout << "size is: " <<end<< " bytes.\n";
 return 0;
}