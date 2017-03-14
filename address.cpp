#include<iostream>
using namespace std;
int main()

 {

    bool b;
    char c;
    long l;
    float f;
    double d;
    int n;

    cout.setf(ios::hex);
    cout.unsetf(ios::dec);

    cout<<" Address of b is----   "<< &b<<endl;
    cout<<" Address of c is----   "<< &c<<endl;
    cout<<" Address of l is----   "<< &l<<endl;
    cout<<" Address of f is----   "<< &f<<endl;
    cout<<" Address of d is----   "<< &d<<endl;
    cout<<" Address of n is----   "<< &n<<endl;
    return 0;
 }
