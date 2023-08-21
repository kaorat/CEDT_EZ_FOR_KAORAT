#include <iostream>
int main(){
    int a,b,c,d,e;
    std::cin>>a;std::cin>>b;std::cin>>c;std::cin>>d;std::cin>>e;
    if (a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    if (c>d){
        int x=c;
        c=d;
        d=x;
    }
    if (a>c){
        c=a;
        int y=b;
        b=d;
        d=y;
    }
    a=e;
    if (a>b){
        int z=a;
        a=b;
        b=z;
    }
    if (c>a){
        int m=b;
        b=d;
        d=m;
        a=c;
    }
    if (a>d){
        std::cout<<d;
    }else{
        std::cout<<a;
    }
}