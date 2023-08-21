#include <iostream>
#include <string>

int main(){
    std::string input;
    std::getline(std::cin,input);
    if (input=="no parentheses"){
        std::cout<<"no parentheses";
    }else{
        for (int i=0;i<input.length();++i){
            if (input[i]=='('){
                input.replace(i,1,"[");
            }else if(input[i]=='['){
                input.replace(i,1,"(");
            }else if(input[i]==')'){
                input.replace(i,1,"]");
            }else if(input[i]==']'){
                input.replace(i,1,")");
            }
        }
        std::cout<<input;
    }
}