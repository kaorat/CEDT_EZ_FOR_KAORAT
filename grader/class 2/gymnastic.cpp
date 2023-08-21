#include <iostream>
#include <cmath>
int main(){
    double num;
    double array[3];
    std::cin>>array[0]>>array[1]>>array[2]>>array[3];
    if (array[0]>array[1]){
        double temp=array[0];
        array[0]=array[1];
        array[1]=temp;
    }
    if (array[2]>array[1]){
        double temp=array[1];
        array[1]=array[2];
        array[2]=temp;
    }
    if (array[3]>array[2]){
        double temp=array[3];
        array[3]=array[2];
        array[2]=temp;
    }
    
    
    }
    

        
    
    


    
