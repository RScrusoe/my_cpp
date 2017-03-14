#include<simplecpp>
#include<iostream>
main_program
{

    int i=1,f=1,e=1;
    repeat(100)
    {
        f=f*i;
        e=e+(1/f);
        i++;
    }
    cout<<e;
    wait(125);
}
