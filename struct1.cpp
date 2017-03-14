#include<iostream>
struct Tender
{
    int tenderNo;
    float cost;
    char coName[20];
};
using namespace std;
int main()

{
    Tender T1;
    cout<<"\nEnter Tender Number  ";
    cin>>T1.tenderNo;
    cout<<"\nEnter Cost  ";
    cin>>T1.cost;
    cout<<"\nEnter Company Name ";
    cin>>T1.coName;
    cout<<"\n Tendor Number Is "<<T1.tenderNo;
    cout<<"\n Cost : "<<T1.cost;
    cout<<"\n Comapany Name :: "<<T1.coName;
    return 0;

}
