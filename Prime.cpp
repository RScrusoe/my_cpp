#include<iostream>

using namespace std;

main()
{
    double a,c;
    int b;

    cout<<"Enter any number  ";
    cin>>a;
    for(b=2;b<=(a-1);b++)
    {
        if(a%b==0)
        {
            cout<<a<<" is NOT a Prime Number";
            break;
        }

    }




            return 0;
}
