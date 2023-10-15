#include <iostream>

// Master79
// Anton and Polyhedrons

using namespace std;

int main(){

    int n;
    cin >> n;

    string figura;
    getline(cin, figura);

    int contador = 0;

    for(int i = 0; i < n; i++){

        getline(cin, figura);

        if(figura == "Tetrahedron"){

            contador += 4;
        }

        else if(figura == "Cube"){

            contador += 6;
        }

        else if(figura == "Octahedron"){

            contador += 8;
        }

        else if(figura == "Dodecahedron"){

            contador += 12;
        }

        else if(figura == "Icosahedron"){

            contador += 20;
        }
    }

    cout << contador;

    return 0;
}