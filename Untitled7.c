#include<iostream.h>
struct Tender
{
    int tenderNo;
    float cost;
    char coName[20];
};
using namespace std;
void main()

{
    Tender T1;
    cout<<"\n EEnter Tender Number  ";
    cin>>T1.tenderNo;
    cout<<"\nEnter Cost  ";
    cin>>T1.cost;
    cout<<"Enter Company Name ";
    cin>>T1.coName;
    cout<<"\n Tendor Number Is "<<tenderNo;
    cout<<"\n Cost : "<<cost;
    cout<<"Comapany Name :: "<<coName;
    return 0;

}

