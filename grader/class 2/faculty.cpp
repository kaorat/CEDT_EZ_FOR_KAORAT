#include <iostream>
#include <string>
int main() {
    std::string x;
    std::cin >> x;
    
    if (x.length() == 2) {
        if (x[0] == '0' && (x[1] == '1' || x[1] == '2')) {
            std::cout << "OK";
        } else if ((x[0] == '2' || x[0] == '3') && (x[1] >= '0' && x[1] <= '9')) {
            std::cout << "OK";
        } else if (x[0] == '4' && x[1] == '0') {
            std::cout << "OK";
        } else if (x[0] == '5' && (x[1] == '1' || x[1] == '3' || x[1] == '5' || x[1] == '8')) {
            std::cout << "OK";
        } else {
            std::cout << "Error";
        }
    } else {
        std::cout << "Error";
    }

    
}