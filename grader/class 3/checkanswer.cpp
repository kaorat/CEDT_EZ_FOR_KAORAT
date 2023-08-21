#include <iostream>
#include <string>

int main(){
    std::string ans,in;
    int x=0;
    std::getline(std::cin >>std::ws,ans);
    std::getline(std::cin >>std::ws,in);
    if (ans.length()==in.length()){
        for (int i=0;i<ans.length();++i){
            if (ans[i]==in[i]){
                x+=1;
            }
        }
        std::cout<<x;
    }else{
        std::cout<<"Incomplete answer";
    }

}