#include <iostream>
#include <string>
using namespace std;

int main(){
    string id;
    int x,sumin;
    cin>>id;
    sumin = 13*stoi(id.substr(0,1))+12*stoi(id.substr(1,1))+11*stoi(id.substr(2,1))+10*stoi(id.substr(3,1))+9*stoi(id.substr(4,1))+8*stoi(id.substr(5,1))+7*stoi(id.substr(6,1))+6*stoi(id.substr(7,1))+5*stoi(id.substr(8,1))+4*stoi(id.substr(9,1))+3*stoi(id.substr(10,1))+2*stoi(id.substr(11,1));
    x=(11-(sumin%11))%10;
    cout<< id.substr(0,1) << "-" << id.substr(1,4) << "-" << id.substr(5,5) << "-" << id.substr(10,2) << "-" << x;
}