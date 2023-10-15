#include <iostream>

// Master79
// Ultra-Fast Mathematician

using namespace std;

int main(){

    string x, y;
    getline(cin, x);
    getline(cin, y);

    string z = "";
    for(int i = 0; i < x.length(); i++){

        if(x[i] != y[i]){

            z += "1";
        }else{

            z += "0";
        }
    }

    cout << z;

    return 0;
}