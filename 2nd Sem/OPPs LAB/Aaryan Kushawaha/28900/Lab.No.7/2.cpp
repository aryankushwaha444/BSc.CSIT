#include<iostream>

using namespace std;

class electronic_device
{
	protected :
		int pow;
		
		public :
			void e_fun()
			{
				cout<<"Enter Electric Power : ";
				cin>>pow;
			}
			
			void dis_e()
			{
				cout<<"\nPower is "<<pow;
			}
};

class printer : public electronic_device
{
	protected :
		int capacity;
		
		public :
			void p_fun()
			{
				cout<<"Enter Capacity : ";
				cin>>capacity;
			}
			
			void dis_p()
			{
				cout<<"\nCapacity is "<<capacity;
			}
};

class scanner :public electronic_device
{
	protected :
		string quality;
		
		public :
			void s_fun()
			{
				cout<<"Enter Scanner quality : ";
				cin>>quality;
			}
			
			void dis_s()
			{
				cout<<"\nQuality is "<<quality;
			}
		
};

class photocopy_device : public printer , public scanner
{
	protected :
		
		int page;
		
		public :
			void ph_fun()
			{
				cout<<"Enter Page Number : ";
				cin>>page;
			}
			
			void dis_ph()
			{
				cout<<"\nPage No. is "<<page;
			}
		
		
};

int main()
{
	
	photocopy_device pdobj;
//	pdobj.e_fun();
	pdobj.p_fun();
	pdobj.s_fun();
	pdobj.ph_fun();

//	pdobj.dis_e();
	pdobj.dis_p();
	pdobj.dis_s();
	pdobj.dis_ph();
	
	return 0;
}



