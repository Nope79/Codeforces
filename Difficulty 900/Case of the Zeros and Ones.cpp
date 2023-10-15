#include <iostream>
#include <vector>

// Master79
// Case of the Zeros and Ones

using namespace std;

void rellenarVector(vector <char>& v, int n);

int contarZero(vector <char>& v);
int contarOne(vector <char>& v);

int main(){

    std::ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector <char> v;

    rellenarVector(v, n);

    int ceros = contarZero(v);
    int unos = contarOne(v);

    if(unos > ceros){

        cout << unos - ceros;
    }

    else if(ceros > unos){

        cout << ceros - unos;
    }else{

        cout << 0;
    }

    return 0;
}

void rellenarVector(vector <char>& v, int n){

    for(int i = 0; i < n; i++){

        char c;
        cin >> c;

        v.push_back(c);
    }
}

int contarZero(vector <char>& v){

    int contador = 0;

    for(int i = 0; i < v.size(); i++){

        if(v[i] == '0'){

            contador++;
        }
    }

    return contador;
}

int contarOne(vector <char>& v){

    int contador = 0;

    for(int i = 0; i < v.size(); i++){

        if(v[i] == '1'){

            contador++;
        }
    }

    return contador;
}