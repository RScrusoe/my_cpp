#include<iostream>
using namespace std;
int d(int a[n][n])
{
    if(n=2) return a[0][0]*a[1][1]-a[1][0]*a[0][1];
    else{
        for(int i=0;i<=n;i++)
        {a[0][i]*pow(1,i)*d(a[n-1][n-1])
        }
    }
}
