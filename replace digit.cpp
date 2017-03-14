#include<iostream>
#include<cmath>
using namespace std;
int r(int n,int a,int b,int i, int &nn)
{   if(n==0) {return nn;}
    int t;
    if(n%10==a){t=b;}
    else{t=n%10;}
    nn=nn+t*pow(10,i);
    i++;
    return r(n/10,a,b,i,nn);
}

int main()
{ int n,a,b,nn=0;
    cin>>n>>a>>b;
    cout<<endl; cout<<r(n,a,b,0,nn);
}
