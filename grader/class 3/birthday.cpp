#include <iostream>

int main(){
    float p=0;
    float k=1,t=1;
    std::cin>>p;
    while (true)
    {

        t=(t*(365-(k-1)))/365;
        if ((1-t)>=p){
            std::cout<<k;
            break;
        }else{
            k+=1;
        }
    }
    
}