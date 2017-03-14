#include <simplecpp>
#include<iostream>
#include<cmath>
main_program{
    int n,p;
cout<<"Enter N ";
cin>>n;
p=360/n;
int q=n/3;


turtleSim();
    right(90);
    penUp();forward(225);
    right(90);penDown();
    repeat(360) {forward(4);right(1);}

    repeat(q){
        right(60);


    repeat(120){forward(4);right(1);}

    repeat(2){right(120); repeat(120){forward(4);right(1);}}
    right(60);
    repeat(p){forward(4);right(1);}
    }





wait(25);
}



