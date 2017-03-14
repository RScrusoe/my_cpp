#include<iostream>
using namespace std;
int main()
{

    cout<<"This program sums up the multiple sequences entered by user\n";
    cout<<"Terminate the loop by entering a negative value";
    cout<<"Terminate the series by entering two negative numbers in series";
    int accumulator;
   do
   {

       accumulator=0;
       cout<<"Start the next sequence";

       for(;;)
       {
        int value=0;
        cout<<"  \n    Enter next Number::";
        cin>>value;
        if (value<0)
        {
            break;
        }
        accumulator=accumulator*value;
       }
       cout<<"\n The total for this sequence is "<<accumulator<<endl<<endl;
   }
   while (accumulator !=0);
   cout<<"Thank you"<<endl;
       return 0;
}
