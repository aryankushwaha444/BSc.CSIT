#include<iostream>

using namespace std;

class complex
{
	int x;
	int y;
	
	public :
		complex()
		{
			x=0;
			y=0;
		}
	
	complex (int a , int b)
	{
		x=a;
		y=b;
		
	}
	
	
	complex operator +(complex &z)
	{
		complex temp;
		temp.x=x+z.x;
		temp.y=y+z.y;
		
		return temp;
	}
	void Display()
	{
		cout<<"Sum of Ob1,2,3 : "<<x<<" + "<<y<<endl;
	}
};

int main()
{
	complex ob1(5,4);
	complex ob2(1,2);
	complex ob3(4,3);
	
	complex ob4;
	
	ob4=ob1+ob2+ob3;
	
	ob4.Display();
	
	return 0;
	
}