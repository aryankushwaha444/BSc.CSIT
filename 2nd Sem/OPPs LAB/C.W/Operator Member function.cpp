#include<iostream>

using namespace std;

class Num
{
	int x;
	public :
		Num()
		{
			x=0;
		}
		Num(int a)
		{
			x=a;
		}
		
	Num operator ++()
	{
		return (++x);
	}
	Num operator ++(int)
	{
		return (x++);
	}
	void diaplay()
	{
		cout<<" x is "<<x;
	}
	

};
int main()
{
	Num ob,obj(50);
	ob=++obj;
	ob.diaplay();
	ob=obj++;
	ob.diaplay();
	return 0;
	
}