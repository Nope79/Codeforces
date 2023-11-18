#include <iostream>

// Master79
// Park Lighting

using namespace std;

int main(){

    int t, n, m;

    cin >> t;

    for(int i = 0 ; i < t; i++){

        cin >> n >> m;

        if(n % 2 == 0 || m % 2 == 0){

            if(n % 2 == 0){

                cout << (n / 2 * m) << endl;
            }else{

                cout << (m / 2 * n) << endl;
            }
        }else{

            cout << ((n * (m / 2) + ((n + 1) / 2))) << endl;
        }
    }

    return 0;
}