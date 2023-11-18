#include <iostream>
#include <vector>

// Master79
// Plus One on the Subset

using namespace std;

vector <int> v;

void ordenar(){

    int aux = 0;

    for(int i = 0; i < v.size(); i++){

        for(int j = 0; j < v.size()- i - 1; j++){

            if(v[j] > v[j + 1]){

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

    for(int i = 0; i < t; i++){

        int n;
        cin >> n;

        for(int j = 0; j < n; j++){

            int x;
            cin >> x;

            v.push_back(x);
        }
        ordenar();

        cout <<v[v.size() - 1] - v[0] << endl;
        v.clear();
    }

    return 0;
}