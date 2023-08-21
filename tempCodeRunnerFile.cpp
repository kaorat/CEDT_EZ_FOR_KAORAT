#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

int main() {
    std::string num;
    float x = 0;
    std::cin >> num;

    if (num.length() > 2) {
        x = std::stoll(num);

        if (num.length() <= 6) {
            x /= 1000.0;
            if (num.length()==4){
                std::cout << std::fixed << std::setprecision(1) << x << "K";
            }else{
                std::cout <<round(x)<< "K";
            }
            
        } else if (num.length() <= 9) {
            x /= 1000000.0;
            if (num.length()==7){
                std::cout << std::fixed << std::setprecision(1) << x << "M";
            }else{
                std::cout<<round(x)<<"M";
            }
            
        } else if (num.length() > 9) {
            x /= 1000000000.0;
            if (num.length()==10){
                std::cout << std::fixed << std::setprecision(1) << x << "B";
            }else{
                std::cout<<round(x)<< "B";
            }
            
        }
    } else {
        std::cout << num;
    }

    return 0;
}