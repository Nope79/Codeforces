#include <iostream>

// Master79
// Word on the Paper

using namespace std;

char mat[15][15];

void escribir(){

    for(int i = 0;i < 8; i++){

        for(int j = 0; j < 8; j++){

            cin >> mat[i][j];
        }
    }
}

string leer(){

    string x = "";

    for(int i = 0; i < 8; i++){

        for(int j = 0; j < 8; j++){

            if(mat[i][j] != '.'){

                x += mat[i][j];
            }
        }
    }

    return x;
}

int main(){

    int t;
    cin >> t;

    for(int i = 0; i < t; i++){

        escribir();
        cout << leer() << endl;
    }

    return 0;
}