#include <ctime>
#include <iostream>
using namespace std;

int main() {
    time_t t = time(0);
    cout<<t<<endl; // get time now
    struct tm * now = localtime( & t );
    cout << (now->tm_year + 1900) << '-'
         << (now->tm_mon + 1) << '-'
         <<  now->tm_mday
         << endl;
         int a,b,c,x,y,z,d;
         a=(now->tm_year + 1900);
         b=(now->tm_mon + 1);
         c=now->tm_mday;
         cout<<(a+b+c)*(a+b)*c<<"\n";
         x=(now->tm_min);
         y=(now->tm_hour);
         z=(now->tm_sec);
         d=(now->tm_yday);
         cout<<"\n"<<d;
         cout<<"\n"<<x;

}
