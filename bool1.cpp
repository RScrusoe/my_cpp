#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
cout.setf(cout.boolalpha);
int Arg1;
cout<<"Enter 1st number::";
cin>> Arg1;

int Arg2;
cout<<"Enter 2nd Number::";
cin>>Arg2;

 bool b;
 b=(Arg1==Arg2);
 cout<<"the statement "<<Arg1<<" "
 <<"equals "<<Arg2<<" "
 <<"is "<<b
 <<endl;
 return 0;
}
