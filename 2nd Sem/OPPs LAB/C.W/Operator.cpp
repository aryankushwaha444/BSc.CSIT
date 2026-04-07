#include<iostream>

using namespace std;

class sample
{
	private :
		int x;
		
		public :
			sample(int a)
			{
				x=a;
			}
			
			int  operator < (sample sm)
			{
				if(x<sm.x)
				{
					return x;
				} 
				else
				return sm.x;
			}
	
};

int main()
{
	int res;
	sample osm(54),osm1(14);
	
res = 	osm < osm1;
	cout<<res;
	
	return 0;
	
}