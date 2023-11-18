#include <iostream>

// Master79
// Mishka and Game

using namespace std;

int main(){

    int juegos, M, C, cM = 0, cC = 0;

    cin >> juegos;

    for(int i = 0; i < juegos; i++){

        cin >> M >> C;

        if(M > C){

            cM++;
        }
        else if(M < C){

            cC++;
        }
    }

    (cM > cC) ? cout << "Mishka" : (cM < cC) ? cout << "Chris" : cout << "Friendship is magic!^^";

    return 0;
}