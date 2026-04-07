#include<iostream>

using namespace std;

int main()
{
    int n,i,j;

   float A[]={0.1,0.5,0.6,0.2};
   float B[]={0.4,0.3,0.9,0.7};

   n=sizeof(A)/4;
    cout<<"\nFuzzy Set \n Union :"<<endl<<" A U B ={ ";
    for ( i=0,j=0;i<n;i++,j++)
    {

        if(A[i]>B[j])
        {

            cout<<A[i];
            while(i!=n-1)
            {
            	cout<<",";
            	break;
			}
        }
        else
        {

             cout<<B[j];
             while(i!=n-1)
            {
            	cout<<",";
            	break;
			}
        }
    }
    cout<<" }";

    cout<<"\n\nIntersection : "<<endl<<"A n B: ={ ";
    for(i=0,j=0;i<n;i++,j++)
    {


        if(A[i]>B[j])
        {

            cout<<B[j];
             while(i!=n-1)
            {
            	cout<<",";
            	break;
			}
        }
        else
        {

             cout<<A[i];
              while(i!=n-1)
            {
            	cout<<",";
            	break;
			}
        }

    }
    cout<<" }";


    cout<<"\n\nComplement A : "<<endl<<"A' ={ ";
    for(i=0;i<n;i++)
    {

        cout<<1-A[i];
         while(i!=n-1)
            {
            	cout<<",";
            	break;
			}

    }
     cout<<" }";
      cout<<"\n\nComplement B : "<<endl<<"B' ={ ";
    for(j=0;j<n;j++)
    {

        cout<<1-B[j];
         while(j!=n-1)
            {
            	cout<<",";
            	break;
			}

    }
     cout<<" }";

    return 0;
}
