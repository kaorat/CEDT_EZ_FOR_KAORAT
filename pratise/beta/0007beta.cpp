#include <iostream>
#include <cmath>
#include <iomanip>
int main(){
    unsigned long int r=0;
    std::cin>>r;
    std::cout<<std::fixed<<std::setprecision(6)<<pow(r,2)*(M_PI)<<std::endl;
    std::cout<<std::fixed<<std::setprecision(6)<<pow(r,2)*2;
}