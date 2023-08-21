#include <iostream>
#include <cmath>
int main(){
    double a,b,c;
    std::cin>>a>>b;
    c=sqrt(pow(b,2)+pow(a,2));
    std::cout<<std::fixed<<round(c*1e6)/1e6;
}