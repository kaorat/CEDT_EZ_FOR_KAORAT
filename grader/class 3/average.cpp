#include <iostream>
#include <cmath>

int main(){
    float    x=0,i=0,sum=0;
    while (x != -1)
    {   
        std::cin>>x;
        sum+=x;
        i++;
    }
    if (i>1){
        std::cout<<round(((sum+1)/(i-1))*100)/100;
    }else{
        std::cout<<"No Data";
    }
    
}