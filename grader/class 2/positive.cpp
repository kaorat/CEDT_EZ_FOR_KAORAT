#include <iostream>

int main(){
    int num;
    std::cin>> num;
    if (num>0){
        std::cout<< "positive"<<std::endl;
    }else if( num==0){
        std::cout<< "zero"<<std::endl;
    }
    else{
        std::cout<< "negative"<<std::endl;
    }
    if (num%2==0){
        std::cout<< "even";
    }else{
        std::cout<< "odd";
    }
}