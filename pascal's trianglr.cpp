#include<iostream>
using namespace std;
int main()
{
    int n,k=3; int ur[k-2];
    ur[1]=1;
    cin>>n;
   //upper row
    if(n==1){cout<<"\n1";}
    else if(n==2){cout<<"\n1\n1  1";}
    else if(n>2){  cout<<"1\n1  1\n"<<endl;
    while(n-k>0)
        {int a[k-1],ur[(k-2)];

          a[0]=a[k-1]=ur[0]=ur[(k-2)];
            cout<<a[0]<<"  ";
          for(int i=1;i<=(k-1);i++)
            {
                a[i]=ur[(i-1)]+ur[i]; cout<<a[i]<<"  ";
            }
            cout<<a[k]<<"";  k++;
            for(int j=1;j<=(k-1);j++){ur[j]=a[j]; }


        }
    }
}
