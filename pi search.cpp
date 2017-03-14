#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream pi;
    int n,z;
    char a;
    int t;
    int counter=0;
    cin>>n;
    int b[n];
    for(int i=0; i<n; i++)
    {
        cin>>z;
        b[i]=z;
    }
    cout<<b[0]<<endl;
    pi.open("pi.txt", ios::in);
    while(!pi.eof())
    {
        pi.get(a);
        t=a;
        t-=48;
        //cout<<a<<"   " <<t<<"  this is t\n";
       // if(a=='3')
       // {
            cout<<"fufyuk \n";
            //counter=1;
            for(int j=0; j<n; j++)
            {   //cout<<"hi  ";
                //cout<<t<<"  this is t\n";
                while(a==' ')
                {   //cout<<"hi  ";
        pi.get(a);
        t=a; t-=48;
                }
                if(t==b[j])
                {
                    cout<<"hi  "<<t<<"  "<<b[1];
                    //counter++;
                }
                else
                {
                    break;
                }
               pi.get(a);
               t=a; t-=48;

            }
        //}

    }
    cout<<"\n\n\n\n "<<counter;
}
