#include <iostream>

// Master79
// Lucky?

using namespace std;

void ticket();

int main(){

    int n = 0;
    cin >> n;

    for(int i = 0; i < n; i++){

        ticket();
    }

    return 0;
}

void ticket(){

    int a = 0;

    for(int i = 0; i < 3; i++){

        char a1;
        cin >> a1;

        a += (a1 - 48);
    }

    int b = 0;

    for(int i = 0; i < 3; i++){

        char b1;
        cin >> b1;

        // -48

        b += (b1 - 48);
    }

    (a == b) ? cout << "YES\n" : cout << "NO\n";
}