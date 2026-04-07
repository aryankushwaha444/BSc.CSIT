#include<iostream>
#include<math.h>

using namespace std;

class Distance
{
	private :
		int x1,x2,y1,y2;
		
		public :
			Distance()
			{
				x1=0,x2=0,y1=0,y2=0;
				cout<<"Hello I'm Contructor :\t"<<x1+x2+y1+y2;
			}
			
			Distance(int a , int b , int c, int d)
			
			{
				
			}
			
				//x1=a,x2=b,y1=c,y2=d;
			//	cout<<"I'm 2 Cons.\t"<<x1+x2+y1+y2;
			
			
			void infoDistance()
			{
				///cout<<"a="<<x1<<"b="<<x2<<"c="<<y1<<"d="<<y2<<endl;
				cout<<"Distance : "<<a+b+c+d;
				
			}
			
			
};

int main()
{
	Distance obj1(2,3,1,5);
	obj1.infoDistance();

	
	
}