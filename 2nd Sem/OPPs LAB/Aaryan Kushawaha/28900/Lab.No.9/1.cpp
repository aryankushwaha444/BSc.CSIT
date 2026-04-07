#include<iostream>

using namespace std;

class Number
{
	float x;
	
	public :
		
		Number()
		{
			x=0;
		}
		
		Number (float a , float b)
		{
			x=a;
			x=b;
		}
		
		friend Number operator / (Number , Number);
		void display()
		{
			cout<<"Result is "<<x<<endl;
		}
};

Number operator /(Number n1 , Number n2)
{
	Number temp;
	temp.x=n1.x/n2.x;
	//temp.x=n2.x;
//	return Number(n1.x/n2.x);
return temp;
}

int main()

{
	Number ob(10,5),ob1(50,10),ob2;
	ob2=ob/ob1;
	//ob.display();
	
	cout<<endl<<ob2;
	return 0;
}


