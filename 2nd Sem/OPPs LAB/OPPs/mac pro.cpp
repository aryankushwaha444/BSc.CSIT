#include<iostream>
using namespace std;

class Test
{
	public :
		int  num;
		
			Test()
			{
				num=0;
			}
			Test (int num)
			{
				this->num=num;
			}
			
			Test * operator ->()
			{
				return this;
			}
};

int main()
{
	Test ob,obb(25);
	cout<<obb->num;
	
	return 0;
}