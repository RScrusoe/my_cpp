#include<iostream>
using namespace std;
int main()
{
    long double i,k,l,y=1,j=0;

    cout<<"Enter a Number ";
    cin>>k;
    for(i=1;i<=k;i++)
    {
        y=y*i;
        j=j+y;
    }
    for(l=1;l<=k;l++)
    {
        cout<<l<<"! + ";
    }
   cout<<"= "<<j<<endl;

    long a=j,x;
    int sum=0;

    while(a>0)
    {
        x=a%10;
        sum+=x;
        a=a/10;
    }
    cout<<"Sum of Digits = "<<sum<<endl;
    return 0;
}

