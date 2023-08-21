#include <iostream>

int main(){
    unsigned long int num;
    std::cin>>num;
    std::cout<<num;
    while (num!=1)
    {
        if (num%2==0){
            num=num/2;
        }else{
            num=(num*3)+1;
        }
        std::cout<<" "<<num;
    }
    
}