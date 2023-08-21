#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double mos,hay,boy;
double most(double wei,double hei){
    mos=sqrt(wei*hei)/60;
    return mos;
}
double hayc(double wei,double hei){
    hay=0.024265*pow(wei,0.5378)*pow(hei,0.3964);
    return hay;
}
double boyd(double wei,double hei){
    boy=0.0333*pow(wei,0.6157-(0.0188*log10(wei)))*pow(hei,0.3);
    return boy;
}
int main(){
    double weight,height;
    cin >> weight; cin >> height;
    cout<< setprecision(15) << most(weight,height) <<endl;
    cout<< setprecision(15) << hayc(weight,height) <<endl;
    cout<< setprecision(15) << boyd(weight,height) <<endl;
}
