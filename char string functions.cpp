#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char address[] ="The.house.is,blue";
    char separator[] = ".";
    char *cpSub1 = strtok(address, separator);
    while (cpSub1)
    {
        cout<<cpSub1<<endl;
        cpSub1=strtok(0, separator);
    }
    return 0;
}
