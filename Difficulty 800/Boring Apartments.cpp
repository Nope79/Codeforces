#include <iostream>

// Master79
// Boring Apartments

using namespace std;

int sumatorias(string x);

int main(){

    int t;
    cin >> t;

    string x;

    getline(cin, x);

    for(int i = 0; i < t; i++){

        getline(cin, x);

        cout << sumatorias(x) << endl;
    }

    return 0;
}

int sumatorias(string x){

    int z = x[0];
    int huesped = 0;
    z -= 48;

    if(x.size() == 4){

        huesped = (10 * (z - 1)) + 10;
    }

    else if(x.size() == 3){

        huesped = (10 * (z - 1)) + 6;
    }

    else if(x.size() == 2){

        huesped = (10 * (z - 1)) + 3;
    }else{

        huesped = (10 * (z - 1)) + 1;
    }

    return huesped;
}