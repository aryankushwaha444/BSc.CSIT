#include<iostream>

using namespace std;

class License
{
	string name;
	int age;
	
	public :
		
		license getinfo(string nm , int ag)
		{
			try
			{
			throw License(nm.name,ag.age);	
			}
		
		}
}