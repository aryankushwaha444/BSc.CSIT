#include<iostream>

using namespace std;

class Vehicle
{
	private :
		string ComName;
		long int sno;
		long int engno;
		
		public :
		void getVehicle();
		void infoVehicle();	
		
};

class Car : public Vehicle
{
	private :
		string Carname;
		int Carmodel;
		float Carprice;
		
		public:
				void getCar();
				void infoCar();
		
};

class Aeroplane : public Vehicle
{
	private :
		string nameAirline;
		int airline_No;
		float Airprice;
		
		public:
			void getAeroplane();
			void infoAeroplane();
		
};

class Boat : public Vehicle
{
	private :
		string boatName;
		int boatNo;
		float boatPrice;
		
		public :
			
			void getboat();
			void infoboat();
			
};

 void Vehicle :: getVehicle()
{
	        	cout<<"Enter Company Name  : ";
				getline(cin>>ws ,ComName);
				cout<<"Enter Serial No. : ";
				cin>>sno;
				cout<<"Enter Engine No. : ";
				cin>>engno;
}
 void Vehicle :: infoVehicle()
{
cout<<"\nCompany Name  : "<<ComName<<"\nSerial No. :"<<sno<<"\nEngine No. :"<<engno<<endl;
				
}

 void	Car:: getCar()
	{
			cout<<"Car Name : ";
				getline(cin>>ws,Carname);
				
				cout<<"Car Model : ";
				cin>>Carmodel;
				
				cout<<"Car Price : ";
				cin>>Carprice;
	}

	
  void 	Car :: infoCar()
	{
		cout<<"Car Name = "<<Carname<<"\nEnter Car Model : "<<Carmodel<<"\nEnter Carr Price : "<<Carprice<<endl;	
	}
	
	void Boat :: getboat()
	{
		cout<<"Boat Name  : ";
		getline(cin>>ws,boatName);
		cout<<"Boat No. : ";
		cin>>boatNo;
		cout<<"Boat Price : ";
		cin>>boatPrice;
	}
	
	void Boat :: infoboat()
	{
		cout<<"Name of Boat = "<<boatName<<"\nPrice = "<<boatPrice<<endl;
	}
			
	
 void	Aeroplane :: getAeroplane()
	{
			cout<<"Air line Name : ";
				getline(cin>>ws,nameAirline);
				cout<<"AirLine No. :";
				cin>>airline_No;
				cout<<"Price : ";
				cin>>Airprice;
	}
	
   void  Aeroplane :: infoAeroplane()
     {
     	cout<<"Name of Airline = "<<nameAirline<<"\nAirline No. = "<<airline_No<<endl;
	 }
	

int main()
{
	Car cobj;
	cout<<"Enter Details for Car \n";
	cobj.getVehicle();
	cobj.getCar();
	
	Boat bobj;
	cout<<"\nEnter Details for Boat \n";
	bobj.getVehicle();
	bobj.getboat();

	Aeroplane aobj;
	cout<<"\nEnter Details for Aeroplane\n";
	aobj.getVehicle();
	aobj.getAeroplane();
	
	cout<<"\nDetails for Car";
	cobj.infoVehicle();
	cobj.infoCar();
	
	cout<<"\nDetails for Boat";
	bobj.infoVehicle();
	bobj.infoboat();
	
	cout<<"\nDetails for Aeroplane";
	aobj.infoVehicle();
	aobj.infoAeroplane();
	
	return 0;
}