#include <iostream>
#include <string>
#include <cmath>
using namespace std;

long gcd(long a, long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    string first, second, third;
    cin >> first >> second >> third;
    
    // เศษ
    int top1int = stoi(second+third);   
    int top2int = stoi(second);
    int top;
    top=(top1int-top2int);
    // ส่วน
    int bot1=0,botsum;
    for (int i=0;i<third.length(); ++i) {
        bot1+=9*pow(10,i);
    }

    botsum=(bot1)*pow(10,second.length());
    int topsum;
    topsum=top+(stoi(first)*botsum);
    int y=gcd(topsum,botsum);
    cout << topsum/y << " / " << botsum/y; 


}
    
    
