#include <iostream>
#include<fstream>
#include<string>
using namespace std;



int main ()
{   string l;
    int c[10]; int i=0,cou=1;
    int a;

    //char a[10];
    ifstream in;
  //  in.open("test.txt",ios::in);
    ofstream out;
   cin.get(c[0]);
   cout<<c[0];
   //get(cin,c);
    out.open("temp123.txt");
  //getline(cin,l);
//cout<<l;
   // cout<<l[3]<<endl;

    in.open("test.txt",ios::in);
while(1&&(!(in.eof())))
    { // in.get(c[i]);
    cout<<a<<endl;
    out<<a;
       // in.get(c[i]); if(c[i]==' '){  cou++;}
        //out<<c[i];
       // getline(in,l,' '); //cout<<c<<endl;
      //  if(c[0]==' ')break;i++;
       //cout<<c[i]<<endl;
       i++;

    }
  //  cout<<cou<<endl;
}
