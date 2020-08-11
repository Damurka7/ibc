#include <iostream>
using namespace std;
int main() {
    int k=0;
    float x1,x2,x3,x4,y1,y2,y3,y4,x5,y5;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4>>x5>>y5;
    double a1 = ((y1-y2)/(x1-x2));
    double b1=y1-a1*x1;
    double a2 = (y2-y3)/(x2-x3);
    double b2=y2-a2*x2;
    double a3 = (y3-y4)/(x3-x4);
    double b3=y3-a3*x3;
    double a4 = (y4-y1)/(x4-x1);
    double b4=y4-a4*x4;
    cout<<a2;
    if ((a1*x5+b1<=y5) && (a3*x5+b3>=y5)){
        k++;
    }
    if ((a2*x5+b2<=y5) && (a4*x5+b4>=y5)){
        k++;
    }
    if(k==2){
        cout<<1;
    }else{
        cout<<0;
    }
    return 0;
}
