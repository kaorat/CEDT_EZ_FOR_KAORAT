    #include <iostream>
    int main(){
        std::string num;
        std::cin>> num;
        int b;
        b=num.length();
        if (b==10){
            if (num[0]=='0'){
                if (num[1]=='6'){
                    std::cout<< "Mobile number";
                }
                else if (num[1]=='8'){
                    std::cout<< "Mobile number";
                }
                else if (num[1]=='9'){
                    std::cout<< "Mobile number";    
                }
                else{
                    std::cout<< "Not a mobile number";
                }
            }
            else{
                std::cout<< "Not a mobile number";
            }
        }else{
            std::cout<< "Not a mobile number";
        }
    }