#include <iostream>

// Master79
// Hulk

using namespace std;

void imprimirSentimientos(int n);

int main(){

    std::ios::sync_with_stdio(false);

    int n;
    cin >> n;

    imprimirSentimientos(n);

    return 0;
}

void imprimirSentimientos(int n){

    for(int i = 1; i <= n; i++){

        if(i % 2 == 0){

            if(i == n){

                cout << "I love it ";
            }else{

                cout << "I love that ";
            }
        }else{

            if(i == n){

                cout << "I hate it ";
            }else{

                cout << "I hate that ";
            }
        }
    }
}