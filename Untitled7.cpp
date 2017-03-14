#include<iostream>
#include<math.h>

using namespace std;

main()
{
    int a,c=0;
    int b,j,i;

    cout<<"Enter any number  ";
    cin>>a;
    for(i=2;i<=a;i++)
        for(j=2;j*j<=i;j++)
    {
        if(i%j==0)
            break;
        else if(j+1>sqrt(i))
            { cout<<i<<endl;}
    }
    return 0;
    }
