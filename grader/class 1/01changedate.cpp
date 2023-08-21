#include <iostream>
#include <string>
using namespace std;
int main(){
    string date;
    int d,m,y;
    cin >> date;
    d=stoi(date.substr(0,2));
    m=stoi(date.substr(3,2));
    y=stoi(date.substr(6,4))-543;
    switch (m){
        case 1:
            cout<<"JAN ";
            break;
        case 2:
            cout<<"FEB ";
            break;
        case 3:
            cout<<"MAR ";
            break;
        case 4:
            cout<<"APR ";
            break;
        case 5:
            cout<<"MAY ";
            break;
        case 6:
            cout<<"JUN ";
            break;
        case 7:
            cout<<"JUL ";
            break;
        case 8:
            cout<<"AUG ";
            break;
        case 9:
            cout<<"SEP ";
            break;
        case 10:
            cout<<"OCT ";
            break;
        case 11:
            cout<<"NOV ";
            break;
        case 12:
            cout<<"DEC ";
            break;   
    }
    cout << d <<", "<<y;
}
