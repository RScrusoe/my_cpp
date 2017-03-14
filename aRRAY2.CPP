#include <iostream>
using namespace std;

int main()
{
    int i,n,x,sum;
    int ary[128];
    cout<<"Enter number of elements in Array ::  ";
    cin>>n;
    cout<<"Enter "<<n<<" Elements of Array \n";
    x=1;
    for(i=0;i<n;i++)
    {
          cout<<" "<<x<<">  ";
    x=x++;
        cin>>ary[i];
    }
sum=0;
for(i=0;i<n;i++)
{
    sum+=ary[i];
}
cout<<"Sum of Array is "<<sum<<endl;
return 0;
}
