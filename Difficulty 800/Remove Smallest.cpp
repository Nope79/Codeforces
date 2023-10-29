#include <iostream>
#include <vector>

// Master79
// Remove Smallest

using namespace std;

vector <int> v;

void ordenar();
bool rango();

int main(){

    int t, n, x;

    cin >> t;

    for(int i = 0; i < t; i++){

        cin >> n;

        for(int i = 0; i < n; i++){

            cin >> x;

            v.push_back(x);
        }

        ordenar();

        (rango() == true) ? cout << "YES\n" : cout << "NO\n";

        v.clear();
    }

    return 0;
}

void ordenar(){

    int aux;

    for(int i = 0; i < v.size(); i++){

        for(int j = 0; j < v.size() - 1; j++){

            if(v[j] > v[j + 1]){

                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}

bool rango(){

    for(int i = 0; i < v.size() - 1; i++){

        if((v[i + 1] - v[i]) > 1){

            return false;
        }
    }

    return true;
}