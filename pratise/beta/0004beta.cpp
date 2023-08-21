#include <iostream>


int main(){
    std::string str;
    std::cin>>str;
    int x=0;
    for ( char i :str){
        if (isupper(i)){
            x+=1;
        }
    }
    if (x==0){
        std::cout<<"All Small Letter";
    }else if (x==str.length()){
        std::cout<<"All Capital Letter";
    }else{
        std::cout<<"Mix";
    }
    
}
        
    
