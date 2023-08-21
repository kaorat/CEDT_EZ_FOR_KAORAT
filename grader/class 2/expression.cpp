#include <iostream>
#include <cmath>

int main(){
    double x,top,bot;
    std::cin>>x;
    top=pow(x,sqrt(log(pow(x+1,2))));
    bot=10-x;
    std::cout<<round((top/bot)*1e6)/1e6;
}