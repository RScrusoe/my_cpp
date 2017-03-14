#include<iostream>
using namespace std;
int main()
{
    int accumulator=0;
    cout<<"This program sums up the values entered by user\n";
    cout<<"Terminate the loop by entering a negative value";
    for(;;)
       {
        int value;
        cout<<"  \n    Enter next Number::";
        cin>>value;
        if (value<0)
        {
            break;
        }
        accumulator+=value;
       }
       cout<<"\n The total is "<<accumulator<<"\n";
       return 0;

}
