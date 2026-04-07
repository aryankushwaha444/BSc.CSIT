#include<iostream>
using namespace std;

int main()
{
	int p[2]={0,1};
	int q[2]={0,1};
	int i,j;
	
	cout<<"Truth Table of P n q : "<<endl;
	cout<<"p\tq\tp n q"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		cout<<p[i]<<"\t"<<q[j];
		if(p[i] && q[j])
		{
			cout<<"\tTrue\n";
		}
		else
		cout<<"\tFalse\n";
		}
	}
		cout<<"\nTruth Table of P v q :"<<endl;
		cout<<"p\tq\tp v q"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		cout<<p[i]<<"\t"<<q[j];
		if(p[i] || q[j])
		{
			cout<<"\tTrue\n";
		}
		else
		cout<<"\tFalse\n";
		}
	}
	cout<<"\nTruth Table of P' :"<<endl;
	cout<<"p\tp'"<<endl;
	for(i=0;i<2;i++)
	{
	 if(p[i]==0)
	 {
	 	cout<<p[i]<<"\t1\n";
	 }
	 else
	 cout<<p[i]<<"\t0\n";
	}
	
	cout<<"\nTruth Table of P -> q :"<<endl;
	cout<<"p\tq\tp->q"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<p[i]<<"\t"<<q[j];
			if(p[i] == q[j])
			{
			
					cout<<"\tTrue\n";		
			}
			else 
		{
			if(p[i]==0 && q[j]==1)
			{
				cout<<"\tTrue\n";
			}
			else
			cout<<"\tFalse\n";
		}
				
			}
		}
		
    	cout<<"\nTruth Table of P<->q :"<<endl;
    	cout<<"p\tq\tp<->q"<<endl;
    	
    		for(i=0;i<2;i++)
    		{
    			for(j=0;j<2;j++)
    			{
    				cout<<p[i]<<"\t"<<q[j];
    				if(p[i] == q[j])
    				{
    					cout<<"\tTrue\n";
					}
					else
					cout<<"\tFalse\n";
				}
			}
		
	
	
	return 0;
	
}