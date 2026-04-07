#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	float a,b,c,x1,x2,discriminant , realpart , imgpart;
	cout<<"Enter Coefficients a , b & c : ";
	cin>>a>>b>>c;
	
	discriminant = pow(b,2)-4*a*c;
	
	if(discriminant>0)
	{
		x1=(-b+sqrt(discriminant))/(2*a);
		x2=(-b-sqrt(discriminant))/(2*a);
		
		cout<<"Roots are Real And Img : "<<endl;
		cout<<"X1 = "<<x1<<"\nX2 = "<<x2<<endl;
		
	}
	
	else if (discriminant ==0)
	{
		x1=-b/(2*a);
		cout<<"X1=X2  = "<<x1<<endl;
	}
	
	else
	{
	 realpart=-b/(2*a);
	 imgpart=sqrt(-discriminant)/(2*a);	
	 
	 if(sqrt(-discriminant)/(2*a))
	 {
	 	cout<<"X1 = "<<realpart<<realpart<<"i"<<endl;
	 cout<<"X2 = "<<realpart<<realpart<<"i"<<endl;
	 }
	/* else
	 cout<<"X1 = "<<realpart<<realpart<<"i"<<endl;
	 cout<<"X2 = "<<realpart<<realpart<<"i"<<endl;
	 */
	}
	
	return 0;
}