#include<iostream>
using namespace std;

int main()
{
	int i,j;
	int count1=0,count2=0;
	int p[2]={0,1};
	int q[2]={0,1};
	cout<<"Truth Table of (p v q)'"<<endl;
	cout<<"p\tq\t(pvq)'"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<p[i]<<"\t"<<q[j];
			if(p[i] || q[j])
			{
				cout<<"\tFalse\n";
			}
			else
			{
			cout<<"\tTrue\n";
			++count1;
			}
			
		}
	}  
	
	cout<<"Truth Table of p' n q' :"<<endl;
	cout<<"p\tq\tp' n q'"<<endl;
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<p[i]<<"\t"<<q[j];
			if(p[i]==0 && q[j]==0)
			{
				cout<<"\tTrue\n";
				++count2;
			}
			else
			cout<<"\tFalse\n";
			
		}
	}
	
	if(count1==count2)
	{
		cout<<"\nTruth Table are Valied :"<<endl;
	}
	else
	cout<<"\nTruth Table are Invalied :"<<endl;
	
	return 0;
}