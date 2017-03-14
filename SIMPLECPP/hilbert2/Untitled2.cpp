#include<simplecpp>
void hilbert(int n,int theta,float d){

    if (n==1){
        forward(d);
        right(theta);
        forward(d);
        right(theta);
        forward(d);
        return ;
        }
    else {
        if(n%2==0){
            hilbert(n-1,-theta,d);
            right(theta);
            forward(d);

            hilbert(n-1,theta,d);
            left(theta);
            forward(d);
            left(theta);
            hilbert(n-1,theta,d);
            forward(d);
            right(theta);
            hilbert(n-1,-theta,d);
        }
        else{

            hilbert(n-1,-theta,d);
            forward(d);
            right(theta);
            hilbert(n-1,theta,d);
            forward(d);
            hilbert(n-1,theta,d);
            right(theta);
            forward(d);
            hilbert(n-1,-theta,d);
        }
            }
            return ;
}
main_program
{
    int n,theta=90; float d=0;
    turtleSim();
    penUp();
    forward(-240);
    left(-90);forward(240);
    left(90);
    penDown();
    cout<<"enter the H number :"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){d=2*d+1;}
    d=480/d;
    if(n%2!=0){left(90);
    }
    hilbert(n,theta,d);
    wait(25);

}

