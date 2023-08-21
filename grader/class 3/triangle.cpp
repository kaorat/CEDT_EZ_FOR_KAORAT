#include <iostream>

int main(){
    int input;
    std::cin>>input;
    for (int i=0;i<(input-1);++i){
        for (int j=0;j<(input+i-1);++j){
            if (i+j==input-1){
                std::cout<<"*";
            }else{
                std::cout<<".";
            }
        }
        std::cout<<"*"<<std::endl;
    }
    for (int i=0;i<2*(input)-1;++i){
        std::cout<<"*";
    }
}