#include<iostream>

using namespace std;
class A;
class B
{
	int x,y;
	friend class A;

	public :
		B()
		{
			x=0;
			y=5;
		}
		B(int x ,int y)
		{
			this->x=x;
			this->y=y;
		}
};

class A
{
	public :
		void display(B o)
		{
			cout<<"X = "<<o.x<<endl<<"Y = "<<o.y<<endl;
		}
};

int maim()
{
	A obj;
	B aobj;
	obj.display(aobj);
	return 0;
}
