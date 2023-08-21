#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,c,x1,x2;
    cin >> a; cin >> b; cin >> c;
    x1=(-b-sqrt(pow(b,2)-4*a*c))/2*a;
    x2=(-b+sqrt(pow(b,2)-4*a*c))/2*a;
    cout<< x1 << " " << x2;
}