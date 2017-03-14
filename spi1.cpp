#include<iostream>
using namespace std;
int main()
{int credit,scredit; int total; int SPI;
char x;
int AA=10,AB=9.5;
total=0;
scredit=0;
while(credit!=0){
    cout<<"To calc SPI enter Credits First and then Grades in caps lock \n";
    cin>>credit;
    cin>>x;
    if(x==AA){x=10;}
    else{x=9.5;}
    total=credit*x+total;
    scredit+=credit;


}
 SPI=total/scredit;
cout<<"Your SPI is "<<SPI;
return 0;
}
