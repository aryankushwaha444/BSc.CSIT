#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float f1(float x,float y,float z)
{
    return(z);
}
float f2(float x,float y,float z)
{
    return(x-y+z);
}
float shoot(float x0,float y0,float z0,float xn,float h,int p)
{
    float x,y,z,k1,k2,k3,k4,l1,l2,l3,l4,k,l,x1,y1,z1;
    x=x0;
    y=y0;
    z=z0;
    do
    {
        k1=f1(x,y,z);
        l1=f2(x,y,z);
        k2=f1(x+h/2.0,y+k1*h/2.0,z+l1*h/2.0);
        l2=f2(x+h/2.0,y+k1*h/2.0,z+l1*h/2.0);
        k3=f1(x+h/2.0,y+k2*h/2.0,z+l2*h/2.0);
        l3=f2(x+h/2.0,y+k2*h/2.0,z+l2*h/2.0);
        k4=f1(x+h,y+k3*h,z+l3*h);
        l4=f2(x+h,y+k3*h,z+l3*h);
        l=1/6.0*(l1+2*l2+2*l3+l4);
        k=1/6.0*(k1+2*k2+2*k3+k4);
        y1=y+k*h;
        x1=x+h;
        z1=z+l*h;
        x=x1;
        y=y1;
        z=z1;
        if(p==1)
        {
            printf("\n%f\t%f",x,y);
        }
    }while(x<xn);
    return(y);
}
int main()
{
    float x0,y0,h,xn,yn,z0,m1,m2,m3,b,b1,b2,b3,e;
    int p=0;
    printf("\n  Enter x0,y0,xn,yn,h:");
    scanf("%f%f%f%f%f",&x0,&y0,&xn,&yn,&h);
    printf("\n  Enter the trial M1:");
    scanf("%f",&m1);
    b=yn;
    z0=m1;
    b1=shoot(x0,y0,z0,xn,h,p=1);
    printf("\nB1 is %f",b1);
    if(fabs(b1-b)<0.00005)
    {
        printf("\n  The value of x and respective z are:\n");
        e=shoot(x0,y0,z0,xn,h,p=1);
        return(0);
    }
    else
    {
    printf("\nEnter the value of M2:");
    scanf("%f",&m2);
    z0=m2;
    b2=shoot(x0,y0,z0,xn,h,p=1);
    printf("\nB2 is %f",b2);
    }
    if(fabs(b2-b)<0.00005)
    {
         printf("\n  The value of x and respective z are\n");
         e= shoot(x0,y0,z0,xn,h,p=1);
         return(0);
    }
    else
    {
        printf("\nBoth Guess are wrong M2=%f\tM1=%f",m2,m1);
        m3=m2+(((m2-m1)*(b-b2))/(1.0*(b2-b1)));
        printf("\nCorrect Guess of of M =%f",m3);
        z0=m3;
        printf("\nThere is solution :\n");
        e=shoot(x0,y0,z0,xn,h,p=1);
    }
    printf("\n\t\tBy Aaryan Kushawaha");
        return 0;
    }

