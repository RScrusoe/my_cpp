#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int n,i,j=0,k,p,x,y,z;
int a[200];
cout<<"Enter a Number";
cin>>n;
while(n>=0)
{
    y=2^j;
    if(y>n)
    {
        p=j-1;
        break;
    }
    j++;
    a[p]=1;
    n=n-y;

    if(n=0)
    {
        for(z=p+1;z>=0;z--)
            a[z]=0;
    }

}
cout<<a[1];
return 0;

}
