#include <iostream>

int main(){
    std::string te;
    int i=0;
    std::cin>>te;
    while (i<te.length()){
        int sum=1;
        while(te[i]==te[i+1]){
            sum+=1;
            i++;
        } if (te[i]!=te[i+1]){
                std::cout<<te[i]<<" "<<sum;
         }
            
        std::cout<<" ";
        i++;
    }
}