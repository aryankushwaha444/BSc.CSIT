#include<iostream>
using namespace std;

class A
{
	int x ,y;
	
	public :
		A()
		{
			x=0;
			y=0;
		}
		A(int x ,int y)
		{
			this->x=x;
			this->y=y;
		}
		A(const A &k)
		{
			x=k.x;
			y=k.y;
		}
		void dis()
		{
			cout<<x<<y;
		}
};

int main()
{
	A o(6,95);
	A oo;
	oo=o;
	oo.dis();
	return 0;
	
}