#include <iostream> 
using namespace std; 
enum days {sun, mon, tue, wed, thur, fri, sat}; 
int main() 
{ 
days d1,d2; 
d1 = wed; 
d2 = thur; 
int diff = d2 - d1; // using arithmetic operator 
cout<<"Days between = "<<diff;
return 0;
}
