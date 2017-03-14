#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t>0){
       
        int n;
        cin>>n;
        int i=0;
        int ct=0;
        
        int tmp = 0;
      
        
        while(n>=tmp){
           
            ct++;
            tmp = pow(2,ct);
        }
       
        int l[ct];
     
        while(n>0){
            if(n==0)break;
            if(n%2==0){
         n=n/2;
         l[i]=0;
             i++;
        }
            else{
                n=n/2;
                l[i]=1;
                i++;
            }
        }

        for(int j=(ct-1);j>=0;j--){cout<<l[j];}
        cout<<endl;
        t--;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
