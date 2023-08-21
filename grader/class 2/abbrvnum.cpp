#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
int main(){

    std::string num;
    float x=0;
    std::cin>>num;
    if (num.length()>2){
        if (num.length()<=6){
            if (num.length()==4){
                x=stoll(num)/pow(10,3);
                std::cout<<round(x*10)/10<<"K";
            }
            if (num.length()==5){
                x=stoll(num)/pow(10,3);
                std::cout<<round(x)<<"K";
            }
            if (num.length()==6){
                x=stoll(num)/pow(10,3);
                std::cout<<round(x)<<"K";
            }
        }else if (num.length()<=9){
            if (num.length()==7){
                x=stoll(num)/pow(10,6);
                std::cout<<round(x*10)/10<<"M";
            }
            if (num.length()==8){
                x=stoll(num)/pow(10,6);
                std::cout<<round(x)<<"M";
            }
            if (num.length()==9){
                x=stoll(num)/pow(10,6);
                std::cout<<round(x)<<"M";
            }
        }else if (num.length()>9){
              if (num.length()==10)
                x=stoll(num)/pow(10,9);
                std::cout<<round(x*10)/10<<"B";
              if (num.length()>10){
                x=stoll(num)/pow(10,9);
                std::cout<<round(x)<<"B";
              }
                
        }else{
            std::cout<<num;
        }  
        } 
        }

        
        
    

    