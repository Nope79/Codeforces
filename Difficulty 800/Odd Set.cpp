#include <iostream>

// Master79
// Odd Set

using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i = 0; i < t; i++){

        int n;
        cin >> n;

        int contPar = 0;
        int contImpar = 0;

        for(int i = 0; i < n * 2; i++){

            int x;
            cin >> x;

            if(x % 2 == 0){

                contPar++;
            }else{

                contImpar++;
            }
        }

        if(contPar == contImpar){

            cout << "Yes\n";
        }else{

            cout << "No\n";
        }
    }

    return 0;
}