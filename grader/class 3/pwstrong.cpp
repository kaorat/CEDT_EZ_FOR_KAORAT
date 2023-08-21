    #include <iostream>
    #include <string>
    int main(){
        std::string input;
        bool x=false,y=false,z=false,m=false;
        while(std::cin>>input){
            x=false,y=false,z=false,m=false;
                for (long unsigned int i=0;i < input.length() ;++i){
                    if (input[i]>='0' && input[i]<='9'){
                        x=true;
                    }
                    if  (input[i]>='A' && input[i]<='Z'){
                        y=true;
                    }
                    if  (input[i]>='a' && input[i]<='z'){
                        z=true;
                    }if  ((input[i]>'9' && input[i] <'A') || (input[i] >'Z' && input[i]<'a') || input[i]>'z' || input[i]<'0'){
                        m=true;
                    }
            }   
            
            if (input.length()>=12 && x && y && z && m){
                std::cout<<">> strong"<<std::endl;
            }else if ( input.length()>=8  && x && y && z){
                std::cout<<">> weak"<<std::endl;
            }else{
                std::cout<<">> invalid"<<std::endl;
            }
    }
    }
