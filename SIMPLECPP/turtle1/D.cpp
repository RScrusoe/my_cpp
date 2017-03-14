#include <simplecpp>
#include<iostream>
#include<cmath>
main_program{
  turtleSim();
  left(90);
  forward(200);
  right(90);
  repeat(360){forward(100*PI/360.0); right(0.5);}
  wait(42);
}
