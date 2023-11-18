#include <iostream>
#include <vector>

// Master79
// Medium Number

using namespace std;

vector <int> v;

void ordenar(){

    int aux;

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

int main(){

    int t;
    cin >> t;

    int x;

    for(int i = 0; i < t; i++){

        cin >> x;
        v.push_back(x);

        cin >> x;
        v.push_back(x);

        cin >> x;
        v.push_back(x);

        ordenar();

        cout << v[1] << endl;

        v.clear();
    }
}