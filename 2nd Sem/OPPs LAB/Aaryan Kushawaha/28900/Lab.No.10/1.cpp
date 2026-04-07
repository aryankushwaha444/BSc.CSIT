#include<iostream>

using namespace std;

		template <class T>
	void	Swap(T a , T b)
		{	
			T x,y;
			T temp;
			temp=a;
			a=b;
			b=temp;
			cout<<"After Swap the Value\n1st = "<<a<<"\n2nd = "<<b<<endl<<endl;
			
		}
		
	
	int main()
	{
		Swap (5,6);
		Swap(5.12,6.25);
		Swap('R','N');  
		return 0;
	}