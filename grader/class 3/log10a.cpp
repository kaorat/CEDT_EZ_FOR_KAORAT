#include <iostream>
#include <cmath>

int main() {
    double L = 0, U, a, x=0;

    std::cin >> a;
    U = a;
    x = (L + U) / 2;
    while (std::abs(a - pow(10, x)) > 1e-10 * std::max(a, pow(10, x))) {
        // std::cout<<std::abs(a - pow(x, 2))<<" "<<1e-10 * std::max(a, pow(x, 2))<<std::endl;
        if (pow(10, x) > a) {
            U=x;
            x=(L+x)/2;

        }
        if (pow(10, x) < a){
            L=x;
            x=(x+U)/2;
        }
    }
    std::cout<<x;
    return 0;
}

