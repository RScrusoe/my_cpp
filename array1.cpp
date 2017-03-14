#include<iostream>
using namespace std;
int main()

{

    int value;
    int valueArray[128];
    int i;
    int n=1;
    for(int i=0; i<128; i++)
    {
        cout<<n<<">     ";
        cin>>value;
        n=n+1;
    if (value<0)
    {
     break;
    }
    valueArray[i] = value;
    }
    return 0;

}
