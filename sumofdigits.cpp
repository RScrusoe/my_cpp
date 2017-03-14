#include<iostream>
using namespace std;
int main()
{
    long a,x;
    int sum=0;
    cout<<"Enter a Number  ";
    cin>>a;
    while(a>0)
    {
        x=a%10;
        sum+=x;
        a=a/10;
    }
    cout<<"Sum of Digits = "<<sum<<endl;
    return 0;
}
