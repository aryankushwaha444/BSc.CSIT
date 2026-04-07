#include<iostream>

using namespace std;

class Vehicle
{
	private :
		string typeName;
		
		public :
			
			void getVehicle()
			{
				cout<<"Enter Types of Vehicle Name : ";
				getline(cin>>ws , typeName);
			}
			
			void infoVehicle()
			{
				cout<<"Types of Vehicle Name = "<<typeName<<endl;
				
			}
			
};

class Car : public Vehicle
{
	private :
		string Carname;
		int Carmodel;
		float Carprice;
		
		public:
			
		//getVehicle();
		//	infoVehicle();
			void getCar()
			{
				cout<<"Enter Car Name : ";
				getline(cin>>ws,Carname);
				
				cout<<"Enter Car Model : ";
				cin>>Carmodel;
				
				cout<<"Enter Car Price : ";
				cin>>Carprice;
			}
			
			void infoCar()
			{
				cout<<"Car Name = "<<Carname<<"\nEnter Car Model : "<<Carmodel<<"\nEnter Carr Price : "<<Carprice<<endl;
				
			}
};

class Aeroplane : public Vehicle
{
	private :
		string nameAirline;
		int airline_No;
		
		public:
			
          // 	getVehicle();
			//infoVehicle();
			
			void getAeroplane()
			{
				cout<<"Enter Air line Name : ";
				getline(cin>>ws,nameAirline);
				cout<<"Enter AirLine No. :";
				cin>>airline_No;
			}
			
			void infoAeroplane()
			{
				cout<<"Name of Airline = "<<nameAirline<<"\nAirline No. = "<<airline_No<<endl;
			}
};

int main()
{
	Car cobj;
	cobj.getVehicle();
	cobj.getCar();
	cobj.infoVehicle();
	cobj.infoCar();
	
	Aeroplane aobj;
	aobj.getVehicle();
	aobj.getAeroplane();
	aobj.infoVehicle();
	aobj.infoAeroplane();
	
	return 0;
}