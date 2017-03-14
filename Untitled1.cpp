#include <iostream>
#include <ctime>

using namespace std;
struct Point{
double x,y;
};

Point mid(Point &a)
{
    a.x=a.x/2;
    a.y=a.y/2;
  return a;
}
int main()
{   cout<<time(NULL)<<endl;
    Point p={1,2}; mid(p);
    cout<<p.y<<endl;
}
