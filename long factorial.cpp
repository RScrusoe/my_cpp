#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int a[200],b[200],ans[200],temp,n;
    cin>>n;
    ans[199]=1;
    ans[198]=-1;
    temp=0;
    for (int i=2;i<=n;i++)
        {
        for(int j=199;j>=0;j++)
            {if(ans[j]==-1)
            {
                if(temp!=0)
                    {while(temp==0)
                    {a[j]=temp%10;
                     temp=temp/10; 
                     j--
                    }
                     a[j]=-1;                     
                    }
                break;}
             
            x=(i%10)*ans[j]+temp;
            a[j]=x%10;
             temp=x/10;
        }
        b[199]=0;
        for(int j=199;j>=0;j++)
            {if(ans[j]==-1)
            {
                if(temp!=0)
                    {while(temp==0)
                    {b[j-1]=temp%10;
                     temp=temp/10; 
                     j--
                    }
                     b[j-1]=-1;                     
                    }
                break;}
             
            x=(i%10)*ans[j]+temp;
            b[j-1]=x%10;
             temp=x/10;
        }
        for(int j=199;j>=0;j--)
            {
                ans[j]=(a[j]+b[j]);
            if(a[j]==-1)
                {
                for(int k=j;k>=0;k--)
                    ans[k]=
            }
             
        }
        
    }
        
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}