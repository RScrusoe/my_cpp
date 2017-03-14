//Program to convert Celsius temperature to Farenheit
#include<iostream>
using namespace std;
int main()
{
    int celsius;
    cout<< "enter temp in celsius:";
    cin>> celsius;
    int farenheit;
    farenheit=180*celsius/100+32;
    cout<< "Farenheit value is:  ";
    cout<<farenheit<<endl;

    return 0;
    }

