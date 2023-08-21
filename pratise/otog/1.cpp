#include <iostream>

int main(){
    long int num,r1,r2,r3,r4,sum;
    std::cin>>num;
    r1=num/15;
    r2=(num%15)/5;
    r3=((num%15)%5)/2;
    r4=((num%15)%5)%2;
    if (num%15>10){
        r1+=1;
        r2=0;
    }else if ((num%15<10)) { 
        if (num%15==9){
            r2+=1;
            r3-=2;
        }else if (num%15==4){
            r3-=2;
            r2+=1;
        }else if (num%15==3){
            r4-=1;
            r3+=1;
        }
    }
    sum=(r1*3000)+(r2*1500)+(r3*800)+(r4*500);
    std::cout<<sum;
}