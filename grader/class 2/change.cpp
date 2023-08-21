#include <iostream>

int main(){
    std::string num1; 
    char n1comp,n1cal1,n1cal2;
    std::string num2;
    char n2comp,n2cal1,n2cal2;
    double n1grade,n2grade;
    int fail1=0;
    int fail2=0;
    std::cin>>num1>>n1grade>>n1comp>>n1cal1>>n1cal2;
    std::cin>>num2>>n2grade>>n2comp>>n2cal1>>n2cal2;

    if (n1comp>'A' || n1cal1>'C' || n1cal2>'C'){
        fail1+=1;
    }
    if (n2comp>'A' || n2cal1>'C' || n2cal2>'C'){
        fail2+=1;
    }
    if (fail1==1 && fail2==1){
        std::cout<<"None";
    }else if (fail1==1) {
        std::cout<<num2;
    }else if (fail2==1) {
        std::cout<<num1;
    }
    if (fail1==0 && fail2==0){
        if (n1grade>n2grade){
        std::cout<<num1;
    }else if (n1grade==n2grade){
        if (n1cal1>n2cal1){
            std::cout<<num2;
        }else if (n1cal1==n2cal1){
            if (n1cal2>n2cal2){
                std::cout<<num2;
            }else if (n1cal2==n2cal2) {
                std::cout<<"Both";
            }else{
                std::cout<<num1;
            }
        }else{
            std::cout<<num1;
        }   
    }else{   
        std::cout<<num2;
    }
    }
}