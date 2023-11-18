#include <iostream>

// Master79
// Insomnia cure

using namespace std;

int arreglo[100000];
int k, l, m, n, d;

void rellenar(int n);
int contarDragones();

int main(){

    cin >> k >> l >> m >> n >> d;

    if(k == 1 || l == 1 || m == 0 || n == 0){

        cout << d;
    }else{

        rellenar(k);
        rellenar(l);
        rellenar(m);
        rellenar(n);

        cout << contarDragones();
    }

    return 0;
}

void rellenar(int n){

    int aux = n;

    while(n <= d){

        arreglo[n]++;
        n += aux;
    }
}

int contarDragones(){

    int contador = 0;

    for(int i = 1; i <= d; i++){

        if(arreglo[i] > 0){

            contador++;
        }
    }

    return contador;
}