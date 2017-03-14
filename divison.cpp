#include<iostream>
using namespace std;
int main()

{
   int n,c,f,s=1,next;
   cout<<"Enter N :: ";
   cin>>n;
   for(c=0;c<n;c++)
   {
       if(c<=1)
       {
           next=c;

       }
       else{next=f+s;
       f=s;
       s=next;}
       cout<<next<<endl;

   }
    return 0;
}
