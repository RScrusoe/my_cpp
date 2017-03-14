#include<string>
#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ifstream infile("Oxford.txt");
    ofstream outfile("hey.txt");
    cout<<"enter string to search:"<<endl;
    string a;
    getline(cin,a);
    int l=a.length(),i=0;
    char text[100000];
    while(i<100000&& !infile.eof())
    {
        infile.get(text[i]);
        i++;
    }
    bool che=false,found=false;
    text[99999]='\0';
    int temp=1;
    i=2;
    while(i<100000&&!found)
    {
        if(text[i-1]=='\n'&&text[i-2]=='\n')
        {
            che=true;
            temp=0;
        }
        if(che)
        {
           if(text[i]!= a[temp])
           {
              che=false;
              temp=0;
           }
            temp++;
           if(temp==l)
           {
               found=true;
           }
        }
        i++;
    }
    if(found)
    {
        cout<<"\n\n\n"<<a<<" -";
        while(text[i]!='\n')
        {
            cout<<text[i];
            i++;
        }
    }
    else{cout<<"meaning not found";}
    cout <<"\n\n\n\n\n                     THANK YOU\n\n\n\n";
}

