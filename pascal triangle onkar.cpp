#include<iostream>
using namespace std;
int main(){
    int i,n,k=2;
    cin>>n;long long int o[n],p[n-1];
    p[0]=1;
    p[1]=1;
    cout<<"\n\n1\n1  1"<<endl;
    while(k<n){
        o[0]=1;
        o[k]=1;
        cout<<o[0]<<"  ";
        for(i=1;i<k;i++){
                o[i]=p[(i-1)]+p[i];
                cout<<o[i]<<"  ";
        }
        cout<<o[k]<<endl;
        k+=1;
        for(i=0;i<k;i++){
            p[i]=o[i];
        }
    }
    return 0;
}
