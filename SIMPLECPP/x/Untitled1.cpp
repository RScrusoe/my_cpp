
#include<simplecpp>
main_program{
initCanvas("abc",500,500);
Turtle a; int xi,yi,z;
z=getClick();
yi=z%65536;
xi=z/65536;
a.moveTo(xi,yi);
a.left(30); float dy=-5;
repeat(100){float dx=1; dy=dy+0.05; a.move(dx,dy); }
wait(25);



}
