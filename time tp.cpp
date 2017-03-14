#include<iostream>
#include<ctime>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ifstream in;
    ofstream out;
    time_t t2;
    in.open("test.txt",ios::in);
    out.open("test.txt", ios::app);
   char l; int i=0;
   out<<"0";
  /*  while(1)
        {
          if(in.eof()) break;
            in.get(l);
           out<<l;
           // if(l=='\n')i++;

        } */

        cout<<i;

}
