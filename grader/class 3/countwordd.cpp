    #include <iostream>
    #include <string>

    int main(){
        int x=0,sum=0;
        std::string check,input;
        std::getline(std::cin,check);
        std::getline(std::cin,input);
        int w = check.length();
        for (int p=0;p<input.length();p++){
                if (input[p]<'A'|| (input[p]>'Z'&& input[p]<'a') || input[p]>'z'){
                    input[p]=' ';
                }
        }

        int count = 0 ;
        for ( int i=0; i<input.length();i++){
            
            /*int j=0;
            while (j<check.length())
            {
                bool match=true;
                if (check[j]!=input[i+j]){
                    match=false;
                }
                if (match && (i==0 || input[i-1]==' ') && (i+check.length()==input.length() || input[i+check.length()]==' ')){
                    x+=1;
                }
                j++;
            }*/
            if(input[i] == check[0]){
                if(input[i-1] == ' ' && input[i+w] == ' ' && i==0 && i+check.length()=input.length()){
                    for(int j = 0;j<check.length();j++){
                        if(input[i+j] == check[j]){
                            count += 1;
                        }
                    }
                    if(count == w){
                        count = 0;
                        sum += 1;
                    }else{
                        count = 0;
                    }
                }
            }
            }
            
            std::cout<<sum;
        }
        
        
           
    