#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out;
    ifstream in;
    out.open("marks.txt",ios::ate|ios::app);
    in.open("marks.txt",ios::in);
    char ans = 'y';
    int rollno; float marks;
    in>>rollno; //cout<<rollno;
    in.seekg(); in>>marks;
    cout<<marks;
    marks=999; //out.seekp(4); ///out<<marks;
   // out<<"3rd line"<<endl;

  /*  if(rollno==11){ marks = 100; out<<marks;}
    while (ans=='y'||ans=='Y')
    {
        cout<<"\nEnter Roll Number : ";
        cin>>rollno;
        cout<<"\nEnter Marks : ";
        cin>>marks;
        out<<rollno<<"\t"<<marks<<endl;
        cout<<"do u want to enter more record?? (y/n) ... ";
        cin>>ans;
    }*/
    out.close();
    return 0;
}
