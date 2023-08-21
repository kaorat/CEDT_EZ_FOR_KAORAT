#include <iostream>

int main(){
    char text[50];
    int x=1;
    std::cin>>text;
    for (int i=0;i<50;++i){
        if(text[i]=='A'){
            if (x==1){
                x+=1;
            }else if (x==2){
                x-=1;
            }
        }else if(text[i]=='B'){
            if (x==2){
                x+=1;
            }else if (x==3){
                x-=1;
            }
        }else if(text[i]=='C'){
            if (x==1){
                x+=2;
            }else if (x==3){
                x-=2;
            }
        }
    }
    std::cout<<x;
}