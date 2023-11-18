#include <iostream>

// Master79
// Vasya and Coins

using namespace std;

int main(){

    int t, a, b;

    cin >> t;

    for(int i = 0; i < t; i++){

        cin >> a >> b;

        if(a == 0){

            cout << 1 << endl;
        }

        else if(b == 0){

            cout << ++a << endl;
        }

        else if(a >= b){

            cout << (a + (b * 2) + 1) << endl;
        }else{

            cout << ((b * 2) + a + 1) << endl;
        }
    }

    return 0;
}