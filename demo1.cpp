#include<iostream>
using namespace std;
double square (double doubleVar)
{
    return doubleVar*doubleVar;
}
double sumSequence(void)
{
    double accumulator=0.0;
    for(;;)
    {
        double dValue=0;
        cout<<"Enter A number";
        cin>>dValue;
        if (dValue<0)
        {
            break;
        }
        double value = square(dValue);
        accumulator+=value;
    }
    return accumulator;
}





int main(int nNumberofArgs, char* pszArgs[])
{
cout<<"this program sums up multiple series"<<endl;
double accumulatedValue;
for(;;)
{
    cout<<"Enter next sequence"<<endl;
    accumulatedValue=sumSequence();
    if(accumulatedValue<=0.0)
    {
        break;
    }
        cout<<" \n Total of values squared is "<<accumulatedValue<<endl;

}

        cout<<" Thank You"<<endl;
        return 0;

}


