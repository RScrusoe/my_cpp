#include<iostream>

using namespace std;

main()
{
    int a,c=0;
    int b,x,y,i;

    cout<<"Enter any number  ";
    cin>>a;
    for(i=2;i<=a;i++)
    {



        if(a%i==0)
        {
           c++;

        }


    if(c==0)
    {
        cout<<i<<"\n";

        }
    }








            return 0;
}
