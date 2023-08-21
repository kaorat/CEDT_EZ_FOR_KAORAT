#include <iostream> 

int main(){
    int num1,num2;
    int i=0;
    
    int max1=0,min1=0,max2=0,min2=0;
    while (true)
    {
        std::cin>>num1;
        if (num1 == -999 || num1 ==-998) {
            break;
        }
        std::cin>>num2;
        if (i%2==0){
            if (num1>max1){
                max1=num1;
            }
            if (min1>num1){
                min1=num1;
            }
            if (num2>max2){
                max2=num2;
            }
            if (min2>num2){
                min2=num2;
            }
        }else {
            if (num2>max1){
                max1=num2;
            }
            if (min1>num2){
                min1=num2;
            }
            if (num1>max2){
                max2=num1;
            }
            if (min2>num1){
                min2=num1;
            }
        }
        ++i;
    }
    if (num1==-999){
        std::cout<< min2 <<" "<< max1 ;
        
    }
    if (num1==-998){
        std::cout<< min1 <<" "<< max2 ;
    }
}