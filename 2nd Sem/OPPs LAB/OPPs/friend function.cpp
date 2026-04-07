/* Using a Friend Function between classes . Write a program that adds the total
capital of a joint renture company of 3 Partners. */

#include<iostream>

using namespace std;

class ceo;
class own;

class shar
{
	float capital;
	
	friend void capital(shar , ceo , own);
	
	public :
		void read()
		{
			cout<<"Enter Sharheloder Capital = ";
			cin>>capital;
		}
		
};

class ceo
{
	float capital;
	friend void capital(shar , ceo , own);
	
	public :
			void read()
		{
			cout<<"Enter Sharheloder CEO = ";
			cin>>capital;
		}
};
class own
{
	float capital;
	friend void capital(shar , ceo , own);
	
	public :
			void read()
		{
			cout<<"Enter Sharheloder Own = ";
			cin>>capital;
		}
};

void capital(shar n1 , ceo n2 , own n3)
{
	float capital = n1.capital+n2.capital+n3.capital;
	cout<<capital;
};

int main()
{
	shar obj;
	obj.read();
	ceo obj2;
	obj2.read();
	own obj3;
	obj3.read();
	capital(obj , obj2 , obj3);
	
	return 0;
	
	
	
	}