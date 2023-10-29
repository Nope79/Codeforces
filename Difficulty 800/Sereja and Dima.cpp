#include <iostream>
#include <vector>

// Master79
// Sereja and Dima

using namespace std;

 vector <int> v;

int actualizarVector();

int main(){

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){

        int x;
        cin >> x;

        v.push_back(x);
    }

    int s = 0;
    int d = 0;

    for(int i = 0; i < n; i++){

        if(i % 2 == 0){

            s += actualizarVector();
        }else{

            d += actualizarVector();
        }
    }

    cout << s << " " << d;

    return 0;
}

int actualizarVector(){

    int mayor = 0;

    if(v[0] >= v[v.size() - 1]){

        mayor = v[0];
        for(int i = 0; i < v.size() - 1; i++){

            v[i] = v[i + 1];
        }

        v.pop_back();
    }else{

        mayor = v[v.size() - 1];
        v.pop_back();
    }

    return mayor;
}