#include<iostream>
using namespace std;
int f(int a,int b,int n)
{
   if (b==1) {return a%n;}
   else{ return (a*f(a,b-1,n))%n;}
}
int main()
{   int a,b,n;
    cin>>a>>b>>n;
    cout<<endl;
    cout<<f(a,b,n);
}
