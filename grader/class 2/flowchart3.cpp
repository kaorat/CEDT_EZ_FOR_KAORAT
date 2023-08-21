#include <iostream>

int main(){
    int d,m,y;
    std::cin>>d>>m>>y;
    int n=31;
    if (m==4 || m==6 ||m==9 || m==11) {
        n=30;
    }else if (m==2){
        n=28;
        if ((y-543)%400==0){
            n=29;
        }else if (((y-543)%4==0) && ((y-543)%100!=0)){
            n=29;
        }
    }
    d+=15;
    if (d>n){
        d-=n;
        m+=1;
    }
    if (m>12){
        m-=12;
        y+=1;
    }
    std::cout<<d<<"/"<<m<<"/"<<y;
}