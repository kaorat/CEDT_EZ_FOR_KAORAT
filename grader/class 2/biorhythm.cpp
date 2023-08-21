#include <iostream>
#include <cmath>

int main(){
    long d_in,m_in,y_in,d_tar,m_tar,y_tar;
    long t=0;
    double phy,inte,emo;
    std::cin>>d_in>>m_in>>y_in>>d_tar>>m_tar>>y_tar;
    long newy,newy_1;
    long red=0;
    long blue=0;
    if ((y_in-543)%4==0){
    if ((y_in-543)%100==0){
        if ((y_in-543)%400==0){
            // y_y_in=366;
            newy_1=1;
        }else{
            // y_y_in=365;
            newy_1=0;
         }
        }else{
            // y_y_in=366;
            newy_1=1;
        }
    }
    else{
        // y_y_in=365  
        newy_1 =0;
    }
    switch (newy_1)
    {
    case 0:
        if (m_in==1){
            red=((31-d_in)+1)+28+31+30+31+30+31+31+30+31+30+31;
        }else if (m_in==2){
            red=((28-d_in)+1)+31+30+31+30+31+31+30+31+30+31;
        }else if (m_in==3){
            red=((31-d_in)+1)+30+31+30+31+31+30+31+30+31;
        }else if (m_in==4){
            red=((30-d_in)+1)+31+30+31+31+30+31+30+31;
        }else if (m_in==5){
            red=((31-d_in)+1)+30+31+31+30+31+30+31;
        }else if (m_in==6){
            red=((30-d_in)+1)+31+31+30+31+30+31;
        }else if (m_in==7){
            red=((31-d_in)+1)+31+30+31+30+31;
        }else if (m_in==8){
            red=((31-d_in)+1)+30+31+30+31;
        }else if (m_in==9) {
            red=((30-d_in)+1)+31+30+31;
        }else if (m_in==10){
            red=((31-d_in)+1)+30+31;
        }else if (m_in==11){
            red=((30-d_in)+1)+31;
        }else if (m_in==12){
            red=((31-d_in)+1);
        }
        break;
    
    case 1:
    if (m_in==1){
            red=((31-d_in)+1)+29+31+30+31+30+31+31+30+31+30+31;
        }else if (m_in==2){
            red=((29-d_in)+1)+31+30+31+30+31+31+30+31+30+31;
        }else if (m_in==3){
            red=((31-d_in)+1)+30+31+30+31+31+30+31+30+31;
        }else if (m_in==4){
            red=((30-d_in)+1)+31+30+31+31+30+31+30+31;
        }else if (m_in==5){
            red=((31-d_in)+1)+30+31+31+30+31+30+31;
        }else if (m_in==6){
            red=((30-d_in)+1)+31+31+30+31+30+31;
        }else if (m_in==7){
            red=((31-d_in)+1)+31+30+31+30+31;
        }else if (m_in==8){
            red=((31-d_in)+1)+30+31+30+31;
        }else if (m_in==9) {
            red=((30-d_in)+1)+31+30+31;
        }else if (m_in==10){
            red=((31-d_in)+1)+30+31;
        }else if (m_in==11){
            red=((30-d_in)+1)+31;
        }else if (m_in==12){
            red=((31-d_in)+1);
        }
        break;
    }

    if ((y_tar-543)%4==0){
    if ((y_tar-543)%100==0){
        if ((y_tar-543)%400==0){
            // y_tar=366;
            newy=1;
        }else{
            // y_tar=365;
            newy=0;
         }
        }else{
            // y_tar=366;
            newy=1;
        }
    }
    else{
        // y_tar=365  
        newy =0;
    }
    
    switch(newy){
    case 0:
        if (m_tar==1){
            blue=(d_tar)-1;
        }else if (m_tar==2){
            blue=(d_tar+31)-1;
        }else if (m_tar==3){
            blue=(d_tar+31+28)-1;
        }else if (m_tar==4){
            blue=(d_tar+31+28+31)-1;
        }else if (m_tar==5){
            blue=(d_tar+31+28+31+30)-1;
        }else if (m_tar==6){
            blue=(d_tar+31+28+31+30+31)-1;
        }else if (m_tar==7){
            blue=(d_tar+31+28+31+30+31+30)-1;
        }else if (m_tar==8){
            blue=(d_tar+31+28+31+30+31+30+31)-1;
        }else if (m_tar==9){
            blue=(d_tar+31+28+31+30+31+30+31+31)-1;
        }else if (m_tar==10){
            blue=(d_tar+31+28+31+30+31+30+31+31+30)-1;
        }else if (m_tar==11){
            blue=(d_tar+31+28+31+30+31+30+31+31+30+31)-1;
        }else if (m_tar==12){
            blue=(d_tar+31+28+31+30+31+30+31+31+30+31+30)-1;
        }
        break;
    case 1:
        if (m_tar==1){
            blue=(d_tar)-1;
        }else if (m_tar==2){
            blue=(d_tar+31)-1;
        }else if (m_tar==3){
            blue=(d_tar+31+29)-1;
        }else if (m_tar==4){
            blue=(d_tar+31+29+31)-1;
        }else if (m_tar==5){
            blue=(d_tar+31+29+31+30)-1;
        }else if (m_tar==6){
            blue=(d_tar+31+29+31+30+31)-1;
        }else if (m_tar==7){
            blue=(d_tar+31+29+31+30+31+30)-1;
        }else if (m_tar==8){
            blue=(d_tar+31+29+31+30+31+30+31)-1;
        }else if (m_tar==9){
            blue=(d_tar+31+29+31+30+31+30+31+31)-1;
        }else if (m_tar==10){
            blue=(d_tar+31+29+31+30+31+30+31+31+30)-1;
        }else if (m_tar==11){
            blue=(d_tar+31+29+31+30+31+30+31+31+30+31)-1;
        }else if (m_tar==12){
            blue=(d_tar+31+29+31+30+31+30+31+31+30+31+30)-1;
        }
        break;
    }
    t=365*(y_tar-y_in-1)+red+blue;

    phy=sin((2*M_PI/23)*t);
    emo=sin((2*M_PI/28)*t);
    inte=sin((2*M_PI/33)*t);
    std::cout<<t<<" "<<round(phy*100.0)/100.0<<" "<<round(emo*100.0)/100.0<<" "<<round(inte*100.0)/100.0;
}