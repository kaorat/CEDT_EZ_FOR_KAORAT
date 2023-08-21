#include <iostream>
#include <cmath>
using namespace std;


int main(){
    float fac=1,top1,top2,bot;
    for (int i=1;i <= 10; i++){
        fac*=i;
    }
    top1=fac/(pow(8,8));
    top2=(7/sqrt(71))-sin(40*M_PI/180);
    bot=pow(1.2,cbrt(2.3));
    cout<<(M_PI-top1+pow(log(9.7),top2))/bot;
    
}