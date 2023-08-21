#include <iostream>

int main(){
    int num[3];
    char text[3];
    std::cin>>num[0]>>num[1]>>num[2];
    std::cin>>text[0]>>text[1]>>text[2];
    for (int i=0;i<3;++i){
        for (int j=0;j<3-i;++j) {
            if (num[j]>num[j+1]){
                int temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    for (int i=0;i<3;++i){
        if (text[i]=='A'){
            std::cout<<num[0];
        }else if (text[i]=='B'){
            std::cout<<num[1];
        }else if (text[i]=='C'){
            std::cout<<num[2];
        }
        std::cout<<" ";
    }
}