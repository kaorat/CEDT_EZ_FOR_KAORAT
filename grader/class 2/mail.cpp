#include <iostream>

int main(){
    int wei;
    std::cin>>wei;
    if (wei<=100){
        std::cout<<18;
    }
    else if (100<wei && wei<=250){
        std::cout<<22;
    }
     else if (250<wei && wei<=500){
        std::cout<<28;
    }
     else if (500<wei && wei<=1000){
        std::cout<<38;
    }
    else if (1000<wei && wei<=2000){
        std::cout<<58;
    }
    else{
        std::cout<<"Reject";
    }
}