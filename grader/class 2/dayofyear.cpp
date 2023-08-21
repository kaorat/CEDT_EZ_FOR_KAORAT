#include <iostream>
int main(){
    int newy,y,d,m;
    std::cin>>d;
    std::cin>>m;
    std::cin>>y;
    int newm=(m-1);
    if ((y-543)%4==0){
        if ((y-543)%100==0){
            if ((y-543)%400==0){
                // y=366;
                newy=1;
            }else{
                // y=365;
                newy=0;
            }
        }else{
            // y=366;
            newy=1;
        }
    }
    else{
        // y=365  
    newy =0;
}
switch(newy){
    case 0:
        if (m==1){
            std::cout<<d;
        }else if (m==2){
            std::cout<<d+31;
        }else if (m==3){
            std::cout<<d+31+28;
        }else if (m==4){
            std::cout<<d+31+28+31;
        }else if (m==5){
            std::cout<<d+31+28+31+30;
        }else if (m==6){
            std::cout<<d+31+28+31+30+31;
        }else if (m==7){
            std::cout<<d+31+28+31+30+31+30;
        }else if (m==8){
            std::cout<<d+31+28+31+30+31+30+31;
        }else if (m==9){
            std::cout<<d+31+28+31+30+31+30+31+31;
        }else if (m==10){
            std::cout<<d+31+28+31+30+31+30+31+31+30;
        }else if (m==11){
            std::cout<<d+31+28+31+30+31+30+31+31+30+31;
        }else if (m==12){
            std::cout<<d+31+28+31+30+31+30+31+31+30+31+30;
        }
        break;
    case 1:
        if (m==1){
            std::cout<<d;
        }else if (m==2){
            std::cout<<d+31;
        }else if (m==3){
            std::cout<<d+31+29;
        }else if (m==4){
            std::cout<<d+31+29+31;
        }else if (m==5){
            std::cout<<d+31+29+31+30;
        }else if (m==6){
            std::cout<<d+31+29+31+30+31;
        }else if (m==7){
            std::cout<<d+31+29+31+30+31+30;
        }else if (m==8){
            std::cout<<d+31+29+31+30+31+30+31;
        }else if (m==9){
            std::cout<<d+31+29+31+30+31+30+31+31;
        }else if (m==10){
            std::cout<<d+31+29+31+30+31+30+31+31+30;
        }else if (m==11){
            std::cout<<d+31+29+31+30+31+30+31+31+30+31;
        }else if (m==12){
            std::cout<<d+31+29+31+30+31+30+31+31+30+31+30;
        }
        break;
}

}