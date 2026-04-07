#include<iostream>

using namespace std;

class Media
{
	protected :
		string name;
		
		public :
			void getMedia()
			{
				cout<<"Enter Name : ";
				getline(cin>>ws,name);
			}
			
	   virtual	void display()=0;
};

class Book : public Media
{
	private :
		int page;
		float price;
		
		public :
		
			void getBook()
			{
				cout<<"Enter Page No. ";
				cin>>page;
				cout<<"Enter Price : ";
				cin>>price;
			}
			void display()
			{
				cout<<"Details for Book"<<endl;
				cout<<"Name = "<<name<<endl;
				cout<<"Page = "<<page<<endl;
				cout<<"Price = "<<price<<endl;
			}
};

class Audio_Tape : public Media
{
	private :
		float time;
		int rount;
		
		public :
			
			void getA_t()
			{
				cout<<"Enter Time : ";
				cin>>time;
				cout<<"Enter Rount : ";
				cin>>rount;
				
			}
		
			void display()
			{
					cout<<"Details for Audio - Tape "<<endl;
				cout<<"Name : "<<name<<endl;
				cout<<"Lenght = "<<time<<endl;
				cout<<"Rount = "<<rount;
			
			}
};

int main()
{
	Book ok;
	ok.getMedia();
	ok.getBook();
	
	Audio_Tape At;
	At.getMedia();
	At.getA_t();
	
	ok.display();
	At.display(); 
	return 0;
	
}
