#include <iostream>

// Master79
// Division?

using namespace std;

int main(){

    int t;
    cin >>t;
    
    for(int i = 0; i < t; i++){

        int x;
        cin >> x;

        if(1900 <= x){

            cout << "Division 1\n";
        }

        else if(1600 <= x){

            cout << "Division 2\n";
        }

        else if(1400 <= x){

            cout << "Division 3\n";
        }else{

            cout << "Division 4\n";
        }
    }

    return 0;
}