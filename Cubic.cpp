#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,d,i,j,M,f,g,h,k,L,N,P,x1,x2,x3;
    cin>>a>>b>>c>>d;
    f=((3*c/a)-(b*b/(a*a)))/3;
    g=((2*b*b*b/(a*a*a))-(3*b*c/(a*a))+(27*d/a))/27;
    h=(g*g/4)+(f*f*f/27);
    if(h<=0)
    {
        i=sqrt((g*g/4)-h);
        j=pow(i,1/3);
        k=acos(-g/(2*i));
        L=j*(-1);
        M=cos(k/3);
        N=sqrt(3)*sin(k/3);
        P=(b/(3*a))*(-1);
        x1=2*j*cos(k/3)-(b/(3*a));
        x2=L*(M+N)+P;
        x3=L*(M-N)+P;
    }
    cout<<x1<<endl;
    cout<<x2<<endl;
    cout<<x3<<endl;
}

