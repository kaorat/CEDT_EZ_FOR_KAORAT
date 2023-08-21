#include <iostream>

int main(){
    int sum=0,x=0;
    for (int i=0;i<10;i++){
        std::cin>>x;
        sum+=x;
    }
    std::cout<<sum%42;

}
