#include<iostream>
#include<cstdlib>
using namespace std;
main()
{
    int n,max,num,c;
    cout<<"Enter the number of Rabdom Numbers U want::";
    cin>>n;
    cout<<"Enter maximum value of random numbers";
    cin>>max;
    cout<<"Random number from 0 to "<<max<<" are"<<endl;
    for(c=1;c<=n;c++)
    {
        num = random(max);
        cout<<num<<endl;
    }
    return 0;

}
