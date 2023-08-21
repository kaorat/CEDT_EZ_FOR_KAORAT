#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int ps,y,x;
    double z;
    cin>>ps;
    y=(ps-543)%100;
    z=trunc(y/4);
    x=(y+z+11);
    cout<< x%7;
}