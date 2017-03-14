#include<iostream>
using namespace std;
int main()
{
    bool a1,a2,a0,b0,b1,b2,y,x,z,w;
    cin>>a0>>a1>>a2>>b0>>b1>>b2;
    x=a2&&(!b2);
    z=((!(a2||b2))&&(a1&&(!b1)))||((!(a2||b2))&&(!(a1||b1))&&(a0&&(!b0)));
    w=((a2&&b2)&&(a1&&(!b1)))||((a2&&b2)&&(a1&&b1)&&(a0&&(!b0)));
    y=x||z||w;
    cout<<endl;
    cout<<y<<endl;
}
