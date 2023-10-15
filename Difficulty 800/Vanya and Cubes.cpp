#include <iostream>

// Master79
// Vanya and Cubes

using namespace std;

int contarNivelesPiramide(int n);

int main(){

    int n;
    cin >> n;

    cout << contarNivelesPiramide(n);

    return 0;
}

int contarNivelesPiramide(int n){

    int suma = 0;
    int x = 1;
    int contador = 0;

    while(suma < n){

        for(int i = 1; i <= x; i++){

            suma += i;

            if(i == x && suma <= n){

                contador++;
            }
        }
        
        x++;
    }

    return contador;
}