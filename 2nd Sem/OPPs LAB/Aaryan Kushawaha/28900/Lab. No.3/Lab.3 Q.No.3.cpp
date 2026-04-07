#include<iostream>

using namespace std;

class Account 
{
	private :
		string Acount_No ;
		string Account_Holder_Name;
		float Balance;
		
		public :
			void getAccount()
			{
			    cout<<"Enter A/C Holder Name : "<<endl;
			    getline(cin>>ws,Account_Holder_Name);
				cout<<"Enetr A/C No. : "<<endl;
				getline(cin>>ws,Acount_No);
			    cout<<"Enter Balance : ";
			    cin>>Balance;
			}
			
			void InfoAccount()
			{
			    cout<<"A/C Holder Name is  "<<Account_Holder_Name<<endl;
				cout<<"A/C No. is  "<<Acount_No<<endl;
			    cout<<"Balance is  "<<Balance<<endl;;
			    
			}
};

int main()
{
		Account cus[3];
		int i;
		for(i=0;i<3;i++)
		{
			cout<<endl<<"Enter for "<<i+1<<" Customer : "<<endl;
			cus[i].getAccount();
		}
		cout<<endl<<endl<<"You'r A/C Details  : "<<endl<<endl;
			for(i=0;i<3;i++)
		{
			cout<<"Enter for "<<i+1<<" Customer : "<<endl;
			cus[i].InfoAccount();
			cout<<endl;
		}
	return 0;
	
}