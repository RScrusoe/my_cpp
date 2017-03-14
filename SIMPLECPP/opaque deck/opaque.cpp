
#include<simplecpp>
#include<cmath>
main_program{
    cout<<"Enter angle in degrees "; float a;
    cin>>a;
    float p;
    p=((1/((sin(a))*(sin(a))))+(1/(sin(a)))+(1)-(tangent(a)))*(100)*(tangent(a));

initCanvas("rahul",500,500);
Turtle t1;
t1.left(142);
repeat(52)
{
    t1.forward(100); t1.right(90);t1.forward(60);t1.right(90);t1.forward(p);t1.right(180.0+a);
    t1.penUp(); t1.moveTo(250,250);t1.penDown();
}
t1.forward(100); t1.right(90);t1.forward(60);t1.right(90);t1.forward(100);t1.right(90);t1.forward(60);
wait(125);
}

