#include <iostream>

using namespace std;

int main(){
    int array1[100][100];
    int array2[100][100];
    int row=0,coloumn=0;
    cin>>row>>coloumn;
    for (int i=0; i<row;i++) {
        for (int j=0;j<coloumn;j++){
            cin>>array1[i][j];
        }
    }
    for (int i=0; i<row;i++) {
        for (int j=0;j<coloumn;j++){
            cin>>array2[i][j];
        }
    }
    for (int i=0; i<row;i++) {
        for (int j=0;j<coloumn;j++){
            cout<<array2[i][j]+array1[i][j]<<" ";
        }
        cout<<endl;
    }
}