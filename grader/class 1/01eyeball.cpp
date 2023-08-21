#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double xm,ym,xe,ye,re,rp,a,b,c,A,B,C;
    cin >> xe >> ye >> re >> rp >> xm >> ym;
    A=xm-xe;
    B=ym-ye;
    C=sqrt(pow(A,2)+pow(B,2));
    c=re-rp;
    b=(B*c)/C;
    a=(A*c)/C;
    cout << round(xe+a) << " " << round(ye+b);
}