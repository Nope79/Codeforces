#include <iostream>

// Master79
// Bachgold Problem

using namespace std;

int main(){

    int n;
    cin >> n;

    if(n % 2 == 0){

        cout << n / 2 << endl;

        for(int i = 0; i < n / 2; i++){

            cout << 2 << " ";
        }
    }else{

        cout << n / 2 << endl;

        n -= 3;

        for(int i = 0; i < n / 2; i++){

            cout << 2 << " ";
        }

        cout << 3;
    }

    return 0;
}