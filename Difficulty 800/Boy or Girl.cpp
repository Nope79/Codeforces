#include <iostream>

// Master79
// Boy or Girl

using namespace std;

void charZero(string& x, int posicion);

int main(){

    string x;

    getline(cin, x);

    for(int i = 0; i < x.size(); i++){

        if(x[i] != '0'){

            charZero(x, i);
        }
    }

    int contador = 0;

    for(int i = 0; i < x.size(); i++){

        if(x[i] != '0'){

            contador++;

        }
    }

    if(contador % 2 == 0){

        cout << "CHAT WITH HER!";
    }else{

        cout << "IGNORE HIM!";
    }

    return 0;
}

void charZero(string& x, int posicion){

    for(int i = posicion + 1; i < x.size(); i++){

        if(x[posicion] == x[i]){

            x[i] = '0';
        }
    }
}