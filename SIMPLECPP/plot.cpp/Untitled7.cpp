
#include "koolplot.h"

int main()
{
   Plotdata x(1.0, 3.0), y = sin(x)*cos(x)+log(x*x) +y^2 - 0.5*x^2;
   plot(x, y);
   return 0;
}
