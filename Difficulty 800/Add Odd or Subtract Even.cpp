#include <iostream>

// Master79
// Add Odd or Subtract Even

using namespace std;

int main(){

    int t, a, b;
    cin >> t;

    for(int i = 0; i < t; i++){

        cin >> a >> b;

        if(a == b){

            cout << 0 << endl;
        }

        else if(a % 2 == 0 && b % 2 == 0){

            if(a < b){
                    
                cout << 2 << endl;
            }

            else if(a > b){

                cout << 1 << endl;
            }
        }

        else if(a % 2 != 0 && b % 2 != 0){

            if(a < b){

                cout << 2 << endl;
            }

            else if(a > b){

                cout << 1 << endl;
            }
        }

        else if(a % 2 == 0 && b % 2 != 0){

            if(a < b){

                cout << 1 << endl;
            }

            else if(a > b){

                cout << 2 << endl;
            }
        }

        else if(a % 2 != 0 && b % 2 == 0){

            if(a < b){

                cout << 1 << endl;
            }

            else if(a > b){

                cout << 2 << endl;
            }
        }
    }

    return 0;
}