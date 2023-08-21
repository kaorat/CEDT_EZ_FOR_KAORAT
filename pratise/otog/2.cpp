#include <iostream>
#include <iomanip>

int main(){
    int sum=0,row=0,coloumn=0;
    double price[3][3];
    double min=price[0][0];
    std::cin>>row>>coloumn;
    for(int i=0;i<row;++i){
        for(int j=0;j<coloumn;++j){
            std::cin>>price[i][j];
        }
    }
    
    std::cout<<std::fixed<<std::setprecision(2)<<sum;
}