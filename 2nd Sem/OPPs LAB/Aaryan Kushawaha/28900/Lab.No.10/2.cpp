#include<iostream>

using namespace std;

template <typename T> // template <class T >

class Weight
{
	private :
	T kg;
	
	public :
		void getInfo(T a)
		{
			kg=a;
		}
		
		T Display()
		{
			return kg;
		}
		
};

int main()
{
	Weight <int>obj1;
	obj1.getInfo(59);
	cout<<"Weight in Int = "<<obj1.Display();
	
	Weight <float>obj2;
	obj2.getInfo(65.85);
	cout<<"\nWeight in Float = "<<obj2.Display();
	
	return 0;
	
}