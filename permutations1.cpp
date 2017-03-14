#include<iostream>
using namespace std;
int main()
{
int n,b,c; int nod=0; int i=10; //No. Of Digits
cin>>n; b=n; c=n;
while(b>0)
{
    b=b/i;  nod++;
}
int a[nod];
for(int i=nod-1;i>=0;i--) {a[i]=c%10; c=c/10;}
for(int j=1;j<=nod;j++)
{
    for(int i=0;i<=j;i++)
    {

    }
}
}

