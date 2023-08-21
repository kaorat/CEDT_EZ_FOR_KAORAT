#include <iostream>

using namespace std;
int main(){
    int min =2000000000, max= -2000000000, count, num;
    cin>> count;
    for (int i=0;i<count;++i){
        cin>>num;
        if (max<num)
        {
            max=num;
        }
        if (min>num)
        {
            min=num;
        }
    }
    cout<< min<<endl;
    cout<< max<<endl;
}
