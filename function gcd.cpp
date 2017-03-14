#include<iostream>
using namespace std;

int gcd(int L,int S)
{
   int R;
   while(true)
   {
       R=L%S; if(R==0)break;
       L=S; S=R;
   }
   return S;
}
int lcm(int m, int n)
{
    int LCM=m*n/gcd(m,n);
    return LCM;
}
int main()
{
    int a=54,b=144;
    cout<<gcd(b,a)<<endl;
    cout<<lcm(456,5156);

    return 0;
}

