#include <iostream>

// Master79
// Translation

using namespace std;

void traduccion(string x, string y);

int main(){

    string x, y;

    getline(cin, x);
    getline(cin, y);

    traduccion(x, y);

    return 0;
}

void traduccion(string x, string y){

    int tam = x.size() - 1;

    bool bandera = true;

    for(int i = 0; i < x.size(); i++){

        if(x[i] != y[tam]){

            bandera = false;
        }else{

            tam--;
        }
    }
    if(bandera == true){

        cout << "YES";
    }else{

    cout <<"NO";
    }
}