#include<iostream>
using namespace std;
void t(int n, char l, char c, char r)
{  if (n==1)
    {
        cout<<"move disc "<<n<<" from "<<l<<" to "<<r<<endl;
        return;
    }
    t(n-1,l,r,c);
   cout<<"move disc "<<n<<" from "<<l<<" to "<<r<<endl;
   t(n-1,c,l,r);
   }
int main()
{   cout<<"Enter number of disks in Tower of Hanoi  ";
    int n;
    cin>>n;
   t(n,'L','C','R');
}
