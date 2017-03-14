#include<iostream>
using namespace std;
main()
{
    __int64 a,b,c;
    cout<<"Enter A number :: ";
    cin>>a;
    b=1;
    for(c=1;c<=a;c++)
    {
        b=b*c;
    }
    cout<<b;
}
