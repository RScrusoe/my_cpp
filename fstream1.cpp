#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream infile("in.txt");
    ofstream outfile("out.txt");
     int n,o=1,i=1,sum=0;
   infile>>n;
    while(i<=n){

    for(int j=1;j<=(o-1);j++){  if(o%j==0){sum+=j;}    }
    if(sum>o){outfile<<o<<endl;  i++;}
    sum=0;
    o++;
    }

}
