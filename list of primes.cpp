#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int c;
	cin>>c;


while(c>0){
		int a,b;
		cin>>a>>b;
		for(int i=a;i<=b;i++){
                if(i==1)continue;
			int z = floor(sqrt(i));
			bool flag=1;
			for(int j=2; j<=z;j++)
            {
                if(i%j==0){flag=0; break;}
            }
            if(flag==1)cout<<i<<endl;
		}
cout<<endl;


		c--;
	}


	return 0;
}
