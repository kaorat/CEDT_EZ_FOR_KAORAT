    #include <iostream>
    using namespace std;
    int main(){
        double num;
        cin >> num;
        if ( num >= 80)
        {
            cout << "A";
        }
        else if ( num < 80 && num >= 70)
        {
            cout << "B";
        }
        else if ( num < 70 && num >= 60)
        {
            cout << "C";
        }
        else if ( num >= 50 && num < 60)
        {
            cout << "D";
        }

        else
        {
            cout << "F";
        }
        
       
        return 0;
    }