#include <iostream>
#include <vector>

// Master79
// Holiday Of Equality

using namespace std;

void rellenarVector(vector <int>& v, int n);
void ordenarVector(vector <int>& v);
int diferencia(vector <int>& v, int max);

int main(){

    vector <int> v;

    int n;
    cin >> n;

    rellenarVector(v, n);
    ordenarVector(v);

    int max = v[0];

    cout << diferencia(v, max);

    return 0;
}

void rellenarVector(vector <int>& v, int n){

    for(int i = 0; i < n; i++){

        int y;
        cin >> y;

        v.push_back(y);
    }
}

void ordenarVector(vector <int>& v){

    int aux = 0;

    for(int i = 0; i < v.size(); i++){

        for(int j = 0; j < v.size() - 1; j++){

            if(v[j] < v[j + 1]){

                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}

int diferencia(vector <int>& v, int max){

    int contador = 0;

    for(int i = 0; i < v.size(); i++){

        contador += max - v[i];
    }

    return contador;
}