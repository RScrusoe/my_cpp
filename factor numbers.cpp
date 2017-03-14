#include<iostream>
using namespace std;
int main()
{
    int n,o=1,i=1,sum=0;
    cin>>n;
    while(i<=n){

    for(int j=1;j<=(o-1);j++){  if(o%j==0){sum+=j;}    }
    if(sum>o){cout<<o<<endl;  i++;}
    sum=0;
    o++;
    }

}
