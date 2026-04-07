#include<iostream>

using namespace std;

class sample
{
	int x,y,z;
	
	public:
		sample(int a , int b , int c)
		{
			x=a;
			y=b;
			z=c;
			
		}
		
		friend  fun operator -(int u);
		
		void display()
		{
			cout<<x<<y<<z;
		}
};

fun operator -(int u)
{
	return -(u.x,u.y,u.z);
};

int main()
{
	sample ob(4,,5,6);
	ob=-ob;
	ob.display();
	return 0;
}

