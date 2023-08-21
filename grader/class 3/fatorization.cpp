#include <iostream>

int main(){
    unsigned long long int input;
    int k=2;
    std::cin>>input;
    while (k<=input){
        if (k==input){
            std::cout<<k;
            break;
        }else{
            while(input%k==0){
                if (k==input){
                    std::cout<<k;
                    break;
                }
            std::cout<<k<<"*";
            input=input/k;
            if (input%k != 0){
                break;
            }
            
        }
        }
        k++;
    }
}