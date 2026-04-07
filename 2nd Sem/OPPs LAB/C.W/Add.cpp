#include<iostream>

using namespace std;

int main()
{
	int x , y;
	cout<<"Enter Two No. ";
	cin>>x>>y;
	
	char c;
	
	cout<<"ENter Operation ";
	cin>>c;
	
	switch (c)
	{
	case 'a':
		case 'A':
			case '+':
	cout<<x+y;
	break;
	
	case 's':
		case 'S':
			case '-':
				cout<<x-y;
				break;
		
	}
	
		return 0;
}