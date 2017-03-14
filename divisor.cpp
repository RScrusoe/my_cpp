#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter A number :: ";
    cin>>a;
    for(b=1;b<=a;b++)
    {
        if(a%b==0)
        {
            cout<<b<<"\n ";
        }
    }

}
