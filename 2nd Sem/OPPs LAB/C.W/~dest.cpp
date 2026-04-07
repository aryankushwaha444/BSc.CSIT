#include<iostream>

using namespace std;

class Base
{
	public :
		~Base()
		{
			cout<<"Base class Destroyed";
		}
};

class Drive : public Base
{
	public:
		~Drive()
		{
		cout<<"Drived class Destroyed";	
		}
};

int main()
{
	Base *pBase; 
	pBase= new Drive;
	delete pBase;
	return 0;
}