#include <iostream>

// Master79
// Bit++

using namespace std;

int resultadoX(int n);

int main(){

    std::ios::sync_with_stdio(false);

    int x;
    cin >> x;

    string basura;

    getline(cin, basura);

    cout << resultadoX(x);

    return 0;
}

int resultadoX(int n){

    int contador = 0;

    for(int i = 0; i < n; i++){

        string x;

        getline(cin, x);

        if(x == "++X" || x == "X++"){

            contador++;
        }else{

            contador--;
        }
    }

    return contador;
}