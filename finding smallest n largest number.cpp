    #include<iostream>
    using namespace std;
    int main()
    {
        int n,i,x;
        cout<<"Enter Number Of Elements in Array ";
        cin>>n;
        int a[n];
        for(i=1;i<=n;i++)
        {
            cout<<"a["<<i<<"] ";
            cin>>a[i];
        }
        for(i=1;i<=n;i++)
        {
            if(x<a[i])
            {
                x=a[i];
            }
        }
        cout<<"The Largest Number Of The Array is :: "<<x<<endl;


        for(i=0;i<=n;i++)
        {
            if(x>a[i])
            {
                x=a[i];
            }
        }
        cout<<"The Lowest Number Of Array is :: "<<x<<endl;
        return 0;
    }
