#include <iostream>
#include <string>

int main() {
    int x = 0;
    std::string check, input;
    std::cin >> check;
    std::getline(std::cin >> std::ws, input);

    for (int i = 0; i <= input.length() - check.length(); ++i) {
        int j = 0;
        bool match = true;
        
        for (int k = 0; k < input.length(); ++k) {
            if (input[k] < 'A' || (input[k] > 'Z' && input[k] < 'a') || input[k] > 'z') {
                input[k] = ' ';
            }
        }
        
        while (j < check.length()) {
            if ((check[j] != input[i + j]) && (input[i + j - 1] != ' ' || input[i + j + check.length()] != ' ')) {
                match = false;
                break;
            }
            ++j;
        }
        
        if (match) {
            if ((i == 0 || input[i - 1] == ' ') && (i + check.length() == input.length() || input[i + check.length()] == ' ')) {
                x += 1;
            }
        }
    }
    
    std::cout << x;
    return 0;
}
